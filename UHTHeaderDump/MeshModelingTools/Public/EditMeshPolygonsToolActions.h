#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolActions();

    UFUNCTION(BlueprintCallable)
    void SimplifyByGroups();
    
    UFUNCTION(BlueprintCallable)
    void Retriangulate();
    
    UFUNCTION(BlueprintCallable)
    void RecalcNormals();
    
    UFUNCTION(BlueprintCallable)
    void PushPull();
    
    UFUNCTION(BlueprintCallable)
    void Outset();
    
    UFUNCTION(BlueprintCallable)
    void Offset();
    
    UFUNCTION(BlueprintCallable)
    void Merge();
    
    UFUNCTION(BlueprintCallable)
    void Inset();
    
    UFUNCTION(BlueprintCallable)
    void InsertEdgeLoop();
    
    UFUNCTION(BlueprintCallable)
    void InsertEdge();
    
    UFUNCTION(BlueprintCallable)
    void Flip();
    
    UFUNCTION(BlueprintCallable)
    void Extrude();
    
    UFUNCTION(BlueprintCallable)
    void Duplicate();
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void Delete();
    
    UFUNCTION(BlueprintCallable)
    void Decompose();
    
    UFUNCTION(BlueprintCallable)
    void CutFaces();
    
    UFUNCTION(BlueprintCallable)
    void Bevel();
    
};

