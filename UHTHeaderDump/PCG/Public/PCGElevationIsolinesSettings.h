#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGElevationIsolinesSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGElevationIsolinesSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ElevationStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ElevationEnd;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ElevationIncrement;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddTagOnOutputForSameElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectSurfaceNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutputAsSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLinearSpline;
    
    UPCGElevationIsolinesSettings();

};

