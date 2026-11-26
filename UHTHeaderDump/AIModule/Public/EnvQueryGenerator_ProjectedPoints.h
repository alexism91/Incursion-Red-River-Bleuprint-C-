#pragma once
#include "CoreMinimal.h"
#include "EnvQueryGenerator.h"
#include "EnvTraceData.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_ProjectedPoints.generated.h"

class UEnvQueryContext;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData ProjectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> NavDataOverrideContext;
    
    UEnvQueryGenerator_ProjectedPoints();

};

