#pragma once
#include "CoreMinimal.h"
#include "EBasicAxis.h"
#include "EWarpingDirectionSource.h"
#include "IKRetargetOpSettingsBase.h"
#include "RetargetStrideWarpChainSettings.h"
#include "IKRetargetStrideWarpingOpSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetStrideWarpingOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRetargetStrideWarpChainSettings> ChainSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpingDirectionSource DirectionSource;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBasicAxis ForwardDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DirectionChain;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WarpForwards;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SidewaysOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WarpSplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugDraw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DebugDrawSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DebugDrawThickness;
    
    IKRIG_API FIKRetargetStrideWarpingOpSettings();
};

