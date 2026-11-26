#pragma once
#include "CoreMinimal.h"
#include "IRROperationActivation.h"
#include "IRROperationStartPoint.h"
#include "IRROperationStartPoint_Auto.generated.h"

UCLASS(Blueprintable, NoExport)
class IRRMISSIONSYSTEM_API AIRROperationStartPoint_Auto : public AIRROperationStartPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROperationActivation Activation;
    
    AIRROperationStartPoint_Auto(const FObjectInitializer& ObjectInitializer);

};

