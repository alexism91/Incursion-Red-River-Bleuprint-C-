#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAISubManagerBase -FallbackName=IRRAISubManagerBase
#include "IRRPoseCalibrationSubManager.generated.h"

class AIRRAIBaseCharacter;

UCLASS(Blueprintable)
class TEST_C_API UIRRPoseCalibrationSubManager : public UIRRAISubManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIRRAIBaseCharacter* Dummy;
    
public:
    UIRRPoseCalibrationSubManager();

};

