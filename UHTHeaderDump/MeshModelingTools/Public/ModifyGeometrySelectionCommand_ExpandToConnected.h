#pragma once
#include "CoreMinimal.h"
#include "ModifyGeometrySelectionCommand.h"
#include "ModifyGeometrySelectionCommand_ExpandToConnected.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UModifyGeometrySelectionCommand_ExpandToConnected : public UModifyGeometrySelectionCommand {
    GENERATED_BODY()
public:
    UModifyGeometrySelectionCommand_ExpandToConnected();

};

