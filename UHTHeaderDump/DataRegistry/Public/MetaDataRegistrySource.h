#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManagerSearchRules -FallbackName=AssetManagerSearchRules
#include "DataRegistrySource.h"
#include "EMetaDataRegistrySourceAssetUsage.h"
#include "MetaDataRegistrySource.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UMetaDataRegistrySource : public UDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaDataRegistrySourceAssetUsage AssetUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssetManagerSearchRules SearchRules;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataRegistrySource*> RuntimeChildren;
    
public:
    UMetaDataRegistrySource();

};

