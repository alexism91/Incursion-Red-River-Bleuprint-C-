#pragma once
#include "CoreMinimal.h"
#include "DataLayerInstanceNames.generated.h"

USTRUCT(BlueprintType)
struct FDataLayerInstanceNames {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstDataLayerExternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DataLayers;
    
public:
    ENGINE_API FDataLayerInstanceNames();
};

