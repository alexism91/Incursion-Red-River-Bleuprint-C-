#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolActions_Triangles.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolActions_Triangles();

    UFUNCTION(BlueprintCallable)
    void RecalcNormals();
    
    UFUNCTION(BlueprintCallable)
    void PushPull();
    
    UFUNCTION(BlueprintCallable)
    void Poke();
    
    UFUNCTION(BlueprintCallable)
    void Outset();
    
    UFUNCTION(BlueprintCallable)
    void Offset();
    
    UFUNCTION(BlueprintCallable)
    void Inset();
    
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
    void CutFaces();
    
};

