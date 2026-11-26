#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGSettings.h"
#include "PCGGetActorDataLayersSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetActorDataLayersSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector ActorReferenceAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector DataLayerReferenceAttribute;
    
    UPCGGetActorDataLayersSettings();

};

