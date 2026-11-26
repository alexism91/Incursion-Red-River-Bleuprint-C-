#pragma once
#include "CoreMinimal.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAIMoraleConfig.h"
#include "IRRAIMoraleData.h"
#include "IRRMoraleComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRMoraleComponent : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIMoraleData MoraleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIMoraleConfig MoraleConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> MoraleEffectors;
    
public:
    UIRRMoraleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDynamicMorale(const float NewMorale);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicMorale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAIMoraleData GetMoraleData() const;
    
    UFUNCTION(BlueprintCallable)
    void AddDynamicMorale(const float Amount);
    
};

