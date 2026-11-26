#pragma once
#include "CoreMinimal.h"
#include "InteractionAction.h"
#include "InteractionAction_OpenRaidTrader.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInteractionAction_OpenRaidTrader : public UInteractionAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContentName;
    
    UInteractionAction_OpenRaidTrader();

};

