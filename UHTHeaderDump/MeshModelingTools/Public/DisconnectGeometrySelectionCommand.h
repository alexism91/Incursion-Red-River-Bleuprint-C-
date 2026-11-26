#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=GeometrySelectionEditCommand -FallbackName=GeometrySelectionEditCommand
#include "DisconnectGeometrySelectionCommand.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDisconnectGeometrySelectionCommand : public UGeometrySelectionEditCommand {
    GENERATED_BODY()
public:
    UDisconnectGeometrySelectionCommand();

};

