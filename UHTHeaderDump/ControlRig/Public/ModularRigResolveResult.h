#pragma once
#include "CoreMinimal.h"
#include "EModularRigResolveState.h"
#include "RigElementKey.h"
#include "RigElementResolveResult.h"
#include "ModularRigResolveResult.generated.h"

USTRUCT(BlueprintType)
struct FModularRigResolveResult {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Connector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementResolveResult> Matches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementResolveResult> Excluded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModularRigResolveState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
public:
    CONTROLRIG_API FModularRigResolveResult();
};

