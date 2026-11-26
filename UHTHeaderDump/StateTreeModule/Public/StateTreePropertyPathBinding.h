#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyBindingUtils -ObjectName=PropertyBindingBinding -FallbackName=PropertyBindingBinding
#include "StateTreeDataHandle.h"
#include "StateTreePropertyPathBinding.generated.h"

USTRUCT(BlueprintType)
struct FStateTreePropertyPathBinding : public FPropertyBindingBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle SourceDataHandle;
    
public:
    STATETREEMODULE_API FStateTreePropertyPathBinding();
};

