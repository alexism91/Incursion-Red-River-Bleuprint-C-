#pragma once
#include "CoreMinimal.h"
#include "MeshElementSelectionParams.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FMeshElementSelectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SelectionFillColor;
    
    MODELINGCOMPONENTS_API FMeshElementSelectionParams();
};

