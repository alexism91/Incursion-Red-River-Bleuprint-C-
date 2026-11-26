#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "Templates/SubclassOf.h"
#include "HTNQuery_IsCloserToContext.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class TEST_C_API UHTNQuery_IsCloserToContext : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Target;
    
    UHTNQuery_IsCloserToContext();

};

