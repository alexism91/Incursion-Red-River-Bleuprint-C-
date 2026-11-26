#pragma once
#include "CoreMinimal.h"
#include "ClothPhysicalMeshData.h"
#include "ClothLODDataCommon.generated.h"

USTRUCT(BlueprintType)
struct FClothLODDataCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothPhysicalMeshData PhysicalMeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMultipleInfluences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkinningKernelRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmoothTransition;
    
    CLOTHINGSYSTEMRUNTIMECOMMON_API FClothLODDataCommon();
};

