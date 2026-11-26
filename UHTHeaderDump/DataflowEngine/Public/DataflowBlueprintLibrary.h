#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DataflowBlueprintLibrary.generated.h"

class UDataflow;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataflowBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool RegenerateAssetFromDataflow(UObject* AssetToRegenerate, bool bRegenerateDependentAssets);
    
    UFUNCTION(BlueprintCallable)
    static bool OverrideDataflowVariableObjectArray(UObject* Asset, FName VariableName, const TArray<UObject*>& VariableArrayValue);
    
    UFUNCTION(BlueprintCallable)
    static bool OverrideDataflowVariableObject(UObject* Asset, FName VariableName, UObject* VariableValue);
    
    UFUNCTION(BlueprintCallable)
    static bool OverrideDataflowVariableIntArray(UObject* Asset, FName VariableName, const TArray<int32>& VariableArrayValue);
    
    UFUNCTION(BlueprintCallable)
    static bool OverrideDataflowVariableInt(UObject* Asset, FName VariableName, int64 VariableValue);
    
    UFUNCTION(BlueprintCallable)
    static bool OverrideDataflowVariableFloatArray(UObject* Asset, FName VariableName, const TArray<float>& VariableArrayValue);
    
    UFUNCTION(BlueprintCallable)
    static bool OverrideDataflowVariableFloat(UObject* Asset, FName VariableName, float VariableValue);
    
    UFUNCTION(BlueprintCallable)
    static bool OverrideDataflowVariableBoolArray(UObject* Asset, FName VariableName, const TArray<bool>& VariableArrayValue);
    
    UFUNCTION(BlueprintCallable)
    static bool OverrideDataflowVariableBool(UObject* Asset, FName VariableName, bool VariableValue);
    
    UFUNCTION(BlueprintCallable)
    static void EvaluateTerminalNodeByName(UDataflow* Dataflow, FName TerminalNodeName, UObject* ResultAsset);
    
};

