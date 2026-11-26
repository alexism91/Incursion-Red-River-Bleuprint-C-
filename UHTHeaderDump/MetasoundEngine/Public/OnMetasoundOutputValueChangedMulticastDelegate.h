#pragma once
#include "CoreMinimal.h"
#include "MetaSoundOutput.h"
#include "OnMetasoundOutputValueChangedMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMetasoundOutputValueChangedMulticast, FName, Name, const FMetaSoundOutput&, Output);

