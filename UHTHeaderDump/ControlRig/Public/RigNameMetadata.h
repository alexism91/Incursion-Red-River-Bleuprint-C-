#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigNameMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigNameMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
public:
    CONTROLRIG_API FRigNameMetadata();
};

