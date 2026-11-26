#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "SimpleCollisionEditorToolActionProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USimpleCollisionEditorToolActionProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    USimpleCollisionEditorToolActionProperties();

    UFUNCTION(BlueprintCallable)
    void Duplicate();
    
    UFUNCTION(BlueprintCallable)
    void DeleteAll();
    
    UFUNCTION(BlueprintCallable)
    void Delete();
    
    UFUNCTION(BlueprintCallable)
    void AddSphere();
    
    UFUNCTION(BlueprintCallable)
    void AddCapsule();
    
    UFUNCTION(BlueprintCallable)
    void AddBox();
    
};

