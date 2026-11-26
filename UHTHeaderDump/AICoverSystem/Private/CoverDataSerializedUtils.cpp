#include "CoverDataSerializedUtils.h"

UCoverDataSerializedUtils::UCoverDataSerializedUtils() {
}

FString UCoverDataSerializedUtils::GetCoverDataPrefix(const UObject* WorldContextObject) {
    return TEXT("");
}

FString UCoverDataSerializedUtils::GetCoverDataAssetPath(const UObject* WorldContextObject) {
    return TEXT("");
}

FCoverBuildParams UCoverDataSerializedUtils::GetCoverBuildParams(const UObject* WorldContextObject) {
    return FCoverBuildParams{};
}


