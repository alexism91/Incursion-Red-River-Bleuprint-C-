#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSkinnedMeshInstanceDataPackerBase.h"
#include "PCGSkinnedMeshInstanceDataPackerByAttribute.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGSkinnedMeshInstanceDataPackerByAttribute : public UPCGSkinnedMeshInstanceDataPackerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGAttributePropertyInputSelector> AttributeSelectors;
    
    UPCGSkinnedMeshInstanceDataPackerByAttribute();

};

