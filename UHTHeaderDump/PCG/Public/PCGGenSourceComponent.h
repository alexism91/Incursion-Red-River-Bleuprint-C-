#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PCGGenSourceBase.h"
#include "PCGGenSourceComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPCGGenSourceComponent : public UActorComponent, public IPCGGenSourceBase {
    GENERATED_BODY()
public:
    UPCGGenSourceComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

