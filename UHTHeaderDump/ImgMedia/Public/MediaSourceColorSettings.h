#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureChromaticAdaptationMethod -FallbackName=ETextureChromaticAdaptationMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureColorSpace -FallbackName=ETextureColorSpace
#include "EMediaSourceEncoding.h"
#include "MediaSourceColorSettings.generated.h"

USTRUCT(BlueprintType)
struct FMediaSourceColorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaSourceEncoding EncodingOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextureColorSpace ColorSpaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RedChromaticityCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GreenChromaticityCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BlueChromaticityCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WhiteChromaticityCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextureChromaticAdaptationMethod ChromaticAdaptationMethod;
    
    IMGMEDIA_API FMediaSourceColorSettings();
};

