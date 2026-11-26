#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldPartitionRuntimeCellTransformer -FallbackName=WorldPartitionRuntimeCellTransformer
#include "FastGeoWorldPartitionRuntimeCellTransformer.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=FastGeoStreaming)
class FASTGEOSTREAMING_API UFastGeoWorldPartitionRuntimeCellTransformer : public UWorldPartitionRuntimeCellTransformer {
    GENERATED_BODY()
public:
    UFastGeoWorldPartitionRuntimeCellTransformer();

};

