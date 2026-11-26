#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
#include "EnvQueryGenerator_Covers_Fast.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_Covers_ParallelToContext.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UEnvQueryGenerator_Covers_ParallelToContext : public UEnvQueryGenerator_Covers_Fast {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxDotToContext;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MinDotToContext;
    
    UEnvQueryGenerator_Covers_ParallelToContext();

};

