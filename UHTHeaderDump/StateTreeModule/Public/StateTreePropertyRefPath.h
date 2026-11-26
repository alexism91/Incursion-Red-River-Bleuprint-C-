#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyBindingUtils -ObjectName=PropertyBindingPath -FallbackName=PropertyBindingPath
#include "StateTreeDataHandle.h"
#include "StateTreePropertyRefPath.generated.h"

USTRUCT(BlueprintType)
struct FStateTreePropertyRefPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingPath SourcePropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle SourceDataHandle;
    
public:
    STATETREEMODULE_API FStateTreePropertyRefPath();
};

