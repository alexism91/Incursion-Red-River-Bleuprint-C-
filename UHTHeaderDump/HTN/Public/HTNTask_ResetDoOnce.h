#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EHTNResetDoOnceAffectedDecorators.h"
#include "HTNTask.h"
#include "HTNTask_ResetDoOnce.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNTask_ResetDoOnce : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNResetDoOnceAffectedDecorators AffectedDecorators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UHTNTask_ResetDoOnce();

};

