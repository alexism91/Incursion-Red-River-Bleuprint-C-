#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EGameplayCamerasViewRotationMode.h"
#include "GameplayCamerasSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=GameplayCameras)
class UGameplayCamerasSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBuildInPIE;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayCamerasViewRotationMode DefaultViewRotationMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CombinedCameraRigNumThreshold;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DefaultIKAimingAngleTolerance;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DefaultIKAimingDistanceTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DefaultIKAimingMaxIterations;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DefaultIKAimingMinDistance;
    
    UGameplayCamerasSettings();

};

