#pragma once
#include "CoreMinimal.h"
#include "CustomScriptableToolBuilderBaseInterface.h"
#include "CustomScriptableToolBuilderComponentBase.h"
#include "CustomScriptableToolBuilder.generated.h"

class AActor;
class UActorComponent;
class UScriptableInteractiveTool;

UCLASS(Abstract, Blueprintable, Transient)
class SCRIPTABLETOOLSFRAMEWORK_API UCustomScriptableToolBuilder : public UCustomScriptableToolBuilderComponentBase, public ICustomScriptableToolBuilderBaseInterface {
    GENERATED_BODY()
public:
    UCustomScriptableToolBuilder();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetupTool(UScriptableInteractiveTool* Tool, const TArray<AActor*>& SelectedActors, const TArray<UActorComponent*>& SelectedComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnCanBuildTool(const TArray<AActor*>& SelectedActors, const TArray<UActorComponent*>& SelectedComponents) const;
    

    // Fix for true pure virtual functions not being implemented
};

