#include "FastArraySerializer.h"

FFastArraySerializer::FFastArraySerializer() {
    this->IDCounter = 0;
    this->ArrayReplicationKey = 0;
    this->DeltaFlags = EFastArraySerializerDeltaFlags::None;
}

