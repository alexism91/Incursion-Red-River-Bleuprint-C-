#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ChaosVDSessionPing.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDSessionPing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ControllerInstanceId;
    
    CHAOSSOLVERENGINE_API FChaosVDSessionPing();
};

