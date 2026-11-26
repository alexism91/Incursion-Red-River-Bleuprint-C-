#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Kronos -ObjectName=OnKronosNameplateCreated__DelegateSignature -FallbackName=OnKronosNameplateCreatedDelegate
#include "Templates/SubclassOf.h"
#include "IRRInRaidNameplateComponent.generated.h"

class UUserWidget;
class UWidgetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRInRaidNameplateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> NameplateWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NameplateDrawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NameplateOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosNameplateCreated OnNameplateCreated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
public:
    UIRRInRaidNameplateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleNameplate(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNameplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetComponent* GetWidgetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetNameplateWidget() const;
    
};

