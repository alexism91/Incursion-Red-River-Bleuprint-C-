#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PartyMember.generated.h"

class USocialUser;

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient, Config=Game, Within=SocialParty)
class UPartyMember : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialUser* DefaultSocialUser;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugInitializer;
    
public:
    UPartyMember();

};

