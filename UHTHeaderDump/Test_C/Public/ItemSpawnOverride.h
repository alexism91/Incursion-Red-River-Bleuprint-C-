#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ContainerItem.h"
#include "ItemSpawnOverride.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UItemSpawnOverride : public UObject {
    GENERATED_BODY()
public:
    UItemSpawnOverride();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnItem(UPARAM(Ref) FContainerItem& Item);
    
};

