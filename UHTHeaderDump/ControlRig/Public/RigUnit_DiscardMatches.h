#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_DiscardMatches.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DiscardMatches : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Excluded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Message;
    
    CONTROLRIG_API FRigUnit_DiscardMatches();
};

