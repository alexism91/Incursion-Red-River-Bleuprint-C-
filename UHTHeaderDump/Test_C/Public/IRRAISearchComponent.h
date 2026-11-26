#pragma once
#include "CoreMinimal.h"
#include "BatchTraceResult.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAISearchComponent.generated.h"

class UIRRAITarget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAISearchComponent : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRAITarget*> ActiveSearchTargets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchActive;
    
public:
    UIRRAISearchComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBatchTraceComplete(const TArray<FBatchTraceResult>& Results, int32 ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSearchActive() const;
    
};

