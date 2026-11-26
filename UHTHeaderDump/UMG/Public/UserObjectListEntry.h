#pragma once
#include "CoreMinimal.h"
#include "UserListEntry.h"
#include "UserObjectListEntry.generated.h"

class UObject;

UINTERFACE(MinimalAPI)
class UUserObjectListEntry : public UUserListEntry {
    GENERATED_BODY()
};

class IUserObjectListEntry : public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListItemObjectSet(UObject* ListItemObject);
    
};

