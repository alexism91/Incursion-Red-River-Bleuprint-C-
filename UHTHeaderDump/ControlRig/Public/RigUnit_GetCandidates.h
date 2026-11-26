#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_GetCandidates.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetCandidates : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigElementKey Connector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Candidates;
    
    CONTROLRIG_API FRigUnit_GetCandidates();
};

