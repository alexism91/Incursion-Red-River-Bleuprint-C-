#pragma once
#include "CoreMinimal.h"
#include "HLODBuildInputReferencedAssets.h"
#include "HLODBuildInputStats.generated.h"

USTRUCT(BlueprintType)
struct FHLODBuildInputStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHLODBuildInputReferencedAssets> BuildersReferencedAssets;
    
    ENGINE_API FHLODBuildInputStats();
};

