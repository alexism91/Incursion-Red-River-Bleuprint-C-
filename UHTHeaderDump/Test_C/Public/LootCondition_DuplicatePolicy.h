#pragma once
#include "CoreMinimal.h"
#include "ELootDuplicatePolicy.h"
#include "LootCondition.h"
#include "LootCondition_DuplicatePolicy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API ULootCondition_DuplicatePolicy : public ULootCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELootDuplicatePolicy DuplicatePolicy;
    
    ULootCondition_DuplicatePolicy();

};

