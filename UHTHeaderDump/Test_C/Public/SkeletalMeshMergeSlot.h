#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshMergeSlot.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct TEST_C_API FSkeletalMeshMergeSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> Meshes;
    
    FSkeletalMeshMergeSlot();
};

