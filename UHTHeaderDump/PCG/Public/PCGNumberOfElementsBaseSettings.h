#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGNumberOfElementsBaseSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class UPCGNumberOfElementsBaseSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputAttributeName;
    
    UPCGNumberOfElementsBaseSettings();

};

