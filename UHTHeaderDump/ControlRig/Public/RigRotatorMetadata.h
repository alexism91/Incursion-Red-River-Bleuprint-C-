#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigBaseMetadata.h"
#include "RigRotatorMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigRotatorMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
public:
    CONTROLRIG_API FRigRotatorMetadata();
};

