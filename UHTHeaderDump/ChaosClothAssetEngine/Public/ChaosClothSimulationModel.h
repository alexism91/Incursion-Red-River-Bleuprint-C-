#pragma once
#include "CoreMinimal.h"
#include "ChaosClothSimulationLodModel.h"
#include "ChaosClothSimulationModel.generated.h"

USTRUCT(BlueprintType)
struct FChaosClothSimulationModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosClothSimulationLodModel> ClothSimulationLodModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UsedBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UsedBoneIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReferenceBoneIndex;
    
    CHAOSCLOTHASSETENGINE_API FChaosClothSimulationModel();
};

