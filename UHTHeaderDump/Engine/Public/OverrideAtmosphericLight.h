#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OverrideAtmosphericLight.generated.h"

USTRUCT(BlueprintType)
struct FOverrideAtmosphericLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnabledMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction[2];
    
    ENGINE_API FOverrideAtmosphericLight();
};

