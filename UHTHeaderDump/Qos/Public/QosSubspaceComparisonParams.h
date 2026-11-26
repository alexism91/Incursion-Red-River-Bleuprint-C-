#pragma once
#include "CoreMinimal.h"
#include "QosSubspaceComparisonParams.generated.h"

USTRUCT(BlueprintType)
struct FQosSubspaceComparisonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNonSubspacePingMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSubspacePingMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstantMaxToleranceMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaledMaxTolerancePct;
    
    QOS_API FQosSubspaceComparisonParams();
};

