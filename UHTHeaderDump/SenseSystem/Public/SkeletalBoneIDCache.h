#pragma once
#include "CoreMinimal.h"
#include "SkeletalBoneIDCache.generated.h"

class USkinnedAsset;

USTRUCT(BlueprintType)
struct SENSESYSTEM_API FSkeletalBoneIDCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinnedAsset* SkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneIds;
    
    FSkeletalBoneIDCache();
};

