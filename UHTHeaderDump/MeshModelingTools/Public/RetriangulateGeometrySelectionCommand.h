#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=GeometrySelectionEditCommand -FallbackName=GeometrySelectionEditCommand
#include "RetriangulateGeometrySelectionCommand.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URetriangulateGeometrySelectionCommand : public UGeometrySelectionEditCommand {
    GENERATED_BODY()
public:
    URetriangulateGeometrySelectionCommand();

};

