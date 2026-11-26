#pragma once
#include "CoreMinimal.h"
#include "EWwiseGroupType.h"
#include "WwiseDialogueArgumentItem.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseDialogueArgumentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseGroupType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    FWwiseDialogueArgumentItem();
};
FORCEINLINE uint32 GetTypeHash(const FWwiseDialogueArgumentItem) { return 0; }

