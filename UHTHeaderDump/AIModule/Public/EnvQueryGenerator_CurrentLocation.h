#pragma once
#include "CoreMinimal.h"
#include "EnvQueryGenerator_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_CurrentLocation.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> QueryContext;
    
public:
    UEnvQueryGenerator_CurrentLocation();

};

