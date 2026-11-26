#pragma once
#include "CoreMinimal.h"
#include "IRRNavLocation.h"
#include "IRRNavTrackingData.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRNavTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRNavLocation LastValidNavLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastOnNavMeshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance2DToNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZOffsetToNavMesh;
    
    FIRRNavTrackingData();
};

