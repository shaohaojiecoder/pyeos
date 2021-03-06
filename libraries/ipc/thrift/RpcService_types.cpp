/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "RpcService_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace cpp {


Result::~Result() throw() {
}


void Result::__set_status(const int32_t val) {
  this->status = val;
}

void Result::__set_value(const std::string& val) {
  this->value = val;
}
std::ostream& operator<<(std::ostream& out, const Result& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Result::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
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
          xfer += iprot->readI32(this->status);
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->value);
          this->__isset.value = true;
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

uint32_t Result::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Result");

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->value);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Result &a, Result &b) {
  using ::std::swap;
  swap(a.status, b.status);
  swap(a.value, b.value);
  swap(a.__isset, b.__isset);
}

Result::Result(const Result& other0) {
  status = other0.status;
  value = other0.value;
  __isset = other0.__isset;
}
Result& Result::operator=(const Result& other1) {
  status = other1.status;
  value = other1.value;
  __isset = other1.__isset;
  return *this;
}
void Result::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Result(";
  out << "status=" << to_string(status);
  out << ", " << "value=" << to_string(value);
  out << ")";
}


Apply::~Apply() throw() {
}


void Apply::__set_receiver(const int64_t val) {
  this->receiver = val;
}

void Apply::__set_account(const int64_t val) {
  this->account = val;
}

void Apply::__set_action(const int64_t val) {
  this->action = val;
}
std::ostream& operator<<(std::ostream& out, const Apply& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Apply::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
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
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->receiver);
          this->__isset.receiver = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->account);
          this->__isset.account = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->action);
          this->__isset.action = true;
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

uint32_t Apply::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Apply");

  xfer += oprot->writeFieldBegin("receiver", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->receiver);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("account", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->account);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("action", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->action);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Apply &a, Apply &b) {
  using ::std::swap;
  swap(a.receiver, b.receiver);
  swap(a.account, b.account);
  swap(a.action, b.action);
  swap(a.__isset, b.__isset);
}

Apply::Apply(const Apply& other2) {
  receiver = other2.receiver;
  account = other2.account;
  action = other2.action;
  __isset = other2.__isset;
}
Apply& Apply::operator=(const Apply& other3) {
  receiver = other3.receiver;
  account = other3.account;
  action = other3.action;
  __isset = other3.__isset;
  return *this;
}
void Apply::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Apply(";
  out << "receiver=" << to_string(receiver);
  out << ", " << "account=" << to_string(account);
  out << ", " << "action=" << to_string(action);
  out << ")";
}


ApplyResult::~ApplyResult() throw() {
}


void ApplyResult::__set_status(const int32_t val) {
  this->status = val;
}

void ApplyResult::__set_err(const std::string& val) {
  this->err = val;
}
std::ostream& operator<<(std::ostream& out, const ApplyResult& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t ApplyResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
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
          xfer += iprot->readI32(this->status);
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->err);
          this->__isset.err = true;
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

uint32_t ApplyResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ApplyResult");

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("err", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->err);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ApplyResult &a, ApplyResult &b) {
  using ::std::swap;
  swap(a.status, b.status);
  swap(a.err, b.err);
  swap(a.__isset, b.__isset);
}

ApplyResult::ApplyResult(const ApplyResult& other4) {
  status = other4.status;
  err = other4.err;
  __isset = other4.__isset;
}
ApplyResult& ApplyResult::operator=(const ApplyResult& other5) {
  status = other5.status;
  err = other5.err;
  __isset = other5.__isset;
  return *this;
}
void ApplyResult::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ApplyResult(";
  out << "status=" << to_string(status);
  out << ", " << "err=" << to_string(err);
  out << ")";
}

} // namespace
