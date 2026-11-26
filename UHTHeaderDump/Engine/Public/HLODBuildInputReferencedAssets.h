#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=TopLevelAssetPath -FallbackName=TopLevelAssetPath
#include "HLODBuildInputReferencedAssets.generated.h"

USTRUCT(BlueprintType)
struct FHLODBuildInputReferencedAssets {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FTopLevelAssetPath, uint32> StaticMeshes;
    
    ENGINE_API FHLODBuildInputReferencedAssets();
};

