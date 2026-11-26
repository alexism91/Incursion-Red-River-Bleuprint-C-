#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGAttributeGetFromIndexSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGAttributeGetFromIndexSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPCGAttributeGetFromIndexSettings();

};

