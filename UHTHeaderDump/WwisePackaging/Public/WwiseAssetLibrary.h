#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwisePackagingRuntime -ObjectName=WwiseFilterableAssetLibrary -FallbackName=WwiseFilterableAssetLibrary
#include "WwiseAssetLibrary.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWISEPACKAGING_API UWwiseAssetLibrary : public UWwiseFilterableAssetLibrary {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLoad;
    
    UWwiseAssetLibrary();

    UFUNCTION(BlueprintCallable)
    void UnloadData(bool bAsync);
    
    UFUNCTION(BlueprintCallable)
    void LoadData();
    
};

