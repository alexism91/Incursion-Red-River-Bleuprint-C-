#pragma once
#include "CoreMinimal.h"
#include "EPCGCollisionQueryFlag.h"
#include "EPCGSelfPruningType.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSelfPruningParameters.generated.h"

USTRUCT(BlueprintType)
struct FPCGSelfPruningParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSelfPruningType PruningType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector ComparisonSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusSimilarityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizedPruning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCollisionAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector CollisionAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCollisionQueryFlag CollisionQueryFlag;
    
    PCG_API FPCGSelfPruningParameters();
};

