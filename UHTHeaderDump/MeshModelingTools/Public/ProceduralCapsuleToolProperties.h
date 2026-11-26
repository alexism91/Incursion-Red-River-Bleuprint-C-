#pragma once
#include "CoreMinimal.h"
#include "ProceduralShapeToolProperties.h"
#include "ProceduralCapsuleToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UProceduralCapsuleToolProperties : public UProceduralShapeToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HemisphereSlices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CylinderSlices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CylinderSubdivisions;
    
    UProceduralCapsuleToolProperties();

};

