#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateStream -ObjectName=TransformHandle -FallbackName=TransformHandle
#include "SkinnedMeshDynamicState.generated.h"

class UMaterialInterface;
class USkinnedAsset;

USTRUCT(BlueprintType)
struct FSkinnedMeshDynamicState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransformHandle Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinnedAsset* SkinnedAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
public:
    ENGINE_API FSkinnedMeshDynamicState();
};

