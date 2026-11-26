#pragma once
#include "CoreMinimal.h"
#include "InterchangeBaseMaterialFactoryNode.h"
#include "InterchangeMaterialFunctionFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialFunctionFactoryNode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputConnection(const FString& InputName, FString& ExpressionNodeUid, FString& OutputName) const;
    
};

