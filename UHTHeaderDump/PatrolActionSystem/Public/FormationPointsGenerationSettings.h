#pragma once
#include "CoreMinimal.h"
#include "FormationPointsGenerationSettings.generated.h"

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FFormationPointsGenerationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceBetweenPoints;
    
    FFormationPointsGenerationSettings();
};

