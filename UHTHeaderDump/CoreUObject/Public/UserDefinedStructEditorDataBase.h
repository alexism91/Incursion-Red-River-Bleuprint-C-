#pragma once
#include "CoreMinimal.h"
#include "Object.h"
#include "UserDefinedStructEditorDataBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UUserDefinedStructEditorDataBase : public UObject {
    GENERATED_BODY()
public:
    UUserDefinedStructEditorDataBase();

};

