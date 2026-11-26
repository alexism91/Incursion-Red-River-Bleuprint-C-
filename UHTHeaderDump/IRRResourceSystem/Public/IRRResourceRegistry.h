#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRResourceRegistry.generated.h"

class UIRRResourceType;

UCLASS(Blueprintable)
class IRRRESOURCESYSTEM_API UIRRResourceRegistry : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UIRRResourceType>> ByTag;
    
    UIRRResourceRegistry();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRResourceType* ResolveSync(const FGameplayTag& Tag) const;
    
};

