#pragma once
#include "CoreMinimal.h"
#include "ERigElementResolveState.h"
#include "RigElementKey.h"
#include "RigElementResolveResult.generated.h"

USTRUCT(BlueprintType)
struct FRigElementResolveResult {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementResolveState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
public:
    CONTROLRIG_API FRigElementResolveResult();
};

