#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "StateTreeTaskCommonBase.h"
#include "StateTreeRunParallelStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeRunParallelStateTreeTask : public FStateTreeTaskCommonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateTreeOverrideTag;
    
public:
    STATETREEMODULE_API FStateTreeRunParallelStateTreeTask();
};

