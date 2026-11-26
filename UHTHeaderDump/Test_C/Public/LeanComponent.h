#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LeanComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API ULeanComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector2D FreeLookInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LocalFreeLookInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LeanInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalLeanInput;
    
    ULeanComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLeanBlockHeld(bool bHeld);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeLookInput(FVector2D NewFreeLookInput);
    
    UFUNCTION(BlueprintCallable)
    void ReplicateLeanInputAfterDelay(float NewLeanInput, float Delay);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ReplicateLeanInput_Server(float NewLeanInput);
    
    UFUNCTION(BlueprintCallable)
    void ReplicateLeanInput(float NewLeanInput);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ReplicateFreeLookInput_Server(FVector2D NewFreeLookInput);
    
    UFUNCTION(BlueprintCallable)
    void ReplicateFreeLookInput(FVector2D NewFreeLookInput);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLeanDelayTimerComplete(float InDelayedLeanInput);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeanInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLeaningRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLeaning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLeanBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetFreeLookInput() const;
    
    UFUNCTION(BlueprintCallable)
    void BlockLeanForDuration(float Duration);
    
};

