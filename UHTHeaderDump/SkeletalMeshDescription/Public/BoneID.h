#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=ElementID -FallbackName=ElementID
#include "BoneID.generated.h"

USTRUCT(BlueprintType)
struct FBoneID : public FElementID {
    GENERATED_BODY()
public:
    SKELETALMESHDESCRIPTION_API FBoneID();
};

