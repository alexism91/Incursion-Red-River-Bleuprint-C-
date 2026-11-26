#pragma once
#include "CoreMinimal.h"
#include "ECrossplayPreference.h"
#include "OnlinePartyRepDataBase.h"
#include "PartyMemberJoinInProgressData.h"
#include "PartyMemberPlatformData.h"
#include "PartyMemberRepData.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberRepData : public FOnlinePartyRepDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberPlatformData PlatformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrossplayPreference CrossplayPreference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JoinMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberJoinInProgressData JoinInProgressData;
    
public:
    PARTY_API FPartyMemberRepData();
};

