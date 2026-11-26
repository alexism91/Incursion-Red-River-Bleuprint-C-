#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=GeometrySelectionEditCommand -FallbackName=GeometrySelectionEditCommand
#include "ModifyGeometrySelectionCommand.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UModifyGeometrySelectionCommand : public UGeometrySelectionEditCommand {
    GENERATED_BODY()
public:
    UModifyGeometrySelectionCommand();

};

