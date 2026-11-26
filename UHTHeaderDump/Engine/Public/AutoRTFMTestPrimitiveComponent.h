#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "AutoRTFMTestPrimitiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAutoRTFMTestPrimitiveComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UAutoRTFMTestPrimitiveComponent(const FObjectInitializer& ObjectInitializer);

};

