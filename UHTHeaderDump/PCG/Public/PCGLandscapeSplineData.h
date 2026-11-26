#pragma once
#include "CoreMinimal.h"
#include "PCGPolyLineData.h"
#include "PCGLandscapeSplineData.generated.h"

class ULandscapeSplinesComponent;

UCLASS(Blueprintable, MinimalAPI)
class UPCGLandscapeSplineData : public UPCGPolyLineData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ULandscapeSplinesComponent> Spline;
    
public:
    UPCGLandscapeSplineData();

};

