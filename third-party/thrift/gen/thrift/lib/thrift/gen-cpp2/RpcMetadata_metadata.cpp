/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/lib/thrift/gen-cpp2/RpcMetadata_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::apache::thrift::ProtocolId>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("RpcMetadata.ProtocolId", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "RpcMetadata.ProtocolId";
  for (const auto& p : ::apache::thrift::_ProtocolId_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::apache::thrift::RpcKind>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("RpcMetadata.RpcKind", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "RpcMetadata.RpcKind";
  for (const auto& p : ::apache::thrift::_RpcKind_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::apache::thrift::RpcPriority>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("RpcMetadata.RpcPriority", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "RpcMetadata.RpcPriority";
  for (const auto& p : ::apache::thrift::_RpcPriority_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::apache::thrift::CompressionAlgorithm>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("RpcMetadata.CompressionAlgorithm", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "RpcMetadata.CompressionAlgorithm";
  for (const auto& p : ::apache::thrift::_CompressionAlgorithm_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::apache::thrift::RequestRpcMetadataFlags>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("RpcMetadata.RequestRpcMetadataFlags", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "RpcMetadata.RequestRpcMetadataFlags";
  for (const auto& p : ::apache::thrift::_RequestRpcMetadataFlags_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::apache::thrift::InterfaceKind>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("RpcMetadata.InterfaceKind", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "RpcMetadata.InterfaceKind";
  for (const auto& p : ::apache::thrift::_InterfaceKind_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}

void StructMetadata<::apache::thrift::NegotiationParameters>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("RpcMetadata.NegotiationParameters", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& RpcMetadata_NegotiationParameters = res.first->second;
  RpcMetadata_NegotiationParameters.name = "RpcMetadata.NegotiationParameters";
  RpcMetadata_NegotiationParameters.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  RpcMetadata_NegotiationParameters_fields[] = {
    std::make_tuple(1, "compressionAlgos", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)),
  };
  for (const auto& f : RpcMetadata_NegotiationParameters_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    RpcMetadata_NegotiationParameters.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::RequestRpcMetadata>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("RpcMetadata.RequestRpcMetadata", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& RpcMetadata_RequestRpcMetadata = res.first->second;
  RpcMetadata_RequestRpcMetadata.name = "RpcMetadata.RequestRpcMetadata";
  RpcMetadata_RequestRpcMetadata.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  RpcMetadata_RequestRpcMetadata_fields[] = {
    std::make_tuple(1, "protocol", true, std::make_unique<Enum< ::apache::thrift::ProtocolId>>("RpcMetadata.ProtocolId")),
    std::make_tuple(2, "name", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(3, "kind", true, std::make_unique<Enum< ::apache::thrift::RpcKind>>("RpcMetadata.RpcKind")),
    std::make_tuple(4, "seqId", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(5, "clientTimeoutMs", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(6, "queueTimeoutMs", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(7, "priority", true, std::make_unique<Enum< ::apache::thrift::RpcPriority>>("RpcMetadata.RpcPriority")),
    std::make_tuple(8, "otherMetadata", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))),
    std::make_tuple(9, "host", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(10, "url", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(11, "crc32c", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(12, "flags", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)),
    std::make_tuple(13, "loadMetric", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(14, "compression", true, std::make_unique<Enum< ::apache::thrift::CompressionAlgorithm>>("RpcMetadata.CompressionAlgorithm")),
  };
  for (const auto& f : RpcMetadata_RequestRpcMetadata_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    RpcMetadata_RequestRpcMetadata.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::ResponseRpcMetadata>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("RpcMetadata.ResponseRpcMetadata", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& RpcMetadata_ResponseRpcMetadata = res.first->second;
  RpcMetadata_ResponseRpcMetadata.name = "RpcMetadata.ResponseRpcMetadata";
  RpcMetadata_ResponseRpcMetadata.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  RpcMetadata_ResponseRpcMetadata_fields[] = {
    std::make_tuple(1, "protocol", true, std::make_unique<Enum< ::apache::thrift::ProtocolId>>("RpcMetadata.ProtocolId")),
    std::make_tuple(2, "seqId", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(3, "otherMetadata", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))),
    std::make_tuple(4, "load", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)),
    std::make_tuple(5, "crc32c", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(6, "compression", true, std::make_unique<Enum< ::apache::thrift::CompressionAlgorithm>>("RpcMetadata.CompressionAlgorithm")),
  };
  for (const auto& f : RpcMetadata_ResponseRpcMetadata_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    RpcMetadata_ResponseRpcMetadata.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::StreamPayloadMetadata>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("RpcMetadata.StreamPayloadMetadata", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& RpcMetadata_StreamPayloadMetadata = res.first->second;
  RpcMetadata_StreamPayloadMetadata.name = "RpcMetadata.StreamPayloadMetadata";
  RpcMetadata_StreamPayloadMetadata.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  RpcMetadata_StreamPayloadMetadata_fields[] = {
    std::make_tuple(1, "compression", true, std::make_unique<Enum< ::apache::thrift::CompressionAlgorithm>>("RpcMetadata.CompressionAlgorithm")),
  };
  for (const auto& f : RpcMetadata_StreamPayloadMetadata_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    RpcMetadata_StreamPayloadMetadata.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::RequestSetupMetadata>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("RpcMetadata.RequestSetupMetadata", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& RpcMetadata_RequestSetupMetadata = res.first->second;
  RpcMetadata_RequestSetupMetadata.name = "RpcMetadata.RequestSetupMetadata";
  RpcMetadata_RequestSetupMetadata.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  RpcMetadata_RequestSetupMetadata_fields[] = {
    std::make_tuple(1, "opaque", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE))),
    std::make_tuple(2, "interfaceKind", true, std::make_unique<Enum< ::apache::thrift::InterfaceKind>>("RpcMetadata.InterfaceKind")),
  };
  for (const auto& f : RpcMetadata_RequestSetupMetadata_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    RpcMetadata_RequestSetupMetadata.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::HeadersPayloadContent>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("RpcMetadata.HeadersPayloadContent", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& RpcMetadata_HeadersPayloadContent = res.first->second;
  RpcMetadata_HeadersPayloadContent.name = "RpcMetadata.HeadersPayloadContent";
  RpcMetadata_HeadersPayloadContent.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  RpcMetadata_HeadersPayloadContent_fields[] = {
    std::make_tuple(1, "otherMetadata", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))),
  };
  for (const auto& f : RpcMetadata_HeadersPayloadContent_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    RpcMetadata_HeadersPayloadContent.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::HeadersPayloadMetadata>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("RpcMetadata.HeadersPayloadMetadata", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& RpcMetadata_HeadersPayloadMetadata = res.first->second;
  RpcMetadata_HeadersPayloadMetadata.name = "RpcMetadata.HeadersPayloadMetadata";
  RpcMetadata_HeadersPayloadMetadata.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  RpcMetadata_HeadersPayloadMetadata_fields[] = {
    std::make_tuple(1, "compression", true, std::make_unique<Enum< ::apache::thrift::CompressionAlgorithm>>("RpcMetadata.CompressionAlgorithm")),
  };
  for (const auto& f : RpcMetadata_HeadersPayloadMetadata_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    RpcMetadata_HeadersPayloadMetadata.fields.push_back(std::move(field));
  }
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache