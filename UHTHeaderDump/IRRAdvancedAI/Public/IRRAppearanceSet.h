#pragma once
#include "CoreMinimal.h"
#include "IRRAppearanceMeshMaterials.h"
#include "IRRAppearanceSet.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAppearanceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> BodyMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> FaceMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAppearanceMeshMaterials> MaterialVariants;
    
    FIRRAppearanceSet();
};

