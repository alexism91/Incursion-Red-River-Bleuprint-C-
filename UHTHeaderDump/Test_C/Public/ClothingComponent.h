#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ClothingSlot.h"
#include "ClothingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UClothingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothingSlot> ClothingSlots;
    
    UClothingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void UpdateClothingTint(FColor NewTint);
    
    UFUNCTION(BlueprintCallable)
    void SwitchPerspective(bool bFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderCustomDepth(bool bCustomRenderDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenInGame(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetCastShadow(bool bCastShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimBudgetSignificantLevel(float SignificantLevel, bool bNeverSkip);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ChangeClothingSlot(FClothingSlot ClothingSlot);
    
};

