#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=GeometrySelectionEditCommand -FallbackName=GeometrySelectionEditCommand
#include "DeleteGeometrySelectionCommand.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand {
    GENERATED_BODY()
public:
    UDeleteGeometrySelectionCommand();

};

