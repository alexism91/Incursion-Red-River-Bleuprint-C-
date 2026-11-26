#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "MinimalGameplayCueReplicationProxyForNetSerializer.generated.h"

USTRUCT(BlueprintType)
struct FMinimalGameplayCueReplicationProxyForNetSerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector_NetQuantize> Locations;
    
public:
    GAMEPLAYABILITIES_API FMinimalGameplayCueReplicationProxyForNetSerializer();
};

