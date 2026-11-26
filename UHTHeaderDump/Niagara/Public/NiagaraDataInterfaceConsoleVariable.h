#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceConsoleVariable.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UNiagaraDataInterfaceConsoleVariable : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceConsoleVariable();

};

