#pragma once
#include "CoreMinimal.h"
#include "WaterBodyMeshComponent.h"
#include "WaterBodyInfoMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWaterBodyInfoMeshComponent : public UWaterBodyMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDilatedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConservativeRasterCompatible;
    
    UWaterBodyInfoMeshComponent(const FObjectInitializer& ObjectInitializer);

};

