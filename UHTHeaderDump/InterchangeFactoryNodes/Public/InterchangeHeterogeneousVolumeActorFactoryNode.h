#pragma once
#include "CoreMinimal.h"
#include "InterchangeActorFactoryNode.h"
#include "InterchangeHeterogeneousVolumeActorFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeHeterogeneousVolumeActorFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeHeterogeneousVolumeActorFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomVolumetricMaterialUid(const FString& MaterialFactoryNodeUid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomVolumetricMaterialUid(FString& MaterialFactoryNodeUid) const;
    
};

