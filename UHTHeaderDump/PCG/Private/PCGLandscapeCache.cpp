#include "PCGLandscapeCache.h"

UPCGLandscapeCache::UPCGLandscapeCache() {
    this->SerializationMode = EPCGLandscapeCacheSerializationMode::NeverSerialize;
    this->CookedSerializedContents = EPCGLandscapeCacheSerializationContents::SerializeAll;
}

void UPCGLandscapeCache::PrimeCache() {
}

void UPCGLandscapeCache::ClearCache() {
}


