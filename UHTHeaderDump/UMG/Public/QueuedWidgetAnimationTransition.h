#pragma once
#include "CoreMinimal.h"
#include "QueuedWidgetAnimationTransition.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FQueuedWidgetAnimationTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* WidgetAnimation;
    
    UMG_API FQueuedWidgetAnimationTransition();
};

