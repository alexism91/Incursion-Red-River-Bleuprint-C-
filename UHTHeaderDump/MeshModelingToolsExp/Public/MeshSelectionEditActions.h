#pragma once
#include "CoreMinimal.h"
#include "MeshSelectionToolActionPropertySet.h"
#include "MeshSelectionEditActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet {
    GENERATED_BODY()
public:
    UMeshSelectionEditActions();

    UFUNCTION(BlueprintCallable)
    void Shrink();
    
    UFUNCTION(BlueprintCallable)
    void SelectAll();
    
    UFUNCTION(BlueprintCallable)
    void OptimizeBorder();
    
    UFUNCTION(BlueprintCallable)
    void LargestTriCountPart();
    
    UFUNCTION(BlueprintCallable)
    void LargestAreaPart();
    
    UFUNCTION(BlueprintCallable)
    void Invert();
    
    UFUNCTION(BlueprintCallable)
    void Grow();
    
    UFUNCTION(BlueprintCallable)
    void FloodFill();
    
    UFUNCTION(BlueprintCallable)
    void ExpandToMaterials();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

