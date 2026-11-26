#pragma once
#include "CoreMinimal.h"
#include "FindDataTableRowPredicateDelegate.generated.h"

class UDataTableRowObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FFindDataTableRowPredicate, UDataTableRowObject*, RowObject);

