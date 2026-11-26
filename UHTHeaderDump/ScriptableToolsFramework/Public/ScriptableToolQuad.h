#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ScriptableToolQuad.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolQuad : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriangleAID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriangleBID;
    
public:
    UScriptableToolQuad();

    UFUNCTION(BlueprintCallable)
    void SetQuadUVs(FVector2D A, FVector2D B, FVector2D C, FVector2D D);
    
    UFUNCTION(BlueprintCallable)
    void SetQuadPoints(FVector A, FVector B, FVector C, FVector D);
    
    UFUNCTION(BlueprintCallable)
    void SetQuadNormals(FVector A, FVector B, FVector C, FVector D);
    
    UFUNCTION(BlueprintCallable)
    void SetQuadMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetQuadColors(FColor A, FColor B, FColor C, FColor D);
    
};

