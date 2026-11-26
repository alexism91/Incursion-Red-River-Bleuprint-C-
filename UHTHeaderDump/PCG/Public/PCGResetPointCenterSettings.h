#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PCGSettings.h"
#include "PCGResetPointCenterSettings.generated.h"

UCLASS(Blueprintable)
class UPCGResetPointCenterSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PointCenterLocation;
    
    UPCGResetPointCenterSettings();

};

