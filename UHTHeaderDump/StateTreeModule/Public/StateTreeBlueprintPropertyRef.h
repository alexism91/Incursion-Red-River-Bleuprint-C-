#pragma once
#include "CoreMinimal.h"
#include "EStateTreePropertyRefType.h"
#include "StateTreePropertyRef.h"
#include "StateTreeBlueprintPropertyRef.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FStateTreeBlueprintPropertyRef : public FStateTreePropertyRef {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreePropertyRefType RefType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRefToArray: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsOptional: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TypeObject;
    
public:
    STATETREEMODULE_API FStateTreeBlueprintPropertyRef();
};

