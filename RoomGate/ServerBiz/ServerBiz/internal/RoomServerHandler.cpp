
#include "MessageMapping.h"
#include "RoomServerHandler.h"
#include "TcpServerManager.h"


CRoomServerHandler::CRoomServerHandler()
{
}

CRoomServerHandler::~CRoomServerHandler()
{
}

int CRoomServerHandler::do_open()
{
	SL_Socket_CommonAPI::socket_set_tcpnodelay(socket_, 1);

	CTcpServerManager::Instance()->GetRoomServerManager()->GetBridge()->GetSendControl()->add_handler(this, this);

	return 0;
}

int CRoomServerHandler::do_message(const char *msg, int len)
{
	SL_Rpc_MessageParser::parse_head_ex<SL_Rpc_MessageHeadEx>((char *)msg, len);
	SL_Rpc_MessageHeadEx *msg_head = (SL_Rpc_MessageHeadEx*)msg;

#ifdef SET_SERVER_LOG
	SL_LOG_TRACE(logger, "msghead: type:"<<msg_head->type<<" from:"<<msg_head->source<<" to:"<<msg_head->destination<<" room_id:"<<msg_head->attach_id1<<" roomservice_id:"<<msg_head->attach_id2<<" roomgate_id:"<<msg_head->attach_id3);
#endif

	int ret = -1;

	SL_Seda_RpcMessageEvent rpc_event;

	switch (msg_head->type)
	{
	case common::MessageType::MT_HELLO_NOTIFY:
		{
			ret = SL_Rpc_MessageParser::message_to_event<MsgHelloNotify>((char*)msg, len, socket_, this, CMainStageHandler::RS_HelloNotify, &rpc_event, NULL);		
		}
		break;

	//case common::MessageType::MT_HELLO_RES:
	//	{
	//		ret = SL_Rpc_MessageParser::message_to_event<MsgRoomGateHelloRes>((char*)msg, len, socket_, this, CMainStageHandler::RS_ConnectRes, &rpc_event, NULL);
	//	}
	//	break;

	default:
		{
			int res = -1;

			SL_Seda_RpcTransmitEvent transmit_event;

			switch(msg_head->type)
			{
			//case room_server::MessageType::MT_ENTER_ROOM_RES:
			//case room_server::MessageType::MT_LEAVE_ROOM_RES:
			//case room_server::MessageType::MT_ENTER_ROOM_NOTIFY:
			//	{
			//		int from_user_id = msg_head->source;
			//		int to_user_id = msg_head->destination;

			//		SL_Rpc_MessageParser::serialize_head_ex<SL_Rpc_MessageHeadEx>(msg_head);

			//		res = SL_Rpc_MessageParser::transmit_to_server((char*)msg, len, from_user_id, to_user_id, CMainStageHandler::TransmitToRGRequest, &transmit_event);
			//	}
			//	break;

			default:
				break;
			}

			if (res >= 0)
			{
				CTcpServerManager::Instance()->GetSedaStageHandler()->push_event(&transmit_event);
			}

			return 0;
		}
	}

	if (ret >= 0)
	{
		CTcpServerManager::Instance()->GetSedaStageHandler()->push_event(&rpc_event);
	}

	return 0;
}

int CRoomServerHandler::do_close()
{
	SL_Seda_TcpSocketCloseEvent expire_event;

	expire_event.socket_handler_id = socket_;
	expire_event.socket_handler = this;
	expire_event.rpc_proc = CMainStageHandler::ServiceDisconnect;
	expire_event.attach_id1 = SERVER_REGISTER_TYPE_ROOM;

	CTcpServerManager::Instance()->GetSedaStageHandler()->push_event(&expire_event);

	return 0;
}