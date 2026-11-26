#pragma once
#include "CoreMinimal.h"
#include "PCGCopyAttributesSettings.h"
#include "PCGMetadataOperationSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGMetadataOperationSettings : public UPCGCopyAttributesSettings {
    GENERATED_BODY()
public:
    UPCGMetadataOperationSettings();

};

