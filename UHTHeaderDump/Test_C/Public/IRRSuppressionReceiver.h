#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAIStatEffect -FallbackName=IRRAIStatEffect
#include "IRRAIConditionSource.h"
#include "IRRAISuppressionEventData.h"
#include "IRRDamageData.h"
#include "IRRSuppressionConfig.h"
#include "IRRSuppressionData.h"
#include "IRRSuppressionEventDelegateDelegate.h"
#include "IRRSuppressionStateChangeDelegateDelegate.h"
#include "IRRSuppressionReceiver.generated.h"

class AActor;
class AController;
class AIRRBaseCharacter;
class UMaterialParameterCollection;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRSuppressionReceiver : public UActorComponent, public IIRRAIConditionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSuppressionEventDelegate OnSuppressionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSuppressionStateChangeDelegate OnSuppressionStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSuppressionConfig SuppressionConfig;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIStatEffect CurrentStatEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSuppressionData SuppressionData;
    
public:
    UIRRSuppressionReceiver(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void SetSuppressionPlayerEffectScalar(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float AddToEffect) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveSuppressionStateChanged(const FIRRSuppressionData& InSuppressionData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveSuppressionEvent(const FIRRAISuppressionEventData& InSuppressionEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPossess(AIRRBaseCharacter* Character, AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerRevive(AActor* RevivedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(FIRRDamageData DamageData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRSuppressionData GetSuppressionData() const;
    

    // Fix for true pure virtual functions not being implemented
};

