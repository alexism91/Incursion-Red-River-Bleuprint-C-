#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetTokenStoreTypeIdPair.h"
#include "NetTokenTypeIdConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient, Config=Engine)
class UNetTokenTypeIdConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetTokenStoreTypeIdPair> ReservedTypeIds;
    
    UNetTokenTypeIdConfig();

};

