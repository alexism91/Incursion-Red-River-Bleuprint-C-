#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnTextUpdatedDelegate.h"
#include "OnTypingFinishedDelegate.h"
#include "TypingTextAnimator.generated.h"

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UTypingTextAnimator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextUpdated OnTextUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTypingFinished OnTypingFinished;
    
    UTypingTextAnimator();

    UFUNCTION(BlueprintCallable)
    void StartTyping(const FString& InFullText, float InSecondsPerCharacter);
    
};

