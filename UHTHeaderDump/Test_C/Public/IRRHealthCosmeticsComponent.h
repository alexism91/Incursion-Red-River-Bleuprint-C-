#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "IRRHealthCosmeticsComponent.generated.h"

class AController;
class APawn;
class UGameplayTagsComponent;
class UIRRHealthCosmetic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRHealthCosmeticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRHealthCosmetic*> Cosmetics;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGameplayTagsComponent* TagsComponent;
    
public:
    UIRRHealthCosmeticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshCosmetics();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTagsUpdated(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    void HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
};

