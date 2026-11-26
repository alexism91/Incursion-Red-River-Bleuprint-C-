#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WwiseAssetLibraryFilter.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class WWISEPACKAGINGRUNTIME_API UWwiseAssetLibraryFilter : public UObject {
    GENERATED_BODY()
public:
    UWwiseAssetLibraryFilter();

};

