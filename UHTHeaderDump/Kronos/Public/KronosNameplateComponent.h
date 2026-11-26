#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnKronosNameplateCreatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "KronosNameplateComponent.generated.h"

class UUserWidget;
class UWidgetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KRONOS_API UKronosNameplateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> NameplateWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NameplateDrawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NameplateOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateForLocalPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosNameplateCreated OnNameplateCreatedEvent;
    
public:
    UKronosNameplateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNameplateOffset(FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplateDrawSize(FVector2D InDrawSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNameplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetComponent* GetWidgetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetNameplateWidget() const;
    
};

