#pragma once
#include "CoreMinimal.h"
#include "OnItemRotatedDelegate.generated.h"

class UDragDropOperation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemRotated, UDragDropOperation*, InOperation);

