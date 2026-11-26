#pragma once
#include "CoreMinimal.h"
#include "MeshGroupPaintToolActionPropertySet.h"
#include "MeshGroupPaintToolFreezeActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet {
    GENERATED_BODY()
public:
    UMeshGroupPaintToolFreezeActions();

    UFUNCTION(BlueprintCallable)
    void UnfreezeAll();
    
    UFUNCTION(BlueprintCallable)
    void ShrinkCurrent();
    
    UFUNCTION(BlueprintCallable)
    void GrowCurrent();
    
    UFUNCTION(BlueprintCallable)
    void FreezeOthers();
    
    UFUNCTION(BlueprintCallable)
    void FreezeCurrent();
    
    UFUNCTION(BlueprintCallable)
    void FloodFillCurrent();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrent();
    
    UFUNCTION(BlueprintCallable)
    void ClearAll();
    
};

