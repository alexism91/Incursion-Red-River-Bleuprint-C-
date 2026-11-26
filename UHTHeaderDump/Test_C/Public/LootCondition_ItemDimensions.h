#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "LootCondition.h"
#include "LootCondition_ItemDimensions.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API ULootCondition_ItemDimensions : public ULootCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxItemDimensions;
    
    ULootCondition_ItemDimensions();

};

