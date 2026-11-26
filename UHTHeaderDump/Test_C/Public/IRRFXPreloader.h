#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonLoadingScreen -ObjectName=LoadingProcessInterface -FallbackName=LoadingProcessInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IRROnFXPreloadFinishedDelegate.h"
#include "IRRFXPreloader.generated.h"

class UIRRFXPreloadList;
class UMaterialInterface;
class UNiagaraSystem;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRFXPreloader : public AActor, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnFXPreloadFinished OnPreloadFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UIRRFXPreloadList>> AdditionalLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrefireSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrefirePerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrefireLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrefireDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> Systems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
public:
    AIRRFXPreloader(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartPreload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFinishedPreload() const;
    

    // Fix for true pure virtual functions not being implemented
};

