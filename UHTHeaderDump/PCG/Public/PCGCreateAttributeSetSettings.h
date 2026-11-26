#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyOutputNoSourceSelector.h"
#include "PCGMetadataTypesConstantStruct.h"
#include "PCGSettings.h"
#include "PCGCreateAttributeSetSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGCreateAttributeSetSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGMetadataTypesConstantStruct AttributeTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputNoSourceSelector OutputTarget;
    
    UPCGCreateAttributeSetSettings();

};

