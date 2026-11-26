#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator_TargetDecorator.h"
#include "HTNDecorator_Target_Visible.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_Target_Visible : public UHTNDecorator_TargetDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeGainingSight;
    
    UHTNDecorator_Target_Visible();

};

