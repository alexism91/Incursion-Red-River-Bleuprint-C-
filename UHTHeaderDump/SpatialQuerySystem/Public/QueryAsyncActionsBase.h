#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "QueryAsyncActionsBase.generated.h"

UCLASS(Abstract, Blueprintable)
class SPATIALQUERYSYSTEM_API UQueryAsyncActionsBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UQueryAsyncActionsBase();

};

