#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "QueryShapeBase.h"
#include "QueryShapePoint.generated.h"

USTRUCT(BlueprintType)
struct SPATIALQUERYSYSTEM_API FQueryShapePoint : public FQueryShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenterPoint;
    
    FQueryShapePoint();
};

