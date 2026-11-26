#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Kronos -ObjectName=KronosLobbyPlayerControllerBase -FallbackName=KronosLobbyPlayerControllerBase
#include "EIRRSpawnMenuAction.h"
#include "IRRFireSupportSalvo.h"
#include "OnDesignationCompromiseAppliedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IRRPlayerController.generated.h"

class AActor;
class APawn;
class ARaidTrader;
class ARaidTraderSession;
class ASecureContainer;
class ASecureContainerSession;
class UIRRGroundHoldComponent;
class UIRRPlayerDangerComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRPlayerController : public AKronosLobbyPlayerControllerBase, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnViewTargetChanged, const AActor*, NewViewTarget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> CinematicCameraPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCinematicCameraEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnViewTargetChanged OnViewTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRPlayerDangerComponent* DangerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRGroundHoldComponent* GroundHoldComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDesignationCompromiseApplied OnDesignationCompromiseApplied;
    
    AIRRPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TogglePlayerInput(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerHidden(bool bHidePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCustomViewTarget(AActor* NewViewTarget, float BlendTime, float BlendOut);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetCinematicCamera();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnMenuRequest(FName ProviderName, FName EntryId, EIRRSpawnMenuAction Action, int32 Count, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOpenSecureContainer(ASecureContainer* Container, FName ContentName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOpenRaidTrader(ARaidTrader* Trader, FName ContentName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyLoadedWorldWorkaround(FName WorldPackageName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestAirstrike(FIRRFireSupportSalvo Salvo, AActor* TargetActor, FVector AimPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReportDesignationCompromised(FVector OperatorLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematicCameraEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASecureContainerSession* GetSecureContainerSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARaidTraderSession* GetRaidTraderSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetCachedPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetCachedCinematicCameraPawn() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishCustomViewTarget(AActor* NewViewTarget, bool bHidePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyDesignationCompromise(FVector OperatorLocation);
    

    // Fix for true pure virtual functions not being implemented
};

