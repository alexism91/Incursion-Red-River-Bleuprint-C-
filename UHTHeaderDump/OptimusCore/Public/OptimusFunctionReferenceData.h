#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "OptimusFunctionReferenceNodeSet.h"
#include "OptimusFunctionReferenceData.generated.h"

USTRUCT(BlueprintType)
struct FOptimusFunctionReferenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FOptimusFunctionReferenceNodeSet> FunctionReferences;
    
    OPTIMUSCORE_API FOptimusFunctionReferenceData();
};

