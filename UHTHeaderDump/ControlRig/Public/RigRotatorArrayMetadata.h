#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigBaseMetadata.h"
#include "RigRotatorArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigRotatorArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> Value;
    
public:
    CONTROLRIG_API FRigRotatorArrayMetadata();
};

