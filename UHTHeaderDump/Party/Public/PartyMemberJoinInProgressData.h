#pragma once
#include "CoreMinimal.h"
#include "PartyMemberJoinInProgressRequest.h"
#include "PartyMemberJoinInProgressResponse.h"
#include "PartyMemberJoinInProgressData.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberJoinInProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberJoinInProgressRequest request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartyMemberJoinInProgressResponse> Responses;
    
    PARTY_API FPartyMemberJoinInProgressData();
};

