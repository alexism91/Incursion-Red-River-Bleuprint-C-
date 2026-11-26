#pragma once
#include "CoreMinimal.h"
#include "CustomScriptableToolBuilderBaseInterface.h"
#include "CustomScriptableToolBuilderComponentBase.h"
#include "ToolTargetScriptableToolBuilder.generated.h"

class UScriptableInteractiveTool;
class UScriptableToolTargetRequirements;

UCLASS(Abstract, Blueprintable, Transient)
class SCRIPTABLETOOLSFRAMEWORK_API UToolTargetScriptableToolBuilder : public UCustomScriptableToolBuilderComponentBase, public ICustomScriptableToolBuilderBaseInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptableToolTargetRequirements* Requirements;
    
public:
    UToolTargetScriptableToolBuilder();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetupTool(UScriptableInteractiveTool* Tool) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UScriptableToolTargetRequirements* GetToolTargetRequirements() const;
    

    // Fix for true pure virtual functions not being implemented
};

