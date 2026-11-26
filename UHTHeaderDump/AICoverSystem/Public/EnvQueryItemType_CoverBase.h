#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_VectorBase -FallbackName=EnvQueryItemType_VectorBase
#include "EnvQueryItemType_CoverBase.generated.h"

UCLASS(Blueprintable)
class AICOVERSYSTEM_API UEnvQueryItemType_CoverBase : public UEnvQueryItemType_VectorBase {
    GENERATED_BODY()
public:
    UEnvQueryItemType_CoverBase();

};

