#pragma once
#include "CoreMinimal.h"
#include "PCGProjectionParams.h"
#include "PCGSettings.h"
#include "PCGProjectionSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGProjectionSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGProjectionParams ProjectionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCollapseToPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepZeroDensityPoints;
    
    UPCGProjectionSettings();

};

