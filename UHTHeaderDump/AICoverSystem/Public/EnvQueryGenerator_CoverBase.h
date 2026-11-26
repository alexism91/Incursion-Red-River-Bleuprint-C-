#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryGenerator -FallbackName=EnvQueryGenerator
#include "EnvQueryGenerator_CoverBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AICOVERSYSTEM_API UEnvQueryGenerator_CoverBase : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_CoverBase();

};

