#pragma once
#include "CoreMinimal.h"
#include "EPCGControlPointFuseMode.h"
#include "PCGSettings.h"
#include "PCGCleanSplineSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGCleanSplineSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFuseColocatedControlPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ColocationDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSplineLocalSpace;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGControlPointFuseMode FuseMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveCollinearControlPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CollinearAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRadians;
    
    UPCGCleanSplineSettings();

};

