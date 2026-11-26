#pragma once
#include "CoreMinimal.h"
#include "KronosSpecificSessionQuery.h"
#include "KronosFollowPartyParams.generated.h"

USTRUCT(BlueprintType)
struct KRONOS_API FKronosFollowPartyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKronosSpecificSessionQuery SpecificSessionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLanQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchPresence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchLobbies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPartyLeaderCreatingSession;
    
    FKronosFollowPartyParams();
};

