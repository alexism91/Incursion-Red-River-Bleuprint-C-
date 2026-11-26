#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "OceanBoxCollisionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOceanBoxCollisionComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UOceanBoxCollisionComponent(const FObjectInitializer& ObjectInitializer);

};

