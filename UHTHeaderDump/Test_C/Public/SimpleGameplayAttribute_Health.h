#pragma once
#include "CoreMinimal.h"
#include "IRRDamageData.h"
#include "OnDeathDelegate.h"
#include "OnRevivedDelegate.h"
#include "SimpleGameplayAttribute.h"
#include "SimpleGameplayAttribute_Health.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USimpleGameplayAttribute_Health : public USimpleGameplayAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeathData, meta=(AllowPrivateAccess=true))
    FIRRDamageData DeathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDamageData LastDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDamageData LastInstigatedDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RevivedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeath OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevived OnRevived;
    
    USimpleGameplayAttribute_Health();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLastInstigatedDamageData(FIRRDamageData InLastDamageData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLastDamageData(FIRRDamageData InLastDamageData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDeathData(FIRRDamageData InDeathData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DeathData();
    
};

