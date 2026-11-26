#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentProperties -FallbackName=NavAgentProperties
#include "EnvQueryContext.h"
#include "EnvQueryContext_NavigationData.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UEnvQueryContext_NavigationData : public UEnvQueryContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentProperties NavAgentProperties;
    
public:
    UEnvQueryContext_NavigationData();

};

