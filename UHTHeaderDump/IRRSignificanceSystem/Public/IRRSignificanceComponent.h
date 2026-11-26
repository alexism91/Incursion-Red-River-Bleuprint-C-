#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRSignificanceInterface.h"
#include "OnSignificanceChangedDelegate.h"
#include "IRRSignificanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRSIGNIFICANCESYSTEM_API UIRRSignificanceComponent : public UActorComponent, public IIRRSignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIsRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> SignificanceLevels;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSignificanceChanged OnSignificanceChanged;
    
    UIRRSignificanceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleSignificanceComponent(bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    void SetSignificanceLevels(const TMap<int32, float>& NewLevels);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentSignificanceLevel() const;
    

    // Fix for true pure virtual functions not being implemented
};

