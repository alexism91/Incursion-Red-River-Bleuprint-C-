#pragma once
#include "CoreMinimal.h"
#include "OdinNativeSocketCreateSuccessDelegate.generated.h"

class UOdinSocket;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeSocketCreateSuccess, UOdinSocket*, socket);

