#pragma once
#include "CoreMinimal.h"
#include "IRRClothGroomFit.h"
#include "IRRClothMaterialVariant.h"
#include "IRRClothMeshEntry.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FIRRClothMeshEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRClothMaterialVariant> MaterialVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRClothGroomFit> Grooms;
    
    TEST_C_API FIRRClothMeshEntry();
};

