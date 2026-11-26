#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ChaosOutfitBodySizeBodyParts.h"
#include "ChaosExtractBodyPartsArrayFromBodySizePartsNode.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FChaosExtractBodyPartsArrayFromBodySizePartsNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosOutfitBodySizeBodyParts BodySizeParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> BodyParts;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosExtractBodyPartsArrayFromBodySizePartsNode();
};

