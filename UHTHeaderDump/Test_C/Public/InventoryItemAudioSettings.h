#pragma once
#include "CoreMinimal.h"
#include "InventoryItemAudioSettings.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FInventoryItemAudioSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopSound;
    
    TEST_C_API FInventoryItemAudioSettings();
};

