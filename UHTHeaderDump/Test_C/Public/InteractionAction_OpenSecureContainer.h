#pragma once
#include "CoreMinimal.h"
#include "InteractionAction.h"
#include "InteractionAction_OpenSecureContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInteractionAction_OpenSecureContainer : public UInteractionAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContentName;
    
    UInteractionAction_OpenSecureContainer();

};

