#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigNameArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigNameArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Value;
    
public:
    CONTROLRIG_API FRigNameArrayMetadata();
};

