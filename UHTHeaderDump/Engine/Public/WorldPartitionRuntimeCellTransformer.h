#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionRuntimeCellTransformer.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UWorldPartitionRuntimeCellTransformer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    UWorldPartitionRuntimeCellTransformer();

};

