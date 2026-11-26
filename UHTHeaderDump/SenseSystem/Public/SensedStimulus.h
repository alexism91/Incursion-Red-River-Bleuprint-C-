#pragma once
#include "CoreMinimal.h"
#include "SensedPoint.h"
#include "SensedStimulus.generated.h"

class USenseStimulusBase;

USTRUCT(BlueprintType)
struct SENSESYSTEM_API FSensedStimulus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USenseStimulusBase> StimulusComponent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 TmpHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Age;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SensedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FirstSensedTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 BitChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSensedPoint> SensedPoints;
    
    FSensedStimulus();
};

