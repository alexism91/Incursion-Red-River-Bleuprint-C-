#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "CameraRigTransitionCondition.h"
#include "GameplayTagTransitionCondition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGameplayTagTransitionCondition : public UCameraRigTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery PreviousGameplayTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery NextGameplayTagQuery;
    
    UGameplayTagTransitionCondition();

};

