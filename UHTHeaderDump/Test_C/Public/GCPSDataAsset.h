#pragma once
#include "CoreMinimal.h"
#include "EquippableDataAsset.h"
#include "GCPSDataAsset.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class TEST_C_API UGCPSDataAsset : public UEquippableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleLoopAnimation;
    
    UGCPSDataAsset();

};

