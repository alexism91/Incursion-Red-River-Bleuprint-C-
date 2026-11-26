#pragma once
#include "CoreMinimal.h"
#include "ProceduralShapeToolProperties.h"
#include "ProceduralTorusToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MajorRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinorRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MajorSlices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinorSlices;
    
    UProceduralTorusToolProperties();

};

