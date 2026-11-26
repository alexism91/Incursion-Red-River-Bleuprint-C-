#pragma once
#include "CoreMinimal.h"
#include "ModifyGeometrySelectionCommand.h"
#include "ModifyGeometrySelectionCommand_InvertConnected.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UModifyGeometrySelectionCommand_InvertConnected : public UModifyGeometrySelectionCommand {
    GENERATED_BODY()
public:
    UModifyGeometrySelectionCommand_InvertConnected();

};

