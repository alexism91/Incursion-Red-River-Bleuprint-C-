#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGWorldVolumetricQueryParams.h"
#include "PCGWorldQuerySettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGWorldQuerySettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGWorldVolumetricQueryParams QueryParams;
    
    UPCGWorldQuerySettings();

};

