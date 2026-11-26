#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolEdgeActions_Triangles.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolEdgeActions_Triangles();

    UFUNCTION(BlueprintCallable)
    void WeldCentered();
    
    UFUNCTION(BlueprintCallable)
    void Weld();
    
    UFUNCTION(BlueprintCallable)
    void Split();
    
    UFUNCTION(BlueprintCallable)
    void Flip();
    
    UFUNCTION(BlueprintCallable)
    void FillHole();
    
    UFUNCTION(BlueprintCallable)
    void Extrude();
    
    UFUNCTION(BlueprintCallable)
    void Collapse();
    
    UFUNCTION(BlueprintCallable)
    void Bridge();
    
};

