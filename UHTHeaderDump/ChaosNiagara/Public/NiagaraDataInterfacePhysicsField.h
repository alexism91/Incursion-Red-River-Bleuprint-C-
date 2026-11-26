#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterfacePhysicsField.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UNiagaraDataInterfacePhysicsField();

};

