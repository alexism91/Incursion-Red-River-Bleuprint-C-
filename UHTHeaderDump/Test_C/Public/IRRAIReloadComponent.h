#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AITargetReloadConfig.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAIReloadSignatureDelegate.h"
#include "IRRAIReloadStartSignatureDelegate.h"
#include "IRRAIReloadComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIReloadComponent : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIReloadStartSignature OnReloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIReloadSignature OnReloadFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAITargetReloadConfig ReloadConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRoundsLoadedToCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAimStanceWhileReloading;
    
public:
    UIRRAIReloadComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantsToReload() const;
    
    UFUNCTION(BlueprintCallable)
    bool TryReload();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAbilityStarted(FGameplayTag AbilityTag);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityEnded(FGameplayTag AbilityTag, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReload() const;
    
    UFUNCTION(BlueprintCallable)
    bool CancelReload();
    
};

