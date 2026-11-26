#include "ReplicationStateDescriptorConfig.h"

UReplicationStateDescriptorConfig::UReplicationStateDescriptorConfig() {
    this->SupportsStructNetSerializerList.AddDefaulted(14);
    this->EnsureFullyPushModelClassNames.AddDefaulted(16);
    this->bEnsureAllClassesAreFullyPushModel = false;
}


