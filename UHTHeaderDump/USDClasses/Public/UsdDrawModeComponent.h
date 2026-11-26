#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "EUsdDrawMode.h"
#include "EUsdModelCardFace.h"
#include "EUsdModelCardGeometry.h"
#include "UsdDrawModeComponent.generated.h"

class UMaterialInstance;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USDCLASSES_API UUsdDrawModeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundsMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundsMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EUsdDrawMode DrawMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BoundsColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EUsdModelCardGeometry CardGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CardTextureXPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CardTextureYPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CardTextureZPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CardTextureXNeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CardTextureYNeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CardTextureZNeg;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AuthoredFaces;
    
public:
    UUsdDrawModeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTextureForFace(EUsdModelCardFace Face, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawMode(EUsdDrawMode NewDrawMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCardTextureZPos(UTexture2D* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetCardTextureZNeg(UTexture2D* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetCardTextureYPos(UTexture2D* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetCardTextureYNeg(UTexture2D* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetCardTextureXPos(UTexture2D* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetCardTextureXNeg(UTexture2D* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetCardGeometry(EUsdModelCardGeometry NewGeometry);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundsMin(const FVector& NewMin);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundsMax(const FVector& NewMax);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundsColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetTextureForFace(EUsdModelCardFace Face) const;
    
};

