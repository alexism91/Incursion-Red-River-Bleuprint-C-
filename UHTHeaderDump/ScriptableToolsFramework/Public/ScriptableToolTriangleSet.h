#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptableToolTriangleSet.generated.h"

class UMaterialInterface;
class UPreviewGeometry;
class UScriptableToolQuad;
class UScriptableToolTriangle;
class UTriangleSetComponent;

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolTriangleSet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* ToolDrawableGeometry;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UTriangleSetComponent* TriangleSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolTriangle*> TriangleComponents;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolQuad*> QuadComponents;
    
public:
    UScriptableToolTriangleSet();

    UFUNCTION(BlueprintCallable)
    void SetAllTrianglesMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetAllTrianglesColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTriangle(UScriptableToolTriangle* Triangle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveQuad(UScriptableToolQuad* Quad);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllFaces();
    
    UFUNCTION(BlueprintCallable)
    UScriptableToolTriangle* AddTriangle();
    
    UFUNCTION(BlueprintCallable)
    UScriptableToolQuad* AddQuad();
    
};

