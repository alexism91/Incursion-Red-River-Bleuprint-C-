#pragma once
#include "CoreMinimal.h"
#include "MeshBlendActorCheckAgainItem.generated.h"

USTRUCT(BlueprintType)
struct FMeshBlendActorCheckAgainItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopCheckingAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBeenCheckedOnce;
    
    MESHBLEND_API FMeshBlendActorCheckAgainItem();
};

