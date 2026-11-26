#pragma once
#include "CoreMinimal.h"
#include "PCGSelfPruningParameters.h"
#include "PCGSettings.h"
#include "PCGSelfPruningSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGSelfPruningSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGSelfPruningParameters Parameters;
    
    UPCGSelfPruningSettings();

};

