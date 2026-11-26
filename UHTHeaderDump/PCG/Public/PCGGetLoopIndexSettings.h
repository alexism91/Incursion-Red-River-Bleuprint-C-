#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGGetLoopIndexSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetLoopIndexSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnIfCalledOutsideOfLoop;
    
    UPCGGetLoopIndexSettings();

};

