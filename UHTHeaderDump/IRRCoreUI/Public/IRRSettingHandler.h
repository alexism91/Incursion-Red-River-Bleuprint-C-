#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRSettingDefinition.h"
#include "IRRSettingOption.h"
#include "IRRSettingValue.h"
#include "IRRSettingHandler.generated.h"

class ULocalPlayer;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class IRRCOREUI_API UIRRSettingHandler : public UObject {
    GENERATED_BODY()
public:
    UIRRSettingHandler();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDefinition(UPARAM(Ref) FIRRSettingDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupported(const FIRRSettingDefinition& Definition, FText& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetRuntimeOptions(const FIRRSettingDefinition& Definition, TArray<FIRRSettingOption>& OutOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocalPlayer* GetLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetEngineValue(const FIRRSettingDefinition& Definition, FIRRSettingValue& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetDefaultValue(const FIRRSettingDefinition& Definition, FIRRSettingValue& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyValue(const FIRRSettingDefinition& Definition, const FIRRSettingValue& Value);
    
};

