#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "EIRRDesignationAbortReason.h"
#include "EIRRDesignationStage.h"
#include "IRRDesignationConfig.h"
#include "IRRFireSupportSalvo.h"
#include "OnDesignationAbortedDelegate.h"
#include "OnDesignationCompromisedDelegate.h"
#include "OnDesignationStageChangedDelegate.h"
#include "IRRFireSupportSubsystem.generated.h"

class AActor;
class APawn;
class UIRRHandlerVoiceSet;

UCLASS(Blueprintable)
class TEST_C_API UIRRFireSupportSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDesignationStageChanged OnStageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDesignationAborted OnDesignationAborted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDesignationCompromised OnDesignationCompromised;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDesignationConfig Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRFireSupportSalvo Salvo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRHandlerVoiceSet* VoiceSet;
    
public:
    UIRRFireSupportSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetDesignationLoadout(APawn* Operator, const FIRRDesignationConfig& InConfig, const FIRRFireSupportSalvo& InSalvo, UIRRHandlerVoiceSet* InVoiceSet);
    
    UFUNCTION(BlueprintCallable)
    void ReportLaseEnded();
    
    UFUNCTION(BlueprintCallable)
    void ReportLase(AActor* LasedActor, FVector ImpactPoint, bool bAiming);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReacquisitionPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDangerClose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAwaitingMark() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStandoffDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStageTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRDesignationStage GetStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMarkProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDesignatedSubject() const;
    
    UFUNCTION(BlueprintCallable)
    void AbandonDesignation(EIRRDesignationAbortReason reason);
    
};

