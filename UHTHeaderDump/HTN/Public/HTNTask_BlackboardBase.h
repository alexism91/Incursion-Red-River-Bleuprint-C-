#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "HTNTask.h"
#include "HTNTask_BlackboardBase.generated.h"

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNTask_BlackboardBase : public UHTNTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    UHTNTask_BlackboardBase();

};

