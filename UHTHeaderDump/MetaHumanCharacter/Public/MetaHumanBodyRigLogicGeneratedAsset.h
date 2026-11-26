#pragma once
#include "CoreMinimal.h"
#include "MetaHumanBodyRigLogicGeneratedAsset.generated.h"

class UAnimSequence;
class UPoseAsset;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanBodyRigLogicGeneratedAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SolverName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseAsset* PoseAsset;
    
    FMetaHumanBodyRigLogicGeneratedAsset();
};

