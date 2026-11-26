#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "PolyEditTopologyProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddExtraCorners;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExtraCornerAngleThresholdDegrees;
    
    UPolyEditTopologyProperties();

    UFUNCTION(BlueprintCallable)
    void RegenerateExtraCorners();
    
};

