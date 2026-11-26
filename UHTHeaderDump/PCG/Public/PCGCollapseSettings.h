#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGCollapseSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGCollapseSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassThroughEmptyAttributeSets;
    
    UPCGCollapseSettings();

};

