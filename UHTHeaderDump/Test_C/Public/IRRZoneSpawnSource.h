#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRZoneLeaf -FallbackName=IRRZoneLeaf
#include "IRRSpawnSourceBase.h"
#include "IRRZoneSpawnSource.generated.h"

class AIRRAISpawnPointV2;

UCLASS(Blueprintable, NoExport, Transient)
class TEST_C_API AIRRZoneSpawnSource : public AIRRSpawnSourceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIRRZoneLeaf Leaf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIRRAISpawnPointV2* ExecPoint;
    
public:
    AIRRZoneSpawnSource(const FObjectInitializer& ObjectInitializer);

};

