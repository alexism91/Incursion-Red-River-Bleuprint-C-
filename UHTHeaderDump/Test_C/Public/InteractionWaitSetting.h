#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "InteractionWaitSetting.generated.h"

class UInteractionAction;

USTRUCT(BlueprintType)
struct FInteractionWaitSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionAction* Action;
    
    TEST_C_API FInteractionWaitSetting();
};

