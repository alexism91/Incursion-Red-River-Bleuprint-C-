#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGWaitSettings.generated.h"

UCLASS(Blueprintable)
class UPCGWaitSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WaitTimeInSeconds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 WaitTimeInEngineFrames;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 WaitTimeInRenderFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndWaitWhenAllConditionsAreMet;
    
    UPCGWaitSettings();

};

