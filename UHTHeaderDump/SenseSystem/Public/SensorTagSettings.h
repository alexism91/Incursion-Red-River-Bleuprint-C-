#pragma once
#include "CoreMinimal.h"
#include "ESenseSys_QtOtSwitch.h"
#include "SenseSysDebugDraw.h"
#include "SensorTagSettings.generated.h"

USTRUCT(BlueprintType)
struct SENSESYSTEM_API FSensorTagSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumQuadTreeSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeCantSplit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESenseSys_QtOtSwitch QtOtSwitch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSenseSysDebugDraw SenseSysDebugDraw;
    
    FSensorTagSettings();
};

