#pragma once
#include "CoreMinimal.h"
#include "MeshBlendActorProcessingItem.generated.h"

USTRUCT(BlueprintType)
struct FMeshBlendActorProcessingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoftReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefresh;
    
    MESHBLEND_API FMeshBlendActorProcessingItem();
};

