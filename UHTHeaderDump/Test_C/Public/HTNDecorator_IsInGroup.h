#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "EIRRElementRoleCheck.h"
#include "HTNDecorator_IsInGroup.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_IsInGroup : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRElementRoleCheck Check;
    
    UHTNDecorator_IsInGroup();

};

