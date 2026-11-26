#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGInstanceDataPackerBase.h"
#include "PCGInstanceDataPackerByAttribute.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGInstanceDataPackerByAttribute : public UPCGInstanceDataPackerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGAttributePropertyInputSelector> AttributeSelectors;
    
    UPCGInstanceDataPackerByAttribute();

};

