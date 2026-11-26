#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyBindingUtils -ObjectName=PropertyBindingBindingCollection -FallbackName=PropertyBindingBindingCollection
#include "StateTreeBindableStructDesc.h"
#include "StateTreePropertyAccess.h"
#include "StateTreePropertyPathBinding.h"
#include "StateTreePropertyRefPath.h"
#include "StateTreePropertyBindings.generated.h"

USTRUCT(BlueprintType)
struct FStateTreePropertyBindings : public FPropertyBindingBindingCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeBindableStructDesc> SourceStructs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyPathBinding> PropertyPathBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyRefPath> PropertyReferencePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyAccess> PropertyAccesses;
    
public:
    STATETREEMODULE_API FStateTreePropertyBindings();
};

