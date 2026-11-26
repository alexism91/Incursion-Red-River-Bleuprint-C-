#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "MinimalReplicationTagCountMapForNetSerializer.generated.h"

USTRUCT(BlueprintType)
struct FMinimalReplicationTagCountMapForNetSerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
public:
    GAMEPLAYABILITIES_API FMinimalReplicationTagCountMapForNetSerializer();
};

