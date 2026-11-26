#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UserListEntry.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UUserListEntry : public UInterface {
    GENERATED_BODY()
};

class IUserListEntry : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemSelectionChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEntryReleased();
    
};

