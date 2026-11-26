#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "OnBaseValueChangedDelegate.h"
#include "OnMaxValueChangedDelegate.h"
#include "OnMinValueChangedDelegate.h"
#include "SimpleAttributeBuff.h"
#include "SimpleAttributeData.h"
#include "SimpleAttributeModifier.h"
#include "SimpleGameplayAttribute.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API USimpleGameplayAttribute : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Data, meta=(AllowPrivateAccess=true))
    FSimpleAttributeData BaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleAttributeData CurrentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleAttributeData OldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Buffs, meta=(AllowPrivateAccess=true))
    TArray<FSimpleAttributeBuff> Buffs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBaseValueChanged OnBaseValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinValueChanged OnMinValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMaxValueChanged OnMaxValueChanged;
    
    USimpleGameplayAttribute();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBaseValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBuff(FSimpleAttributeBuff Buff);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Data();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Buffs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentMinValue();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentMaxValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSimpleAttributeBuff> GetBuffs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseValue() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAttributeModifier(FSimpleAttributeModifier Modifier);
    
    UFUNCTION(BlueprintCallable)
    void AddBuff(FSimpleAttributeBuff Buff);
    
};

