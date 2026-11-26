#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "InventoryContainerSettings.h"
#include "InventorySpatialContainerSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInventorySpatialContainerSettings : public UInventoryContainerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ContainerSize;
    
    UInventorySpatialContainerSettings();

};

