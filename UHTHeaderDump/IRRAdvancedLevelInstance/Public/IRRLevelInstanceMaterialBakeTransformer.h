#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldPartitionRuntimeCellTransformer -FallbackName=WorldPartitionRuntimeCellTransformer
#include "IRRLevelInstanceMaterialBakeTransformer.generated.h"

UCLASS(Blueprintable)
class IRRADVANCEDLEVELINSTANCE_API UIRRLevelInstanceMaterialBakeTransformer : public UWorldPartitionRuntimeCellTransformer {
    GENERATED_BODY()
public:
    UIRRLevelInstanceMaterialBakeTransformer();

};

