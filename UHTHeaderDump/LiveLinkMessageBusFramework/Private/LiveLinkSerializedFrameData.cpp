#include "LiveLinkSerializedFrameData.h"

FLiveLinkSerializedFrameData::FLiveLinkSerializedFrameData() {
    this->SerializationMethod = ELiveLinkPayloadSerializationMethod::Standard;
    this->CompressionMethod = ELiveLinkCompressionMethod::Uncompressed;
    this->CompressionBias = ELiveLinkCompressionBias::None;
    this->PayloadSize = 0;
}

