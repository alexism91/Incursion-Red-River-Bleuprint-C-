#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
#include "PCGGraphInterface.h"
#include "PCGOverrideInstancedPropertyBag.h"
#include "PCGGraphInstance.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGraphInstance : public UPCGGraphInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGGraphInterface* Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGOverrideInstancedPropertyBag ParametersOverrides;
    
    UPCGGraphInstance();

    UFUNCTION(BlueprintCallable)
    bool GraphAssetFilter(const FAssetData& AssetData) const;
    
};

