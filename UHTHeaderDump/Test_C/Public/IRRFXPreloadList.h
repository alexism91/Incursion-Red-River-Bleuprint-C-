#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "IRRFXPreloadEntry.h"
#include "IRRFXPreloadMaterialEntry.h"
#include "IRRFXPreloadList.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRFXPreloadList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRFXPreloadEntry> Systems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRFXPreloadMaterialEntry> Materials;
    
    UIRRFXPreloadList();

};

