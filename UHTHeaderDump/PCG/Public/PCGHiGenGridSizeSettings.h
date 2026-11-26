#pragma once
#include "CoreMinimal.h"
#include "EPCGHiGenGrid.h"
#include "PCGSettings.h"
#include "PCGHiGenGridSizeSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGHiGenGridSizeSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGHiGenGrid HiGenGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInputPin;
    
    UPCGHiGenGridSizeSettings();

};

