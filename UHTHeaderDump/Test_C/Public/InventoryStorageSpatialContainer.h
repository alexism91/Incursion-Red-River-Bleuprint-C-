#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "InventoryStorageSubContainer.h"
#include "InventoryStorageSpatialContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInventoryStorageSpatialContainer : public UInventoryStorageSubContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ContainerSize;
    
    UInventoryStorageSpatialContainer();

};

