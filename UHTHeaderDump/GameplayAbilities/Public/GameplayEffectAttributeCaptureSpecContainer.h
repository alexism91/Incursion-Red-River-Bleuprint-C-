#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectAttributeCaptureSpec.h"
#include "GameplayEffectAttributeCaptureSpecContainer.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectAttributeCaptureSpecContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectAttributeCaptureSpec> SourceAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectAttributeCaptureSpec> TargetAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNonSnapshottedAttributes;
    
public:
    GAMEPLAYABILITIES_API FGameplayEffectAttributeCaptureSpecContainer();
};

