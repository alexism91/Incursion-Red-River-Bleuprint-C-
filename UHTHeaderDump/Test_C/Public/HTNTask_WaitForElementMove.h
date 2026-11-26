#pragma once
#include "CoreMinimal.h"
#include "HTNTask_WaitForElementBase.h"
#include "HTNTask_WaitForElementMove.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_WaitForElementMove : public UHTNTask_WaitForElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForStaggeredStart;
    
    UHTNTask_WaitForElementMove();

};

