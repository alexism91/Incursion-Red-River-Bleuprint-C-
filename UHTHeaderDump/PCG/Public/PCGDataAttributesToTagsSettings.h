#pragma once
#include "CoreMinimal.h"
#include "PCGDataAttributesAndTagsSettingsBase.h"
#include "PCGDataAttributesToTagsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGDataAttributesToTagsSettings : public UPCGDataAttributesAndTagsSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscardNonParseableAttributeTypes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscardAttributeValue;
    
    UPCGDataAttributesToTagsSettings();

};

