#pragma once
#include "CoreMinimal.h"
#include "KronosOnlineFriend.h"
#include "OnKronosReadFriendsListCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosReadFriendsListComplete, const TArray<FKronosOnlineFriend>&, Friends);

