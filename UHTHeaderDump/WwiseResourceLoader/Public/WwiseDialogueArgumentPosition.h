#pragma once
#include "CoreMinimal.h"
#include "WwiseDialogueArgumentPosition.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseDialogueArgumentPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Positions;
    
    FWwiseDialogueArgumentPosition();
};

