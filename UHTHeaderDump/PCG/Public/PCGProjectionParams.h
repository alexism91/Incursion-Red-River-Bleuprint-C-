#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataFilterMode.h"
#include "EPCGMetadataOp.h"
#include "EPCGProjectionColorBlendMode.h"
#include "EPCGProjectionTagMergeMode.h"
#include "PCGProjectionParams.generated.h"

USTRUCT(BlueprintType)
struct FPCGProjectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectRotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectScales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGProjectionColorBlendMode ColorBlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttributeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataFilterMode AttributeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataOp AttributeMergeOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGProjectionTagMergeMode TagMergeOperation;
    
    PCG_API FPCGProjectionParams();
};

