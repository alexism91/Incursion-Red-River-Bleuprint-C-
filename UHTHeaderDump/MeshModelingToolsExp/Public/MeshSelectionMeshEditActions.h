#pragma once
#include "CoreMinimal.h"
#include "MeshSelectionToolActionPropertySet.h"
#include "MeshSelectionMeshEditActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet {
    GENERATED_BODY()
public:
    UMeshSelectionMeshEditActions();

    UFUNCTION(BlueprintCallable)
    void SmoothBorder();
    
    UFUNCTION(BlueprintCallable)
    void Separate();
    
    UFUNCTION(BlueprintCallable)
    void FlipNormals();
    
    UFUNCTION(BlueprintCallable)
    void Duplicate();
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void Delete();
    
    UFUNCTION(BlueprintCallable)
    void CreatePolygroup();
    
};

