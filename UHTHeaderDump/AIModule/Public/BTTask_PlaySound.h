#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "ValueOrBBKey_Object.h"
#include "BTTask_PlaySound.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_PlaySound : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Object SoundToPlay;
    
    UBTTask_PlaySound();

};

