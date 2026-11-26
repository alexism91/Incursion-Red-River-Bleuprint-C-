#pragma once
#include "CoreMinimal.h"
#include "IRRAppearanceMaterialVariant.h"
#include "IRRAppearanceMeshMaterials.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAppearanceMeshMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAppearanceMaterialVariant> Variants;
    
    FIRRAppearanceMeshMaterials();
};

