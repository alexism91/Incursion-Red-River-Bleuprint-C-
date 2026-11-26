#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolEdgeActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolEdgeActions();

    UFUNCTION(BlueprintCallable)
    void WeldCentered();
    
    UFUNCTION(BlueprintCallable)
    void Weld();
    
    UFUNCTION(BlueprintCallable)
    void Straighten();
    
    UFUNCTION(BlueprintCallable)
    void Simplify();
    
    UFUNCTION(BlueprintCallable)
    void FillHole();
    
    UFUNCTION(BlueprintCallable)
    void Extrude();
    
    UFUNCTION(BlueprintCallable)
    void DeleteEdge();
    
    UFUNCTION(BlueprintCallable)
    void Collapse();
    
    UFUNCTION(BlueprintCallable)
    void Bridge();
    
    UFUNCTION(BlueprintCallable)
    void Bevel();
    
};

