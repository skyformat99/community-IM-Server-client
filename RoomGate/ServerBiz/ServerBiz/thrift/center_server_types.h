/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef center_server_TYPES_H
#define center_server_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "common_types.h"


namespace community { namespace center_server {

struct MessageType {
  enum type {
    MT_LOGIN_REQ = 300,
    MT_LOGIN_RES = 301,
    MT_LOGOUT_REQ = 302,
    MT_LOGOUT_RES = 303,
    MT_INITIALIZE_ROOMSERVER_REQ = 304,
    MT_INITIALIZE_ROOMSERVER_RES = 305,
    MT_DBPROXY_UPDATE_NOTIFY = 306,
    MT_DBPROXY_UPDATE_RES = 307,
    MT_ROOMGATE_UPDATE_NOTIFY = 308,
    MT_ROOMGATE_UPDATE_RES = 309,
    MT_ROOMSERVER_UPDATE_NOTIFY = 310,
    MT_ROOMSERVER_UPDATE_RES = 311,
    MT_ENTER_ROOM_REQ = 312,
    MT_ENTER_ROOM_RES = 313,
    MT_LEAVE_ROOM_REQ = 314,
    MT_LEAVE_ROOM_RES = 315,
    MT_USER_QUERY_REQ = 316,
    MT_USER_QUERY_RES = 317
  };
};

extern const std::map<int, const char*> _MessageType_VALUES_TO_NAMES;

typedef struct _CenterServerLoginServerHelloRes__isset {
  _CenterServerLoginServerHelloRes__isset() : error_code(false), error_text(false), room_gate_list(false) {}
  bool error_code;
  bool error_text;
  bool room_gate_list;
} _CenterServerLoginServerHelloRes__isset;

class CenterServerLoginServerHelloRes {
 public:

  static const char* ascii_fingerprint; // = "02555DAC126A9800E309EA18DCC7632C";
  static const uint8_t binary_fingerprint[16]; // = {0x02,0x55,0x5D,0xAC,0x12,0x6A,0x98,0x00,0xE3,0x09,0xEA,0x18,0xDC,0xC7,0x63,0x2C};

  CenterServerLoginServerHelloRes() : error_code(0), error_text() {
  }

  virtual ~CenterServerLoginServerHelloRes() throw() {}

  int16_t error_code;
  std::string error_text;
  std::vector< ::community::common::ServiceInfo>  room_gate_list;

  _CenterServerLoginServerHelloRes__isset __isset;

  void __set_error_code(const int16_t val) {
    error_code = val;
  }

  void __set_error_text(const std::string& val) {
    error_text = val;
  }

  void __set_room_gate_list(const std::vector< ::community::common::ServiceInfo> & val) {
    room_gate_list = val;
  }

  bool operator == (const CenterServerLoginServerHelloRes & rhs) const
  {
    if (!(error_code == rhs.error_code))
      return false;
    if (!(error_text == rhs.error_text))
      return false;
    if (!(room_gate_list == rhs.room_gate_list))
      return false;
    return true;
  }
  bool operator != (const CenterServerLoginServerHelloRes &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerLoginServerHelloRes & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerLoginServerHelloRes &a, CenterServerLoginServerHelloRes &b);

typedef struct _CenterServerRoomGateHelloRes__isset {
  _CenterServerRoomGateHelloRes__isset() : error_code(false), error_text(false), room_server_list(false) {}
  bool error_code;
  bool error_text;
  bool room_server_list;
} _CenterServerRoomGateHelloRes__isset;

class CenterServerRoomGateHelloRes {
 public:

  static const char* ascii_fingerprint; // = "02555DAC126A9800E309EA18DCC7632C";
  static const uint8_t binary_fingerprint[16]; // = {0x02,0x55,0x5D,0xAC,0x12,0x6A,0x98,0x00,0xE3,0x09,0xEA,0x18,0xDC,0xC7,0x63,0x2C};

  CenterServerRoomGateHelloRes() : error_code(0), error_text() {
  }

  virtual ~CenterServerRoomGateHelloRes() throw() {}

  int16_t error_code;
  std::string error_text;
  std::vector< ::community::common::ServiceInfo>  room_server_list;

  _CenterServerRoomGateHelloRes__isset __isset;

  void __set_error_code(const int16_t val) {
    error_code = val;
  }

  void __set_error_text(const std::string& val) {
    error_text = val;
  }

  void __set_room_server_list(const std::vector< ::community::common::ServiceInfo> & val) {
    room_server_list = val;
  }

  bool operator == (const CenterServerRoomGateHelloRes & rhs) const
  {
    if (!(error_code == rhs.error_code))
      return false;
    if (!(error_text == rhs.error_text))
      return false;
    if (!(room_server_list == rhs.room_server_list))
      return false;
    return true;
  }
  bool operator != (const CenterServerRoomGateHelloRes &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerRoomGateHelloRes & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerRoomGateHelloRes &a, CenterServerRoomGateHelloRes &b);

typedef struct _CenterServerRoomServerHelloRes__isset {
  _CenterServerRoomServerHelloRes__isset() : error_code(false), error_text(false), dbproxy_list(false) {}
  bool error_code;
  bool error_text;
  bool dbproxy_list;
} _CenterServerRoomServerHelloRes__isset;

class CenterServerRoomServerHelloRes {
 public:

  static const char* ascii_fingerprint; // = "02555DAC126A9800E309EA18DCC7632C";
  static const uint8_t binary_fingerprint[16]; // = {0x02,0x55,0x5D,0xAC,0x12,0x6A,0x98,0x00,0xE3,0x09,0xEA,0x18,0xDC,0xC7,0x63,0x2C};

  CenterServerRoomServerHelloRes() : error_code(0), error_text() {
  }

  virtual ~CenterServerRoomServerHelloRes() throw() {}

  int16_t error_code;
  std::string error_text;
  std::vector< ::community::common::ServiceInfo>  dbproxy_list;

  _CenterServerRoomServerHelloRes__isset __isset;

  void __set_error_code(const int16_t val) {
    error_code = val;
  }

  void __set_error_text(const std::string& val) {
    error_text = val;
  }

  void __set_dbproxy_list(const std::vector< ::community::common::ServiceInfo> & val) {
    dbproxy_list = val;
  }

  bool operator == (const CenterServerRoomServerHelloRes & rhs) const
  {
    if (!(error_code == rhs.error_code))
      return false;
    if (!(error_text == rhs.error_text))
      return false;
    if (!(dbproxy_list == rhs.dbproxy_list))
      return false;
    return true;
  }
  bool operator != (const CenterServerRoomServerHelloRes &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerRoomServerHelloRes & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerRoomServerHelloRes &a, CenterServerRoomServerHelloRes &b);

typedef struct _CenterServerDBProxyHelloRes__isset {
  _CenterServerDBProxyHelloRes__isset() : error_code(false), error_text(false) {}
  bool error_code;
  bool error_text;
} _CenterServerDBProxyHelloRes__isset;

class CenterServerDBProxyHelloRes {
 public:

  static const char* ascii_fingerprint; // = "15896F1A4438B1ECBB80CEA66AD0C4C5";
  static const uint8_t binary_fingerprint[16]; // = {0x15,0x89,0x6F,0x1A,0x44,0x38,0xB1,0xEC,0xBB,0x80,0xCE,0xA6,0x6A,0xD0,0xC4,0xC5};

  CenterServerDBProxyHelloRes() : error_code(0), error_text() {
  }

  virtual ~CenterServerDBProxyHelloRes() throw() {}

  int16_t error_code;
  std::string error_text;

  _CenterServerDBProxyHelloRes__isset __isset;

  void __set_error_code(const int16_t val) {
    error_code = val;
  }

  void __set_error_text(const std::string& val) {
    error_text = val;
  }

  bool operator == (const CenterServerDBProxyHelloRes & rhs) const
  {
    if (!(error_code == rhs.error_code))
      return false;
    if (!(error_text == rhs.error_text))
      return false;
    return true;
  }
  bool operator != (const CenterServerDBProxyHelloRes &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerDBProxyHelloRes & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerDBProxyHelloRes &a, CenterServerDBProxyHelloRes &b);

typedef struct _CenterServerLoginReq__isset {
  _CenterServerLoginReq__isset() : user_id(false), user_name(false), session_id(false), login_time(false) {}
  bool user_id;
  bool user_name;
  bool session_id;
  bool login_time;
} _CenterServerLoginReq__isset;

class CenterServerLoginReq {
 public:

  static const char* ascii_fingerprint; // = "11E169E548AA0ABA7F9A5BE88A736152";
  static const uint8_t binary_fingerprint[16]; // = {0x11,0xE1,0x69,0xE5,0x48,0xAA,0x0A,0xBA,0x7F,0x9A,0x5B,0xE8,0x8A,0x73,0x61,0x52};

  CenterServerLoginReq() : user_id(0), user_name(), session_id(), login_time(0) {
  }

  virtual ~CenterServerLoginReq() throw() {}

  int32_t user_id;
  std::string user_name;
  std::string session_id;
  int64_t login_time;

  _CenterServerLoginReq__isset __isset;

  void __set_user_id(const int32_t val) {
    user_id = val;
  }

  void __set_user_name(const std::string& val) {
    user_name = val;
  }

  void __set_session_id(const std::string& val) {
    session_id = val;
  }

  void __set_login_time(const int64_t val) {
    login_time = val;
  }

  bool operator == (const CenterServerLoginReq & rhs) const
  {
    if (!(user_id == rhs.user_id))
      return false;
    if (!(user_name == rhs.user_name))
      return false;
    if (!(session_id == rhs.session_id))
      return false;
    if (!(login_time == rhs.login_time))
      return false;
    return true;
  }
  bool operator != (const CenterServerLoginReq &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerLoginReq & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerLoginReq &a, CenterServerLoginReq &b);

typedef struct _CenterServerLogoutReq__isset {
  _CenterServerLogoutReq__isset() : user_id(false), user_name(false) {}
  bool user_id;
  bool user_name;
} _CenterServerLogoutReq__isset;

class CenterServerLogoutReq {
 public:

  static const char* ascii_fingerprint; // = "3F5FC93B338687BC7235B1AB103F47B3";
  static const uint8_t binary_fingerprint[16]; // = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

  CenterServerLogoutReq() : user_id(0), user_name() {
  }

  virtual ~CenterServerLogoutReq() throw() {}

  int32_t user_id;
  std::string user_name;

  _CenterServerLogoutReq__isset __isset;

  void __set_user_id(const int32_t val) {
    user_id = val;
  }

  void __set_user_name(const std::string& val) {
    user_name = val;
  }

  bool operator == (const CenterServerLogoutReq & rhs) const
  {
    if (!(user_id == rhs.user_id))
      return false;
    if (!(user_name == rhs.user_name))
      return false;
    return true;
  }
  bool operator != (const CenterServerLogoutReq &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerLogoutReq & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerLogoutReq &a, CenterServerLogoutReq &b);

typedef struct _CenterServerRoomGateUpdateNotify__isset {
  _CenterServerRoomGateUpdateNotify__isset() : update_type(false), room_gate_info(false) {}
  bool update_type;
  bool room_gate_info;
} _CenterServerRoomGateUpdateNotify__isset;

class CenterServerRoomGateUpdateNotify {
 public:

  static const char* ascii_fingerprint; // = "459C218EA0C7FFCBD9A58B0A5C6E283A";
  static const uint8_t binary_fingerprint[16]; // = {0x45,0x9C,0x21,0x8E,0xA0,0xC7,0xFF,0xCB,0xD9,0xA5,0x8B,0x0A,0x5C,0x6E,0x28,0x3A};

  CenterServerRoomGateUpdateNotify() : update_type(0) {
  }

  virtual ~CenterServerRoomGateUpdateNotify() throw() {}

  int16_t update_type;
   ::community::common::ServiceInfo room_gate_info;

  _CenterServerRoomGateUpdateNotify__isset __isset;

  void __set_update_type(const int16_t val) {
    update_type = val;
  }

  void __set_room_gate_info(const  ::community::common::ServiceInfo& val) {
    room_gate_info = val;
  }

  bool operator == (const CenterServerRoomGateUpdateNotify & rhs) const
  {
    if (!(update_type == rhs.update_type))
      return false;
    if (!(room_gate_info == rhs.room_gate_info))
      return false;
    return true;
  }
  bool operator != (const CenterServerRoomGateUpdateNotify &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerRoomGateUpdateNotify & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerRoomGateUpdateNotify &a, CenterServerRoomGateUpdateNotify &b);

typedef struct _CenterServerRoomServerUpdateNotify__isset {
  _CenterServerRoomServerUpdateNotify__isset() : update_type(false), room_server_info(false) {}
  bool update_type;
  bool room_server_info;
} _CenterServerRoomServerUpdateNotify__isset;

class CenterServerRoomServerUpdateNotify {
 public:

  static const char* ascii_fingerprint; // = "459C218EA0C7FFCBD9A58B0A5C6E283A";
  static const uint8_t binary_fingerprint[16]; // = {0x45,0x9C,0x21,0x8E,0xA0,0xC7,0xFF,0xCB,0xD9,0xA5,0x8B,0x0A,0x5C,0x6E,0x28,0x3A};

  CenterServerRoomServerUpdateNotify() : update_type(0) {
  }

  virtual ~CenterServerRoomServerUpdateNotify() throw() {}

  int16_t update_type;
   ::community::common::ServiceInfo room_server_info;

  _CenterServerRoomServerUpdateNotify__isset __isset;

  void __set_update_type(const int16_t val) {
    update_type = val;
  }

  void __set_room_server_info(const  ::community::common::ServiceInfo& val) {
    room_server_info = val;
  }

  bool operator == (const CenterServerRoomServerUpdateNotify & rhs) const
  {
    if (!(update_type == rhs.update_type))
      return false;
    if (!(room_server_info == rhs.room_server_info))
      return false;
    return true;
  }
  bool operator != (const CenterServerRoomServerUpdateNotify &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerRoomServerUpdateNotify & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerRoomServerUpdateNotify &a, CenterServerRoomServerUpdateNotify &b);

typedef struct _CenterServerDBProxyUpdateNotify__isset {
  _CenterServerDBProxyUpdateNotify__isset() : update_type(false), dbproxy_info(false) {}
  bool update_type;
  bool dbproxy_info;
} _CenterServerDBProxyUpdateNotify__isset;

class CenterServerDBProxyUpdateNotify {
 public:

  static const char* ascii_fingerprint; // = "459C218EA0C7FFCBD9A58B0A5C6E283A";
  static const uint8_t binary_fingerprint[16]; // = {0x45,0x9C,0x21,0x8E,0xA0,0xC7,0xFF,0xCB,0xD9,0xA5,0x8B,0x0A,0x5C,0x6E,0x28,0x3A};

  CenterServerDBProxyUpdateNotify() : update_type(0) {
  }

  virtual ~CenterServerDBProxyUpdateNotify() throw() {}

  int16_t update_type;
   ::community::common::ServiceInfo dbproxy_info;

  _CenterServerDBProxyUpdateNotify__isset __isset;

  void __set_update_type(const int16_t val) {
    update_type = val;
  }

  void __set_dbproxy_info(const  ::community::common::ServiceInfo& val) {
    dbproxy_info = val;
  }

  bool operator == (const CenterServerDBProxyUpdateNotify & rhs) const
  {
    if (!(update_type == rhs.update_type))
      return false;
    if (!(dbproxy_info == rhs.dbproxy_info))
      return false;
    return true;
  }
  bool operator != (const CenterServerDBProxyUpdateNotify &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerDBProxyUpdateNotify & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerDBProxyUpdateNotify &a, CenterServerDBProxyUpdateNotify &b);

typedef struct _RoomServerInitializeReq__isset {
  _RoomServerInitializeReq__isset() : room_server_id(false) {}
  bool room_server_id;
} _RoomServerInitializeReq__isset;

class RoomServerInitializeReq {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  RoomServerInitializeReq() : room_server_id(0) {
  }

  virtual ~RoomServerInitializeReq() throw() {}

  int32_t room_server_id;

  _RoomServerInitializeReq__isset __isset;

  void __set_room_server_id(const int32_t val) {
    room_server_id = val;
  }

  bool operator == (const RoomServerInitializeReq & rhs) const
  {
    if (!(room_server_id == rhs.room_server_id))
      return false;
    return true;
  }
  bool operator != (const RoomServerInitializeReq &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RoomServerInitializeReq & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RoomServerInitializeReq &a, RoomServerInitializeReq &b);

typedef struct _RoomGateInitializeReq__isset {
  _RoomGateInitializeReq__isset() : room_gate_id(false) {}
  bool room_gate_id;
} _RoomGateInitializeReq__isset;

class RoomGateInitializeReq {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  RoomGateInitializeReq() : room_gate_id(0) {
  }

  virtual ~RoomGateInitializeReq() throw() {}

  int32_t room_gate_id;

  _RoomGateInitializeReq__isset __isset;

  void __set_room_gate_id(const int32_t val) {
    room_gate_id = val;
  }

  bool operator == (const RoomGateInitializeReq & rhs) const
  {
    if (!(room_gate_id == rhs.room_gate_id))
      return false;
    return true;
  }
  bool operator != (const RoomGateInitializeReq &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RoomGateInitializeReq & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RoomGateInitializeReq &a, RoomGateInitializeReq &b);

typedef struct _CenterServerEnterRoomReq__isset {
  _CenterServerEnterRoomReq__isset() : user_id(false), user_name(false), room_id(false), room_service_id(false), room_gate_id(false) {}
  bool user_id;
  bool user_name;
  bool room_id;
  bool room_service_id;
  bool room_gate_id;
} _CenterServerEnterRoomReq__isset;

class CenterServerEnterRoomReq {
 public:

  static const char* ascii_fingerprint; // = "50664258F37A5935397617A2C122E1CD";
  static const uint8_t binary_fingerprint[16]; // = {0x50,0x66,0x42,0x58,0xF3,0x7A,0x59,0x35,0x39,0x76,0x17,0xA2,0xC1,0x22,0xE1,0xCD};

  CenterServerEnterRoomReq() : user_id(0), user_name(), room_id(0), room_service_id(0), room_gate_id(0) {
  }

  virtual ~CenterServerEnterRoomReq() throw() {}

  int32_t user_id;
  std::string user_name;
  int32_t room_id;
  int32_t room_service_id;
  int32_t room_gate_id;

  _CenterServerEnterRoomReq__isset __isset;

  void __set_user_id(const int32_t val) {
    user_id = val;
  }

  void __set_user_name(const std::string& val) {
    user_name = val;
  }

  void __set_room_id(const int32_t val) {
    room_id = val;
  }

  void __set_room_service_id(const int32_t val) {
    room_service_id = val;
  }

  void __set_room_gate_id(const int32_t val) {
    room_gate_id = val;
  }

  bool operator == (const CenterServerEnterRoomReq & rhs) const
  {
    if (!(user_id == rhs.user_id))
      return false;
    if (!(user_name == rhs.user_name))
      return false;
    if (!(room_id == rhs.room_id))
      return false;
    if (!(room_service_id == rhs.room_service_id))
      return false;
    if (!(room_gate_id == rhs.room_gate_id))
      return false;
    return true;
  }
  bool operator != (const CenterServerEnterRoomReq &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerEnterRoomReq & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerEnterRoomReq &a, CenterServerEnterRoomReq &b);

typedef struct _CenterServerLeaveRoomReq__isset {
  _CenterServerLeaveRoomReq__isset() : user_id(false), room_id(false), room_gate_id(false) {}
  bool user_id;
  bool room_id;
  bool room_gate_id;
} _CenterServerLeaveRoomReq__isset;

class CenterServerLeaveRoomReq {
 public:

  static const char* ascii_fingerprint; // = "6435B39C87AB0E30F30BEDEFD7328C0D";
  static const uint8_t binary_fingerprint[16]; // = {0x64,0x35,0xB3,0x9C,0x87,0xAB,0x0E,0x30,0xF3,0x0B,0xED,0xEF,0xD7,0x32,0x8C,0x0D};

  CenterServerLeaveRoomReq() : user_id(0), room_id(0), room_gate_id(0) {
  }

  virtual ~CenterServerLeaveRoomReq() throw() {}

  int32_t user_id;
  int32_t room_id;
  int32_t room_gate_id;

  _CenterServerLeaveRoomReq__isset __isset;

  void __set_user_id(const int32_t val) {
    user_id = val;
  }

  void __set_room_id(const int32_t val) {
    room_id = val;
  }

  void __set_room_gate_id(const int32_t val) {
    room_gate_id = val;
  }

  bool operator == (const CenterServerLeaveRoomReq & rhs) const
  {
    if (!(user_id == rhs.user_id))
      return false;
    if (!(room_id == rhs.room_id))
      return false;
    if (!(room_gate_id == rhs.room_gate_id))
      return false;
    return true;
  }
  bool operator != (const CenterServerLeaveRoomReq &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerLeaveRoomReq & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerLeaveRoomReq &a, CenterServerLeaveRoomReq &b);

typedef struct _CenterServerUserQueryReq__isset {
  _CenterServerUserQueryReq__isset() : user_id(false) {}
  bool user_id;
} _CenterServerUserQueryReq__isset;

class CenterServerUserQueryReq {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  CenterServerUserQueryReq() : user_id(0) {
  }

  virtual ~CenterServerUserQueryReq() throw() {}

  int32_t user_id;

  _CenterServerUserQueryReq__isset __isset;

  void __set_user_id(const int32_t val) {
    user_id = val;
  }

  bool operator == (const CenterServerUserQueryReq & rhs) const
  {
    if (!(user_id == rhs.user_id))
      return false;
    return true;
  }
  bool operator != (const CenterServerUserQueryReq &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerUserQueryReq & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerUserQueryReq &a, CenterServerUserQueryReq &b);

typedef struct _CenterServerUserInfo__isset {
  _CenterServerUserInfo__isset() : user_id(false), user_name(false), room_id(false), room_service_id(false), room_gate_id(false), session_pw(false) {}
  bool user_id;
  bool user_name;
  bool room_id;
  bool room_service_id;
  bool room_gate_id;
  bool session_pw;
} _CenterServerUserInfo__isset;

class CenterServerUserInfo {
 public:

  static const char* ascii_fingerprint; // = "46D42AF952788902FF0064858E7A698C";
  static const uint8_t binary_fingerprint[16]; // = {0x46,0xD4,0x2A,0xF9,0x52,0x78,0x89,0x02,0xFF,0x00,0x64,0x85,0x8E,0x7A,0x69,0x8C};

  CenterServerUserInfo() : user_id(0), user_name(), room_id(0), room_service_id(0), room_gate_id(0), session_pw() {
  }

  virtual ~CenterServerUserInfo() throw() {}

  int32_t user_id;
  std::string user_name;
  int32_t room_id;
  int32_t room_service_id;
  int32_t room_gate_id;
  std::string session_pw;

  _CenterServerUserInfo__isset __isset;

  void __set_user_id(const int32_t val) {
    user_id = val;
  }

  void __set_user_name(const std::string& val) {
    user_name = val;
  }

  void __set_room_id(const int32_t val) {
    room_id = val;
  }

  void __set_room_service_id(const int32_t val) {
    room_service_id = val;
  }

  void __set_room_gate_id(const int32_t val) {
    room_gate_id = val;
  }

  void __set_session_pw(const std::string& val) {
    session_pw = val;
  }

  bool operator == (const CenterServerUserInfo & rhs) const
  {
    if (!(user_id == rhs.user_id))
      return false;
    if (!(user_name == rhs.user_name))
      return false;
    if (!(room_id == rhs.room_id))
      return false;
    if (!(room_service_id == rhs.room_service_id))
      return false;
    if (!(room_gate_id == rhs.room_gate_id))
      return false;
    if (!(session_pw == rhs.session_pw))
      return false;
    return true;
  }
  bool operator != (const CenterServerUserInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerUserInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerUserInfo &a, CenterServerUserInfo &b);

typedef struct _CenterServerUserQueryRes__isset {
  _CenterServerUserQueryRes__isset() : error_code(false), error_text(false), user_info(false) {}
  bool error_code;
  bool error_text;
  bool user_info;
} _CenterServerUserQueryRes__isset;

class CenterServerUserQueryRes {
 public:

  static const char* ascii_fingerprint; // = "169DC4B10E53138F7DC06D5E6A270057";
  static const uint8_t binary_fingerprint[16]; // = {0x16,0x9D,0xC4,0xB1,0x0E,0x53,0x13,0x8F,0x7D,0xC0,0x6D,0x5E,0x6A,0x27,0x00,0x57};

  CenterServerUserQueryRes() : error_code(0), error_text() {
  }

  virtual ~CenterServerUserQueryRes() throw() {}

  int16_t error_code;
  std::string error_text;
  CenterServerUserInfo user_info;

  _CenterServerUserQueryRes__isset __isset;

  void __set_error_code(const int16_t val) {
    error_code = val;
  }

  void __set_error_text(const std::string& val) {
    error_text = val;
  }

  void __set_user_info(const CenterServerUserInfo& val) {
    user_info = val;
  }

  bool operator == (const CenterServerUserQueryRes & rhs) const
  {
    if (!(error_code == rhs.error_code))
      return false;
    if (!(error_text == rhs.error_text))
      return false;
    if (!(user_info == rhs.user_info))
      return false;
    return true;
  }
  bool operator != (const CenterServerUserQueryRes &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CenterServerUserQueryRes & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CenterServerUserQueryRes &a, CenterServerUserQueryRes &b);

}} // namespace

#endif