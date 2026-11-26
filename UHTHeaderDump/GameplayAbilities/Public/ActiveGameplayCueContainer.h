#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "ActiveGameplayCue.h"
#include "ActiveGameplayCueContainer.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FActiveGameplayCueContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayCue> GameplayCues;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* Owner;
    
public:
    GAMEPLAYABILITIES_API FActiveGameplayCueContainer();
};

