#pragma once
#include "CoreMinimal.h"
#include "OnKronosNameplateCreatedDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosNameplateCreated, UUserWidget*, NameplateWidget);

