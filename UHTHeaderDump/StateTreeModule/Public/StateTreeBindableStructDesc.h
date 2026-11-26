#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyBindingUtils -ObjectName=PropertyBindingBindableStructDescriptor -FallbackName=PropertyBindingBindableStructDescriptor
#include "EStateTreeBindableStructSource.h"
#include "StateTreeDataHandle.h"
#include "StateTreeBindableStructDesc.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeBindableStructDesc : public FPropertyBindingBindableStructDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle DataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeBindableStructSource DataSource;
    
    STATETREEMODULE_API FStateTreeBindableStructDesc();
};

