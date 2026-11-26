#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EBMaterialResponseMapEntry.h"
#include "EBMaterialResponseMap.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable)
class UEBMaterialResponseMap : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPhysicalMaterial*, FEBMaterialResponseMapEntry> Map;
    
    UEBMaterialResponseMap();

};

