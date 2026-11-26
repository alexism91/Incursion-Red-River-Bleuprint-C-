#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRSettingDefinition.h"
#include "IRRSettingEditState.h"
#include "IRRSettingCondition.generated.h"

class UIRRSettingCollectionModel;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class IRRCOREUI_API UIRRSettingCondition : public UObject {
    GENERATED_BODY()
public:
    UIRRSettingCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateEditState(UIRRSettingCollectionModel* Model, const FIRRSettingDefinition& Definition, UPARAM(Ref) FIRRSettingEditState& State);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetSettingIdOptions() const;
    
};

