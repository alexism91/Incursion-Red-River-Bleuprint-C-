#pragma once
#include "CoreMinimal.h"
#include "ReplicatedContainerSettingsCopy.generated.h"

class UInventoryContainerSettings;

USTRUCT(BlueprintType)
struct FReplicatedContainerSettingsCopy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryContainerSettings* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryContainerSettings* Copy;
    
    TEST_C_API FReplicatedContainerSettingsCopy();
};

