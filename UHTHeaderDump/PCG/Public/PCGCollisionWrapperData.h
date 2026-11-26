#pragma once
#include "CoreMinimal.h"
#include "EPCGCollisionQueryFlag.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSpatialData.h"
#include "PCGCollisionWrapperData.generated.h"

class UPCGBasePointData;

UCLASS(Blueprintable, MinimalAPI)
class UPCGCollisionWrapperData : public UPCGSpatialData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGBasePointData* PointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector CollisionSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCollisionQueryFlag CollisionQueryFlag;
    
public:
    UPCGCollisionWrapperData();

};

