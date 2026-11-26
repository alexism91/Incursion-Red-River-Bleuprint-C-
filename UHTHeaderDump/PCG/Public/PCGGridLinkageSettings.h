#pragma once
#include "CoreMinimal.h"
#include "EPCGHiGenGrid.h"
#include "PCGSettings.h"
#include "PCGGridLinkageSettings.generated.h"

class UPCGPin;

UCLASS(Blueprintable)
class UPCGGridLinkageSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGHiGenGrid FromGrid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGHiGenGrid ToGrid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGHiGenGrid GenerationGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPCGPin> UpstreamPin;
    
    UPCGGridLinkageSettings();

};

