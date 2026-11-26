#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetaSoundNodeHandle.generated.h"

USTRUCT(BlueprintType)
struct FMetaSoundNodeHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NodeID;
    
    METASOUNDENGINE_API FMetaSoundNodeHandle();
};

