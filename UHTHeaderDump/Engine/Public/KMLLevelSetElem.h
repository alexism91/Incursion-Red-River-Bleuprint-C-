#pragma once
#include "CoreMinimal.h"
#include "KShapeElem.h"
#include "KMLLevelSetElem.generated.h"

class UNNEModelData;

USTRUCT(BlueprintType)
struct FKMLLevelSetElem : public FKShapeElem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNNEModelData* NNESignedDistanceModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNNEModelData* NNEIncorrectZoneModelData;
    
public:
    ENGINE_API FKMLLevelSetElem();
};

