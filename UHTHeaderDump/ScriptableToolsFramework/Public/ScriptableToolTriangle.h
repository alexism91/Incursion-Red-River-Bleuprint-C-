#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ScriptableToolTriangle.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolTriangle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriangleID;
    
public:
    UScriptableToolTriangle();

    UFUNCTION(BlueprintCallable)
    void SetTriangleUVs(FVector2D A, FVector2D B, FVector2D C);
    
    UFUNCTION(BlueprintCallable)
    void SetTrianglePoints(FVector A, FVector B, FVector C);
    
    UFUNCTION(BlueprintCallable)
    void SetTriangleNormals(FVector A, FVector B, FVector C);
    
    UFUNCTION(BlueprintCallable)
    void SetTriangleMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetTriangleColors(FColor A, FColor B, FColor C);
    
};

