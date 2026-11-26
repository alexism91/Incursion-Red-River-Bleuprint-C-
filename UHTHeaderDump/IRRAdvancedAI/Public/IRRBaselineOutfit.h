#pragma once
#include "CoreMinimal.h"
#include "IRRAppearanceMeshMaterials.h"
#include "IRRBaselineOutfit.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRBaselineOutfit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> TorsoMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> LegsMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> FootwearMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAppearanceMeshMaterials> MaterialVariants;
    
    FIRRBaselineOutfit();
};

