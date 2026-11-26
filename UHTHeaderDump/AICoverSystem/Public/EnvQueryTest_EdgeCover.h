#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_EdgeCover.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class AICOVERSYSTEM_API UEnvQueryTest_EdgeCover : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
public:
    UEnvQueryTest_EdgeCover();

};

