#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ItemAnimInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UItemAnimInterface : public UInterface {
    GENERATED_BODY()
};

class IItemAnimInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateItemState(FGameplayTagContainer NewItemState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIsItemSnap(bool bNewIsItemSnap);
    
};

