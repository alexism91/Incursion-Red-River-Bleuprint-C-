#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PCGNormalToDensityMode.h"
#include "PCGSettings.h"
#include "PCGNormalToDensitySettings.generated.h"

UCLASS(Blueprintable)
class UPCGNormalToDensitySettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Offset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Strength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    PCGNormalToDensityMode DensityMode;
    
    UPCGNormalToDensitySettings();

};

