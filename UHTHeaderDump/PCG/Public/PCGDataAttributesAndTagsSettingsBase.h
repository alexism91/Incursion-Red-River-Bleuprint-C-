#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGSettings.h"
#include "PCGDataAttributesAndTagsSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGDataAttributesAndTagsSettingsBase : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPCGAttributePropertyOutputSelector> AttributesTagsMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteInputsAfterOperation;
    
    UPCGDataAttributesAndTagsSettingsBase();

};

