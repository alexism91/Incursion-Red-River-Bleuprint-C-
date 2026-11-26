#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=EBakeTextureBitDepth -FallbackName=EBakeTextureBitDepth
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=EBakeTextureResolution -FallbackName=EBakeTextureResolution
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=EBakeTextureSamplesPerPixel -FallbackName=EBakeTextureSamplesPerPixel
#include "BakeMultiMeshAttributeMapsToolProperties.generated.h"

class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapPreview;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBakeTextureResolution Resolution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBakeTextureBitDepth BitDepth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBakeTextureSamplesPerPixel SamplesPerPixel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SampleFilterMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MapPreviewNamesList;
    
    UBakeMultiMeshAttributeMapsToolProperties();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetMapPreviewNamesFunc();
    
};

