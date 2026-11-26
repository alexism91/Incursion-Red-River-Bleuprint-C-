#pragma once
#include "CoreMinimal.h"
#include "WaterBodyComponent.h"
#include "WaterBodyRiverComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USplineMeshComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWaterBodyRiverComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LakeTransitionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LakeTransitionMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OceanTransitionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OceanTransitionMID;
    
public:
    UWaterBodyRiverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRiverWidthAtSplineInputKey(float InKey, float InWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetRiverDepthAtSplineInputKey(float InKey, float InDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetOceanTransitionMaterial(UMaterialInterface* InMat);
    
    UFUNCTION(BlueprintCallable)
    void SetLakeTransitionMaterial(UMaterialInterface* InMat);
    
    UFUNCTION(BlueprintCallable)
    void SetLakeAndOceanTransitionMaterials(UMaterialInterface* InLakeTransition, UMaterialInterface* InOceanTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRiverWidthAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRiverDepthAtSplineInputKey(float InKey) const;
    
};

