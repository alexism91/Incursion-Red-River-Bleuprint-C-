#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "IRRMissionWorldBinding.h"
#include "IRRMissionSpawnInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UIRRMissionSpawnInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRMissionSpawnInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* SpawnMissionActorByUID(AActor* Owner, FGuid MissionUID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* InitMissionActor(AActor* Owner, const FIRRMissionWorldBinding& Binding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EvaluateMissionActor();
    
};

