#pragma once
#include "CoreMinimal.h"
#include "PCGCopyAttributesSettings.h"
#include "PCGAttributeTransferSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGAttributeTransferSettings : public UPCGCopyAttributesSettings {
    GENERATED_BODY()
public:
    UPCGAttributeTransferSettings();

};

