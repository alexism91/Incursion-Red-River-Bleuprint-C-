#pragma once
#include "CoreMinimal.h"
#include "EPropertyBagPropertyType.h"
#include "Guid.h"
#include "PropertyBagContainerTypes.h"
#include "PropertyBagPropertyDesc.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPropertyBagPropertyDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ValueTypeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPropertyBagPropertyType ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBagContainerTypes ContainerTypes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PropertyFlags;
    
    COREUOBJECT_API FPropertyBagPropertyDesc();
};

