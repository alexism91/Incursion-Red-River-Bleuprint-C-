#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WwiseFilterableAssetLibrary.generated.h"

UCLASS(Abstract, Blueprintable)
class WWISEPACKAGINGRUNTIME_API UWwiseFilterableAssetLibrary : public UObject {
    GENERATED_BODY()
public:
    UWwiseFilterableAssetLibrary();

};

