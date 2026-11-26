#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=MeshDescriptionBaseBulkData -FallbackName=MeshDescriptionBaseBulkData
#include "SkeletalMeshDescriptionBulkData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USkeletalMeshDescriptionBulkData : public UMeshDescriptionBaseBulkData {
    GENERATED_BODY()
public:
    USkeletalMeshDescriptionBulkData();

};

