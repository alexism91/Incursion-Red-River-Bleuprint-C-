#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "ValueOrBBKey_Bool.h"
#include "BTTask_GameplayTaskBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UBTTask_GameplayTaskBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool bWaitForGameplayTask;
    
public:
    UBTTask_GameplayTaskBase();

};

