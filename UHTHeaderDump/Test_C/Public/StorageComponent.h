#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "StorageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UStorageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UStorageComponent(const FObjectInitializer& ObjectInitializer);

};

