#pragma once
#include "CoreMinimal.h"
#include "EPCGCoordinateSpace.h"
#include "PCGPoint.h"
#include "PCGSettings.h"
#include "PCGCreatePointsSettings.generated.h"

UCLASS(Blueprintable)
class UPCGCreatePointsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPoint> PointsToCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCoordinateSpace CoordinateSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCullPointsOutsideVolume;
    
    UPCGCreatePointsSettings();

};

