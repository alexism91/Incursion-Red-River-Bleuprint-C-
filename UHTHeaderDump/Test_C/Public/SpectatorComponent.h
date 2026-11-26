#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnTargetSwitchedDelegate.h"
#include "SpectatorComponent.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API USpectatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpectatorTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpectatorTargetIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetSwitched OnTargetSwitched;
    
    USpectatorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerSpectating(APlayerController* PlayerController, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    void SetNewSpectatorTarget(APlayerController* PlayerController, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void RequestPreviousSpectatorTarget(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void RequestNextSpectatorTarget(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpectatorTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TriggerSpectating(APlayerController* PlayerController, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    bool CanSpectate();
    
    UFUNCTION(BlueprintCallable)
    void AddSpectatorTarget(AActor* Target);
    
};

