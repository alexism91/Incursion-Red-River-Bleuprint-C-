#pragma once
#include "CoreMinimal.h"
#include "ModifyGeometrySelectionCommand.h"
#include "ModifyGeometrySelectionCommand_Invert.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UModifyGeometrySelectionCommand_Invert : public UModifyGeometrySelectionCommand {
    GENERATED_BODY()
public:
    UModifyGeometrySelectionCommand_Invert();

};

