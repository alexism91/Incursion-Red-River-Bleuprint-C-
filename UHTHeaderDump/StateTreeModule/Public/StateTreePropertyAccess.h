#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyBindingUtils -ObjectName=PropertyBindingPropertyIndirection -FallbackName=PropertyBindingPropertyIndirection
#include "StateTreeDataHandle.h"
#include "StateTreePropertyAccess.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct FStateTreePropertyAccess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingPropertyIndirection SourceIndirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStruct* SourceStructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle SourceDataHandle;
    
    STATETREEMODULE_API FStateTreePropertyAccess();
};

