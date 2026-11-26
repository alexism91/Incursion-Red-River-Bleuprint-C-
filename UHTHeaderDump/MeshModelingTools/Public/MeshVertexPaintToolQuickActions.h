#pragma once
#include "CoreMinimal.h"
#include "MeshVertexPaintToolActionPropertySet.h"
#include "MeshVertexPaintToolQuickActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshVertexPaintToolQuickActions : public UMeshVertexPaintToolActionPropertySet {
    GENERATED_BODY()
public:
    UMeshVertexPaintToolQuickActions();

    UFUNCTION(BlueprintCallable)
    void PaintAll();
    
    UFUNCTION(BlueprintCallable)
    void FillWhite();
    
    UFUNCTION(BlueprintCallable)
    void FillBlack();
    
    UFUNCTION(BlueprintCallable)
    void EraseAll();
    
};

