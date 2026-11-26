#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=SenseReceiverComponent -FallbackName=SenseReceiverComponent
#include "IRRSightSenseReceiver.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRSightSenseReceiver : public USenseReceiverComponent {
    GENERATED_BODY()
public:
    UIRRSightSenseReceiver(const FObjectInitializer& ObjectInitializer);

};

