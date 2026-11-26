#pragma once
#include "CoreMinimal.h"
#include "HTNTask_WaitForElementBase.h"
#include "HTNTask_WaitForElementSettled.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_WaitForElementSettled : public UHTNTask_WaitForElementBase {
    GENERATED_BODY()
public:
    UHTNTask_WaitForElementSettled();

};

