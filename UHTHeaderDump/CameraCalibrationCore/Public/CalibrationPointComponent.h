#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=ProceduralMeshComponent -FallbackName=ProceduralMeshComponent
#include "ECalibrationPointVisualization.h"
#include "CalibrationPointComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCalibrationPointComponent : public UProceduralMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVector> SubPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisualizePointsInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointVisualizationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECalibrationPointVisualization> VisualizationShape;
    
    UCalibrationPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RebuildVertices();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NamespacedSubpointName(const FString& InSubpointName, FString& OutNamespacedName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWorldLocation(const FString& InPointName, FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNamespacedPointNames(TArray<FString>& OutNamespacedNames) const;
    
};

