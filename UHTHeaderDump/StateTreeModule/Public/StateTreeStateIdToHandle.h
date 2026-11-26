#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "StateTreeStateHandle.h"
#include "StateTreeStateIdToHandle.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeStateIdToHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle Handle;
    
    STATETREEMODULE_API FStateTreeStateIdToHandle();
};

