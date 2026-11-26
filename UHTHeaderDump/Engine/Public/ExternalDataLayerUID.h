#pragma once
#include "CoreMinimal.h"
#include "ExternalDataLayerUID.generated.h"

USTRUCT(BlueprintType)
struct FExternalDataLayerUID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    ENGINE_API FExternalDataLayerUID();
};

