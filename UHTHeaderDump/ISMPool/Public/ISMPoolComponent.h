#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ISMPoolComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UISMPoolComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UISMPoolComponent(const FObjectInitializer& ObjectInitializer);

};

