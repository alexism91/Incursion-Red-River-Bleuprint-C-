#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
#include "PCGBaseSubgraphSettings.h"
#include "PCGSubgraphSettings.generated.h"

class UPCGGraphInstance;
class UPCGGraphInterface;

UCLASS(Blueprintable, MinimalAPI)
class UPCGSubgraphSettings : public UPCGBaseSubgraphSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGGraphInstance* SubgraphInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGGraphInterface* SubgraphOverride;
    
    UPCGSubgraphSettings();

    UFUNCTION(BlueprintCallable)
    bool SubgraphAssetFilter(const FAssetData& AssetData) const;
    
};

