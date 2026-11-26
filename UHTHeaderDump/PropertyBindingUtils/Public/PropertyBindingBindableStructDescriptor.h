#pragma once
#include "CoreMinimal.h"
#include "PropertyBindingBindableStructDescriptor.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct FPropertyBindingBindableStructDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* Struct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    PROPERTYBINDINGUTILS_API FPropertyBindingBindableStructDescriptor();
};

