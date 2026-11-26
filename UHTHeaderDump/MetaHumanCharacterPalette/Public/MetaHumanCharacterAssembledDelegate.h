#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterAssemblyResult.h"
#include "MetaHumanCharacterAssembledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMetaHumanCharacterAssembled, EMetaHumanCharacterAssemblyResult, Result);

