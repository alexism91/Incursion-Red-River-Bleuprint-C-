#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "KronosPartyPlayerActor.generated.h"

class AKronosPartyPlayerStart;
class AKronosPartyPlayerState;
class UCapsuleComponent;
class UKronosPartyPlayerWidget;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class KRONOS_API AKronosPartyPlayerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKronosPartyPlayerWidget> PlayerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlayerWidgetDrawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerWidgetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateForLocalPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosPartyPlayerStart* OwnedPlayerStart;
    
public:
    AKronosPartyPlayerActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerActorInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasInitialReplicationFinished() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetComponent* GetWidgetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKronosPartyPlayerWidget* GetPlayerWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyPlayerState* GetOwningPartyPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyPlayerStart* GetOwnedPlayerStart() const;
    
};

