#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=MeshDescriptionBase -FallbackName=MeshDescriptionBase
#include "SkeletalMeshDescription.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USkeletalMeshDescription : public UMeshDescriptionBase {
    GENERATED_BODY()
public:
    USkeletalMeshDescription();

};

