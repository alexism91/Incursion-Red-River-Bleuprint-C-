#pragma once
#include "CoreMinimal.h"
#include "EPCGGetExecutionContextMode.h"
#include "PCGSettings.h"
#include "PCGGetExecutionContextSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetExecutionContextSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGGetExecutionContextMode Mode;
    
    UPCGGetExecutionContextSettings();

};

