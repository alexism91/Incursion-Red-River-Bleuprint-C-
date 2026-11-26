#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGComputeGraphSettings.generated.h"

UCLASS(Blueprintable)
class UPCGComputeGraphSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComputeGraphIndex;
    
    UPCGComputeGraphSettings();

};

