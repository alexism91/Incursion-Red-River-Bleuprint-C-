#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveCommandResult -FallbackName=InteractiveCommandResult
#include "GeometrySelectionEditCommandResult.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult {
    GENERATED_BODY()
public:
    UGeometrySelectionEditCommandResult();

};

