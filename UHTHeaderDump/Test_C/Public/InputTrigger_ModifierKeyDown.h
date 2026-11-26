#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputTrigger -FallbackName=InputTrigger
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputTrigger_ModifierKeyDown.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, Config=Engine)
class TEST_C_API UInputTrigger_ModifierKeyDown : public UInputTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey ModifierKey;
    
    UInputTrigger_ModifierKeyDown();

};

