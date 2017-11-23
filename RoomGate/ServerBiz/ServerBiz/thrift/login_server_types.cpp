/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "login_server_types.h"

#include <algorithm>

namespace community { namespace login_server {

int _kMessageTypeValues[] = {
  MessageType::MT_CLIENT_PASSWORD_LOGIN_REQ,
  MessageType::MT_CLIENT_LOGIN_RES,
  MessageType::MT_CLIENT_LOGOUT_REQ,
  MessageType::MT_CLIENT_LOGOUT_RES,
  MessageType::MT_UPDATE_RESOURCE_RES
};
const char* _kMessageTypeNames[] = {
  "MT_CLIENT_PASSWORD_LOGIN_REQ",
  "MT_CLIENT_LOGIN_RES",
  "MT_CLIENT_LOGOUT_REQ",
  "MT_CLIENT_LOGOUT_RES",
  "MT_UPDATE_RESOURCE_RES"
};
const std::map<int, const char*> _MessageType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kMessageTypeValues, _kMessageTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* ClientPasswordLoginReq::ascii_fingerprint = "16A94A80CDF00C1AAB16732DEBC5130D";
const uint8_t ClientPasswordLoginReq::binary_fingerprint[16] = {0x16,0xA9,0x4A,0x80,0xCD,0xF0,0x0C,0x1A,0xAB,0x16,0x73,0x2D,0xEB,0xC5,0x13,0x0D};

uint32_t ClientPasswordLoginReq::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->client_random);
          this->__isset.client_random = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->client_mac);
          this->__isset.client_mac = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->client_version);
          this->__isset.client_version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->check_sum);
          this->__isset.check_sum = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ClientPasswordLoginReq::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ClientPasswordLoginReq");

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_random", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->client_random);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_mac", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->client_mac);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_version", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->client_version);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("check_sum", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->check_sum);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ClientPasswordLoginReq &a, ClientPasswordLoginReq &b) {
  using ::std::swap;
  swap(a.user_id, b.user_id);
  swap(a.client_random, b.client_random);
  swap(a.client_mac, b.client_mac);
  swap(a.client_version, b.client_version);
  swap(a.check_sum, b.check_sum);
  swap(a.__isset, b.__isset);
}

const char* ClientPasswordLoginReqChecksum::ascii_fingerprint = "402AD47659A8C66675C5D0A8EF2484F9";
const uint8_t ClientPasswordLoginReqChecksum::binary_fingerprint[16] = {0x40,0x2A,0xD4,0x76,0x59,0xA8,0xC6,0x66,0x75,0xC5,0xD0,0xA8,0xEF,0x24,0x84,0xF9};

uint32_t ClientPasswordLoginReqChecksum::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->password);
          this->__isset.password = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->client_random);
          this->__isset.client_random = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->server_random);
          this->__isset.server_random = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ClientPasswordLoginReqChecksum::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ClientPasswordLoginReqChecksum");

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("password", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->password);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_random", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->client_random);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("server_random", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->server_random);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ClientPasswordLoginReqChecksum &a, ClientPasswordLoginReqChecksum &b) {
  using ::std::swap;
  swap(a.user_id, b.user_id);
  swap(a.password, b.password);
  swap(a.client_random, b.client_random);
  swap(a.server_random, b.server_random);
  swap(a.__isset, b.__isset);
}

const char* ClientTicketLoginReqChecksum::ascii_fingerprint = "402AD47659A8C66675C5D0A8EF2484F9";
const uint8_t ClientTicketLoginReqChecksum::binary_fingerprint[16] = {0x40,0x2A,0xD4,0x76,0x59,0xA8,0xC6,0x66,0x75,0xC5,0xD0,0xA8,0xEF,0x24,0x84,0xF9};

uint32_t ClientTicketLoginReqChecksum::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->session_ticket);
          this->__isset.session_ticket = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->client_random);
          this->__isset.client_random = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->server_random);
          this->__isset.server_random = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ClientTicketLoginReqChecksum::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ClientTicketLoginReqChecksum");

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("session_ticket", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->session_ticket);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_random", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->client_random);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("server_random", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->server_random);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ClientTicketLoginReqChecksum &a, ClientTicketLoginReqChecksum &b) {
  using ::std::swap;
  swap(a.user_id, b.user_id);
  swap(a.session_ticket, b.session_ticket);
  swap(a.client_random, b.client_random);
  swap(a.server_random, b.server_random);
  swap(a.__isset, b.__isset);
}

const char* ClientLoginRes::ascii_fingerprint = "B7D287EB4F91A178784A73918FA36C1A";
const uint8_t ClientLoginRes::binary_fingerprint[16] = {0xB7,0xD2,0x87,0xEB,0x4F,0x91,0xA1,0x78,0x78,0x4A,0x73,0x91,0x8F,0xA3,0x6C,0x1A};

uint32_t ClientLoginRes::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->error_code);
          this->__isset.error_code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->error_text);
          this->__isset.error_text = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->user_info);
          this->__isset.user_info = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->session_ticket);
          this->__isset.session_ticket = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->room_gate_info.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->room_gate_info.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->room_gate_info[_i4].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.room_gate_info = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ClientLoginRes::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ClientLoginRes");

  xfer += oprot->writeFieldBegin("error_code", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->error_code);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("error_text", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->error_text);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("user_info", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->user_info);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("session_ticket", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->session_ticket);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("room_gate_info", ::apache::thrift::protocol::T_LIST, 5);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->room_gate_info.size()));
    std::vector< ::community::common::ServiceInfo> ::const_iterator _iter5;
    for (_iter5 = this->room_gate_info.begin(); _iter5 != this->room_gate_info.end(); ++_iter5)
    {
      xfer += (*_iter5).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ClientLoginRes &a, ClientLoginRes &b) {
  using ::std::swap;
  swap(a.error_code, b.error_code);
  swap(a.error_text, b.error_text);
  swap(a.user_info, b.user_info);
  swap(a.session_ticket, b.session_ticket);
  swap(a.room_gate_info, b.room_gate_info);
  swap(a.__isset, b.__isset);
}

const char* ClientLoginResUserInfo::ascii_fingerprint = "59BAC27122966B3FA058EFE417BDA97C";
const uint8_t ClientLoginResUserInfo::binary_fingerprint[16] = {0x59,0xBA,0xC2,0x71,0x22,0x96,0x6B,0x3F,0xA0,0x58,0xEF,0xE4,0x17,0xBD,0xA9,0x7C};

uint32_t ClientLoginResUserInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->user_name);
          this->__isset.user_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->email);
          this->__isset.email = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->nick_name);
          this->__isset.nick_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->avatar_url);
          this->__isset.avatar_url = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->client_ip);
          this->__isset.client_ip = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ClientLoginResUserInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ClientLoginResUserInfo");

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("user_name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->user_name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("email", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->email);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("nick_name", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->nick_name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("avatar_url", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->avatar_url);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_ip", ::apache::thrift::protocol::T_STRING, 6);
  xfer += oprot->writeString(this->client_ip);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ClientLoginResUserInfo &a, ClientLoginResUserInfo &b) {
  using ::std::swap;
  swap(a.user_id, b.user_id);
  swap(a.user_name, b.user_name);
  swap(a.email, b.email);
  swap(a.nick_name, b.nick_name);
  swap(a.avatar_url, b.avatar_url);
  swap(a.client_ip, b.client_ip);
  swap(a.__isset, b.__isset);
}

const char* LogoutReq::ascii_fingerprint = "3F5FC93B338687BC7235B1AB103F47B3";
const uint8_t LogoutReq::binary_fingerprint[16] = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

uint32_t LogoutReq::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->session_ticket);
          this->__isset.session_ticket = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t LogoutReq::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("LogoutReq");

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("session_ticket", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->session_ticket);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(LogoutReq &a, LogoutReq &b) {
  using ::std::swap;
  swap(a.user_id, b.user_id);
  swap(a.session_ticket, b.session_ticket);
  swap(a.__isset, b.__isset);
}

const char* LogoutRes::ascii_fingerprint = "0D0E376BC3AE6606497788AA82F73617";
const uint8_t LogoutRes::binary_fingerprint[16] = {0x0D,0x0E,0x37,0x6B,0xC3,0xAE,0x66,0x06,0x49,0x77,0x88,0xAA,0x82,0xF7,0x36,0x17};

uint32_t LogoutRes::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->error_code);
          this->__isset.error_code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t LogoutRes::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("LogoutRes");

  xfer += oprot->writeFieldBegin("error_code", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->error_code);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(LogoutRes &a, LogoutRes &b) {
  using ::std::swap;
  swap(a.error_code, b.error_code);
  swap(a.user_id, b.user_id);
  swap(a.__isset, b.__isset);
}

const char* SessionTicket::ascii_fingerprint = "AD96F0D9C0BA17FACE6DCDF7A77C552C";
const uint8_t SessionTicket::binary_fingerprint[16] = {0xAD,0x96,0xF0,0xD9,0xC0,0xBA,0x17,0xFA,0xCE,0x6D,0xCD,0xF7,0xA7,0x7C,0x55,0x2C};

uint32_t SessionTicket::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->user_name);
          this->__isset.user_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->email);
          this->__isset.email = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->nick_name);
          this->__isset.nick_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->base_role_id);
          this->__isset.base_role_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->client_ip);
          this->__isset.client_ip = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->client_mac);
          this->__isset.client_mac = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->client_version);
          this->__isset.client_version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->app_id);
          this->__isset.app_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->session_id);
          this->__isset.session_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->session_key);
          this->__isset.session_key = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->create_time);
          this->__isset.create_time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 13:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->end_time);
          this->__isset.end_time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SessionTicket::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("SessionTicket");

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("user_name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->user_name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("email", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->email);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("nick_name", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->nick_name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("base_role_id", ::apache::thrift::protocol::T_I16, 5);
  xfer += oprot->writeI16(this->base_role_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_ip", ::apache::thrift::protocol::T_STRING, 6);
  xfer += oprot->writeString(this->client_ip);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_mac", ::apache::thrift::protocol::T_STRING, 7);
  xfer += oprot->writeString(this->client_mac);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_version", ::apache::thrift::protocol::T_STRING, 8);
  xfer += oprot->writeString(this->client_version);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("app_id", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32(this->app_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("session_id", ::apache::thrift::protocol::T_STRING, 10);
  xfer += oprot->writeString(this->session_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("session_key", ::apache::thrift::protocol::T_STRING, 11);
  xfer += oprot->writeString(this->session_key);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("create_time", ::apache::thrift::protocol::T_I64, 12);
  xfer += oprot->writeI64(this->create_time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("end_time", ::apache::thrift::protocol::T_I64, 13);
  xfer += oprot->writeI64(this->end_time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SessionTicket &a, SessionTicket &b) {
  using ::std::swap;
  swap(a.user_id, b.user_id);
  swap(a.user_name, b.user_name);
  swap(a.email, b.email);
  swap(a.nick_name, b.nick_name);
  swap(a.base_role_id, b.base_role_id);
  swap(a.client_ip, b.client_ip);
  swap(a.client_mac, b.client_mac);
  swap(a.client_version, b.client_version);
  swap(a.app_id, b.app_id);
  swap(a.session_id, b.session_id);
  swap(a.session_key, b.session_key);
  swap(a.create_time, b.create_time);
  swap(a.end_time, b.end_time);
  swap(a.__isset, b.__isset);
}

const char* UpdateResourceReq::ascii_fingerprint = "07A9615F837F7D0A952B595DD3020972";
const uint8_t UpdateResourceReq::binary_fingerprint[16] = {0x07,0xA9,0x61,0x5F,0x83,0x7F,0x7D,0x0A,0x95,0x2B,0x59,0x5D,0xD3,0x02,0x09,0x72};

uint32_t UpdateResourceReq::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->client_version);
          this->__isset.client_version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->resource_version);
          this->__isset.resource_version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UpdateResourceReq::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("UpdateResourceReq");

  xfer += oprot->writeFieldBegin("client_version", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->client_version);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("resource_version", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->resource_version);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(UpdateResourceReq &a, UpdateResourceReq &b) {
  using ::std::swap;
  swap(a.client_version, b.client_version);
  swap(a.resource_version, b.resource_version);
  swap(a.__isset, b.__isset);
}

const char* UpdateResourceRes::ascii_fingerprint = "F1DAF49F30E6FEDF1015861FA80FE4E6";
const uint8_t UpdateResourceRes::binary_fingerprint[16] = {0xF1,0xDA,0xF4,0x9F,0x30,0xE6,0xFE,0xDF,0x10,0x15,0x86,0x1F,0xA8,0x0F,0xE4,0xE6};

uint32_t UpdateResourceRes::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->result);
          this->__isset.result = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->update_type);
          this->__isset.update_type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->new_source_version);
          this->__isset.new_source_version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->download_url);
          this->__isset.download_url = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->md5_value);
          this->__isset.md5_value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->feature_url);
          this->__isset.feature_url = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->file_size);
          this->__isset.file_size = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UpdateResourceRes::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("UpdateResourceRes");

  xfer += oprot->writeFieldBegin("result", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->result);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("update_type", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->update_type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("new_source_version", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->new_source_version);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("download_url", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->download_url);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("md5_value", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->md5_value);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("feature_url", ::apache::thrift::protocol::T_STRING, 6);
  xfer += oprot->writeString(this->feature_url);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("file_size", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->file_size);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(UpdateResourceRes &a, UpdateResourceRes &b) {
  using ::std::swap;
  swap(a.result, b.result);
  swap(a.update_type, b.update_type);
  swap(a.new_source_version, b.new_source_version);
  swap(a.download_url, b.download_url);
  swap(a.md5_value, b.md5_value);
  swap(a.feature_url, b.feature_url);
  swap(a.file_size, b.file_size);
  swap(a.__isset, b.__isset);
}

}} // namespace
