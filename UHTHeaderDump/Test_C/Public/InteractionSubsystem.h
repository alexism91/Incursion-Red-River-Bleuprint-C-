#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "OnInteractionWithTargetFinishedDelegate.h"
#include "OnInteractionWithTargetStartedDelegate.h"
#include "InteractionSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UInteractionSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionWithTargetStarted OnInteractionWithTargetStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionWithTargetFinished OnInteractionWithTargetFinished;
    
    UInteractionSubsystem();

};

