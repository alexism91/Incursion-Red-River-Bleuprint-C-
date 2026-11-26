#pragma once
#include "CoreMinimal.h"
#include "OdinNativeTokenGeneratorCreateSuccessDelegate.generated.h"

class UOdinTokenGenerator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeTokenGeneratorCreateSuccess, UOdinTokenGenerator*, tokenGenerator);

