#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRObjectReplicationComponent -FallbackName=IRRObjectReplicationComponent
#include "AvailableOperationsUpdatedDelegate.h"
#include "IRRMissionWorldBinding.h"
#include "MissionLeaderComponentUpdatedDelegate.h"
#include "IRRMissionManager.generated.h"

class IIRRMissionEventInterface;
class UIRRMissionEventInterface;
class UIRRMissionComponent;
class UIRRMissionData;
class UIRRMissionSetup;
class UIRRSpawnData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRMissionManager : public UIRRObjectReplicationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionComponent*> MissionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMissionComponent* LeaderMissionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionData*> OperationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AvailableOperations, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionData*> AvailableOperations;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailableOperationsUpdated OnAvailableOperationsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRSpawnData*> SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IIRRMissionEventInterface>> WorldEventListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IIRRMissionEventInterface>> MissionEventListeners;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionLeaderComponentUpdated OnMissionLeaderComponentUpdated;
    
    UIRRMissionManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnRegisterWorldEventListener(TScriptInterface<IIRRMissionEventInterface> Listener);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnRegisterMissionEventListener(TScriptInterface<IIRRMissionEventInterface> Listener);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UnRegisterMissionComponent(UIRRMissionComponent* IRRMissionComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UIRRMissionData* StartAvailableOperation(UIRRMissionData* Operation, UIRRMissionComponent* ForComponent, bool bShared);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveAvailableOperation(UIRRMissionData* Operation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterWorldEventListener(TScriptInterface<IIRRMissionEventInterface> Listener);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterMissionEventListener(TScriptInterface<IIRRMissionEventInterface> Listener);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RegisterMissionComponent(UIRRMissionComponent* IRRMissionComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ProcessMissionSpawnData(UIRRMissionData* InMissionData, UIRRSpawnData* InSpawnData, const FIRRMissionWorldBinding& Binding);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AvailableOperations();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void InitSpawnData(UIRRMissionData* InMissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMissionData* FindAvailableOperationByUID(FGuid OperationUID) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UIRRMissionData* AddAvailableOperation(UIRRMissionSetup* MissionSetup);
    
};

