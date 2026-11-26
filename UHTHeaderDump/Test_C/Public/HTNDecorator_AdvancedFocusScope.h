#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator_FocusScope -FallbackName=HTNDecorator_FocusScope
#include "HTNDecorator_AdvancedFocusScope.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_AdvancedFocusScope : public UHTNDecorator_FocusScope {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActiveTarget;
    
    UHTNDecorator_AdvancedFocusScope();

};

