#pragma once
#include "CoreMinimal.h"
#include "HairBendConstraint.h"
#include "HairCollisionConstraint.h"
#include "HairStretchConstraint.h"
#include "HairMaterialConstraints.generated.h"

USTRUCT(BlueprintType)
struct FHairMaterialConstraints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairBendConstraint BendConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairStretchConstraint StretchConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairCollisionConstraint CollisionConstraint;
    
    HAIRSTRANDSCORE_API FHairMaterialConstraints();
};

