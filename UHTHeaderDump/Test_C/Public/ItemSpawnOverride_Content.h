#pragma once
#include "CoreMinimal.h"
#include "ItemSpawnOverride_Durability.h"
#include "ItemSpawnOverride_Content.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UItemSpawnOverride_Content : public UItemSpawnOverride_Durability {
    GENERATED_BODY()
public:
    UItemSpawnOverride_Content();

};

