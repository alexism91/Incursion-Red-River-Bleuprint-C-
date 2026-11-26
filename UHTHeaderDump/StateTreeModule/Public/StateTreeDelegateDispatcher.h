#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "StateTreeDelegateDispatcher.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeDelegateDispatcher {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
public:
    STATETREEMODULE_API FStateTreeDelegateDispatcher();
};

