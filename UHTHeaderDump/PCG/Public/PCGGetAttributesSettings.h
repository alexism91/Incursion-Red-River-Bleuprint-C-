#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGGetAttributesSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetAttributesSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetDefaultValue;
    
    UPCGGetAttributesSettings();

};

