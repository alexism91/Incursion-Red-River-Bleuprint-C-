#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "InputTriggerRepeatedTap.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputTriggerRepeatedTap : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double RepeatDelay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RepeatTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTapsWhichTriggerRepeat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TapReleaseTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTapsSinceLastTrigger;
    
public:
    UInputTriggerRepeatedTap();

};

