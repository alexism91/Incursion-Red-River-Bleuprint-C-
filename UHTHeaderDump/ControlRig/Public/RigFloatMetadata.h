#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigFloatMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigFloatMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    CONTROLRIG_API FRigFloatMetadata();
};

