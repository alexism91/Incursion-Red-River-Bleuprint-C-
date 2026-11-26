#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EQUA_StatType.h"
#include "QUA_StatItem.h"
#include "StatInterface.generated.h"

class UUserWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UStatInterface : public UInterface {
    GENERATED_BODY()
};

class IStatInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateStatWidgetItem(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerStatComparison(float NewPossibleValue, bool Trigger);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemRef(UUserWidget* ItemRef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyStatItem(FQUA_StatItem NewStatValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FQUA_StatItem> GetStats();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatByType(EQUA_StatType StatType);
    
};

