#pragma once
#include "CoreMinimal.h"
#include "DataLayerAsset.h"
#include "ExternalDataLayerUID.h"
#include "ExternalDataLayerAsset.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UExternalDataLayerAsset : public UDataLayerAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExternalDataLayerUID UID;
    
public:
    UExternalDataLayerAsset();

};

