#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementKeyWithLabel.h"
#include "RigControlElementCustomization.generated.h"

USTRUCT(BlueprintType)
struct FRigControlElementCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKeyWithLabel> AvailableSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> RemovedSpaces;
    
    CONTROLRIG_API FRigControlElementCustomization();
};

