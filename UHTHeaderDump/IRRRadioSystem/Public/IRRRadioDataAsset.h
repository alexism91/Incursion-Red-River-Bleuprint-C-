#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRRadioMessage.h"
#include "IRRRadioMessageArray.h"
#include "IRRRadioDataAsset.generated.h"

class AActor;

UCLASS(Blueprintable)
class IRRRADIOSYSTEM_API UIRRRadioDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRRadioMessageArray> RadioMessages;
    
    UIRRRadioDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRRadioMessage GetRadioMessageByTag(const FGameplayTag& Tag, AActor* Instigator) const;
    
};

