#pragma once
#include "CoreMinimal.h"
#include "InterchangeActorFactoryNode.h"
#include "InterchangeLevelInstanceActorFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeLevelInstanceActorFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeLevelInstanceActorFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomLevelReference(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomLevelReference(FString& AttributeValue) const;
    
};

