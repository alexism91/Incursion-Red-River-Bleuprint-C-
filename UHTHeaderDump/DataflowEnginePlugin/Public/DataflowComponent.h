#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "DataflowComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDataflowComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDataflowComponent(const FObjectInitializer& ObjectInitializer);

};

