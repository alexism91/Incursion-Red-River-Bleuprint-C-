#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RetargetIKChainSettings.generated.h"

USTRUCT(BlueprintType)
struct FRetargetIKChainSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetChainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableIK;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlendToSource;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlendToSourceTranslation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlendToSourceRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BlendToSourceWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StaticOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StaticLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StaticRotationOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ScaleVertical;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Extension;
    
    IKRIG_API FRetargetIKChainSettings();
};

