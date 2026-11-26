#pragma once
#include "CoreMinimal.h"
#include "ModifyGeometrySelectionCommand.h"
#include "ModifyGeometrySelectionCommand_Contract.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UModifyGeometrySelectionCommand_Contract : public UModifyGeometrySelectionCommand {
    GENERATED_BODY()
public:
    UModifyGeometrySelectionCommand_Contract();

};

