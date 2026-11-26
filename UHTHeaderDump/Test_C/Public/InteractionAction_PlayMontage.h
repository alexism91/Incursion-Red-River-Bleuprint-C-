#pragma once
#include "CoreMinimal.h"
#include "CharacterMontageSet.h"
#include "InteractionAction.h"
#include "InteractionAction_PlayMontage.generated.h"

class AActor;
class UAnimMontage;
class UInteractionTarget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInteractionAction_PlayMontage : public UInteractionAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCharacterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListenToMontageNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet CharacterMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncAnimLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedAnimGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopPreviousMontage;
    
    UInteractionAction_PlayMontage();

    UFUNCTION(BlueprintCallable)
    float GetExecutionTime_Implementation(UInteractionTarget* OwnerComp, AActor* InteractingActor);
    
};

