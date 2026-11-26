#pragma once
#include "CoreMinimal.h"
#include "OnSenseTestActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSenseTestActor, AActor*, Actor);

