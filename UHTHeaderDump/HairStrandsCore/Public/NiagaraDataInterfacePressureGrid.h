#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceVelocityGrid.h"
#include "NiagaraDataInterfacePressureGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid {
    GENERATED_BODY()
public:
    UNiagaraDataInterfacePressureGrid();

};

