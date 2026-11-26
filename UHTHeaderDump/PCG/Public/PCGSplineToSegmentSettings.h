#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGSplineToSegmentSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGSplineToSegmentSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtractTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtractAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtractConnectivityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtractClockwiseInfo;
    
    UPCGSplineToSegmentSettings();

};

