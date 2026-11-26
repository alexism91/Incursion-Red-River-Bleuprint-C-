#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ObjectScopeHysteresisProfile.h"
#include "ReplicationFilteringConfig.generated.h"

UCLASS(Blueprintable, Transient, Config=Engine)
class UReplicationFilteringConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableObjectScopeHysteresis;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DefaultHysteresisFrameCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HysteresisUpdateConnectionThrottling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectScopeHysteresisProfile> HysteresisProfiles;
    
public:
    UReplicationFilteringConfig();

};

