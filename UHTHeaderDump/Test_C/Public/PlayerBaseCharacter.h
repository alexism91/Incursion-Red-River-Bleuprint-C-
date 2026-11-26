#pragma once
#include "CoreMinimal.h"
#include "AbilitiesInterface.h"
#include "IRRBaseCharacter.h"
#include "InventoryInterface.h"
#include "PlayerInterface.h"
#include "PlayerBaseCharacter.generated.h"

class ULXRDetectionComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API APlayerBaseCharacter : public AIRRBaseCharacter, public IInventoryInterface, public IAbilitiesInterface, public IPlayerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 SpawnIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRDetectionComponent* LightDetectionComponent;
    
public:
    APlayerBaseCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_OnWindowCloseRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULXRDetectionComponent* GetLightDetectionComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

