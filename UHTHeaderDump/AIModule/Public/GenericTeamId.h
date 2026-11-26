#pragma once
#include "CoreMinimal.h"
#include "GenericTeamId.generated.h"

USTRUCT(BlueprintType)
struct FGenericTeamId {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
public:
    AIMODULE_API FGenericTeamId();
};

