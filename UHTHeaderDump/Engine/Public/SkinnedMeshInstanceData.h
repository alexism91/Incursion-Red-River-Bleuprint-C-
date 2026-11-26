#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform3f -FallbackName=Transform3f
#include "SkinnedMeshInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FSkinnedMeshInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform3f Transform;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BankIndex;
    
    ENGINE_API FSkinnedMeshInstanceData();
};

