#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "KronosSearchParams.h"
#include "KronosMatchmakingSearchPass.generated.h"

UCLASS(Blueprintable, NotPlaceable, Within=KronosMatchmakingPolicy)
class KRONOS_API UKronosMatchmakingSearchPass : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKronosSearchParams SearchParams;
    
    UKronosMatchmakingSearchPass();

};

