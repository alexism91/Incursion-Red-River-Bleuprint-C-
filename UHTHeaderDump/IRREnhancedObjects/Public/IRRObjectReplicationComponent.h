#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRObjectReplicationComponent.generated.h"

class UIRRReplicatedObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRENHANCEDOBJECTS_API UIRRObjectReplicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRReplicatedObject*> ReplicatedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UIRRReplicatedObject*> OneShotObjects;
    
public:
    UIRRObjectReplicationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UnregisterReplicatedObject(UIRRReplicatedObject* ObjectToUnregister, bool bDestroyObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RegisterReplicatedObject(UIRRReplicatedObject* ObjectToRegister);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RegisterOneShotObject(UIRRReplicatedObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRReplicatedObject*> GetRegisteredReplicatedObjects();
    
};

