#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "ContainerItem.h"
#include "ItemAction.generated.h"

class AActor;
class USimpleGameplayEffect;
class UUserWidget;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UItemAction : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForwardToPickupActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EffectStatTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleGameplayEffect* CustomEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropWhenUsedUp;
    
    UItemAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(AActor* Owner, UUserWidget* ItemRef, FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStart(AActor* Owner, UUserWidget* ItemRef, FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable)
    bool CanApplyAnyEffect(AActor* Owner, FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable)
    int32 ApplyEffects(AActor* Owner, FContainerItem ContainerItem);
    
};

