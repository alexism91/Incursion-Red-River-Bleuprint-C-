#pragma once
#include "CoreMinimal.h"
#include "EPCGPointNativeProperties.h"
#include "PCGBasePointData.h"
#include "PCGPointArray.h"
#include "PCGPointArrayData.generated.h"

class UPCGPointArrayData;

UCLASS(Blueprintable, MinimalAPI)
class UPCGPointArrayData : public UPCGBasePointData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGPointArray PointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGPointArrayData* ParentData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGPointNativeProperties InheritedProperties;
    
public:
    UPCGPointArrayData();

};

