#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsVolume -FallbackName=PhysicsVolume
#include "EWaterExclusionMode.h"
#include "WaterBodyExclusionVolume.generated.h"

class AWaterBody;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AWaterBodyExclusionVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaterExclusionMode ExclusionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AWaterBody>> WaterBodies;
    
    AWaterBodyExclusionVolume(const FObjectInitializer& ObjectInitializer);

};

