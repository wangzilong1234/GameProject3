// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Game_Define.proto

#include "Game_Define.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
namespace protobuf_Game_5fDefine_2eproto {
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[14];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Game_Define.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021Game_Define.proto*r\n\013EObjectType\022\013\n\007OT"
      "_NONE\020\000\022\r\n\tOT_PLAYER\020\001\022\014\n\010OT_ROBOT\020\002\022\016\n\n"
      "OT_MONSTER\020\003\022\n\n\006OT_PET\020\004\022\016\n\nOT_PARTNER\020\005"
      "\022\r\n\tOT_SUMMON\020\006*\210\001\n\013EActionType\022\013\n\007AT_NO"
      "NE\020\000\022\013\n\007AT_IDLE\020\001\022\013\n\007AT_WALK\020\002\022\n\n\006AT_RUN"
      "\020\003\022\n\n\006AT_FLY\020\004\022\r\n\tAT_DANCE1\020\005\022\r\n\tAT_DANC"
      "E2\020\006\022\r\n\tAT_DANCE3\020\007\022\r\n\tAT_DANCE4\020\010*F\n\rEA"
      "ctionStatue\022\013\n\007AS_NONE\020\000\022\013\n\007AS_HURT\020\001\022\014\n"
      "\010AS_START\020\002\022\r\n\006AS_END\020\377\377\377\177*q\n\tECopyType\022"
      "\014\n\010CPT_NONE\020\000\022\r\n\tCPT_LOGIN\020\001\022\017\n\013CPT_SELR"
      "OLE\020\002\022\014\n\010CPT_CITY\020\003\022\014\n\010CPT_MAIN\020\004\022\r\n\tCPT"
      "_WORLD\020\005\022\013\n\007CPT_END\020d*\320\001\n\rEObjectStatus\022"
      "\014\n\010EOS_NONE\020\000\022\014\n\010EOS_DEAD\020\001\022\014\n\010EOS_IDLE\020"
      "\002\022\014\n\010EOS_WALK\020\003\022\013\n\007EOS_RUN\020\004\022\013\n\007EOS_FLY\020"
      "\005\022\020\n\014EOS_NOT_MOVE\020\006\022\020\n\014EOS_NOT_CAST\020\007\022\022\n"
      "\016EOS_NOT_BEHURT\020\010\022\025\n\021EOS_NOT_BECONTROL\020\t"
      "\022\017\n\013EOS_STEALTH\020\n\022\r\n\tEOS_BLIND\020\013*\224\002\n\tEIt"
      "emType\022\014\n\010EIT_NONE\020\000\022\r\n\tEIT_EQUIP\020\001\022\022\n\016E"
      "IT_ACTIONDRUG\020\002\022\013\n\007EIT_MAT\020\003\022\013\n\007EIT_BOX\020"
      "\004\022\013\n\007EIT_KEY\020\005\022\014\n\010EIT_CHIP\020\006\022\013\n\007EIT_GEM\020"
      "\007\022\017\n\013EIT_FASHION\020\010\022\r\n\tEIT_MONEY\020\t\022\016\n\nEIT"
      "_ACTION\020\n\022\013\n\007EIT_EXP\020\013\022\014\n\010EIT_RUNE\020\014\022\017\n\013"
      "EIT_PETSOUL\020\r\022\014\n\010EIT_TASK\020\016\022\014\n\010EIT_DRUG\020"
      "\017\022\013\n\007EIT_PET\020\020\022\017\n\013EIT_PARTNER\020\021*\212\001\n\010EBag"
      "Type\022\014\n\010EBT_NONE\020\000\022\014\n\010EBT_ITEM\020\001\022\013\n\007EBT_"
      "GEM\020\002\022\017\n\013EBT_FASHION\020\003\022\014\n\010EBT_CHIP\020\004\022\014\n\010"
      "EBT_RUNE\020\005\022\014\n\010EBT_TASK\020\006\022\014\n\010EBT_SOUL\020\007\022\014"
      "\n\010EBT_CARD\020\010*4\n\rEFunctionType\022\021\n\rFUNC_BE"
      "GIN_ID\020\000\022\020\n\013FUNC_END_ID\020\226\001*\342\001\n\007EAttrID\022\006"
      "\n\002HP\020\000\022\006\n\002MP\020\001\022\n\n\006HP_MAX\020\002\022\n\n\006MP_MAX\020\003\022\t"
      "\n\005SPEED\020\004\022\n\n\006ATTACK\020\005\022\013\n\007ELEMENT\020\006\022\r\n\tMA"
      "GIC_DEF\020\007\022\016\n\nPHYSIC_DEF\020\010\022\014\n\010HIT_RATE\020\t\022"
      "\t\n\005DODGE\020\n\022\r\n\tMORE_HURT\020\013\022\r\n\tLESS_HURT\020\014"
      "\022\014\n\010CRIT_HIT\020\r\022\014\n\010CRIT_DEF\020\016\022\r\n\tCRIT_HUR"
      "T\020\017\022\n\n\006MAX_ID\020\026*G\n\005EShip\022\r\n\tTYPE_NONE\020\000\022"
      "\r\n\tTYPE_ALLY\020\001\022\016\n\nTYPE_ENEMY\020\002\022\020\n\014TYPE_N"
      "EUTRAL\020\003*\031\n\tEBuffType\022\014\n\010BFT_NONE\020\000*W\n\014E"
      "ChatChannel\022\014\n\010CHL_NONE\020\000\022\r\n\tCHL_WORLD\020\001"
      "\022\017\n\013CHL_PRIVATE\020\002\022\r\n\tCHL_GUILD\020\003\022\n\n\006CHL_"
      "GM\020\004*\230\001\n\tEEquipPos\022\014\n\010EEP_NONE\020\000\022\016\n\nEEP_"
      "HELMET\020\001\022\020\n\014EEP_NECKLACE\020\002\022\r\n\tEEP_ARMOR\020"
      "\003\022\r\n\tEEP_SHOES\020\004\022\r\n\tEEP_WRIST\020\005\022\014\n\010EEP_R"
      "ING\020\006\022\020\n\014EEP_TALISMAN\020\007\022\016\n\nEEP_WEAPON\020\010*"
      "K\n\013ETaskStatus\022\014\n\010ETS_INIT\020\000\022\016\n\nETS_ACCE"
      "PT\020\001\022\016\n\nETS_FINISH\020\002\022\016\n\nETS_COMMIT\020\003b\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1804);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Game_Define.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Game_5fDefine_2eproto
const ::google::protobuf::EnumDescriptor* EObjectType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[0];
}
bool EObjectType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EActionType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[1];
}
bool EActionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EActionStatue_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[2];
}
bool EActionStatue_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 268435455:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ECopyType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[3];
}
bool ECopyType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 100:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EObjectStatus_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[4];
}
bool EObjectStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EItemType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[5];
}
bool EItemType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EBagType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[6];
}
bool EBagType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EFunctionType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[7];
}
bool EFunctionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 150:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EAttrID_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[8];
}
bool EAttrID_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 22:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EShip_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[9];
}
bool EShip_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EBuffType_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[10];
}
bool EBuffType_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EChatChannel_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[11];
}
bool EChatChannel_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EEquipPos_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[12];
}
bool EEquipPos_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskStatus_descriptor() {
  protobuf_Game_5fDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Game_5fDefine_2eproto::file_level_enum_descriptors[13];
}
bool ETaskStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
