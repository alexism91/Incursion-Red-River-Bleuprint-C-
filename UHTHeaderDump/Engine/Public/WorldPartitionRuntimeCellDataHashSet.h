#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionRuntimeCellData.h"
#include "WorldPartitionRuntimeCellDataHashSet.generated.h"

UCLASS(Blueprintable, MinimalAPI, Within=WorldPartitionRuntimeCell)
class UWorldPartitionRuntimeCellDataHashSet : public UWorldPartitionRuntimeCellData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIs2D;
    
    UWorldPartitionRuntimeCellDataHashSet();

};

