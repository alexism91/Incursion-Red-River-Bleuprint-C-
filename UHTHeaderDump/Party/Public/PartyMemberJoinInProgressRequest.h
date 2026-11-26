#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PartyMemberJoinInProgressRequest.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberJoinInProgressRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl Target;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Time;
    
    PARTY_API FPartyMemberJoinInProgressRequest();
};

