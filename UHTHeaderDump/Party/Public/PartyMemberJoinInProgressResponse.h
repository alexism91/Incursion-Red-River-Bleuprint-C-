#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PartyMemberJoinInProgressResponse.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberJoinInProgressResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl Requester;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RequestTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ResponseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DenialReason;
    
    PARTY_API FPartyMemberJoinInProgressResponse();
};

