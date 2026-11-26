#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClothAssetSkeletalMeshConverter.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UClothAssetSkeletalMeshConverter : public UObject {
    GENERATED_BODY()
public:
    UClothAssetSkeletalMeshConverter();

};

