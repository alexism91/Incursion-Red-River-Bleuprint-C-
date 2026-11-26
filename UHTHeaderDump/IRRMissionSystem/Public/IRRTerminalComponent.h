#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRObjectReplicationComponent -FallbackName=IRRObjectReplicationComponent
#include "EIRRHackDeviceState.h"
#include "IRRDoorCodeEntry.h"
#include "IRRHackDeviceStatus.h"
#include "IRRTerminalCommand.h"
#include "IRRTerminalDirectory.h"
#include "IRRTerminalUser.h"
#include "IRRTerminalComponent.generated.h"

class AActor;
class UIRRMissionEvent;
class UIRRTerminalComponent;
class UIRRTerminalConsoleWidget;
class UIRRTerminalFile;
class UIRRTerminalSequence;
class UIRRTerminalSetup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRTerminalComponent : public UIRRObjectReplicationComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserChanged, const FIRRTerminalUser&, User);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResponsesTriggered, const TArray<UIRRTerminalSequence*>&, Sequences, FText, Command);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerChanged, bool, bOn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionStarted, bool, bStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDirectoryChanged, const FString&, DirectoryPath);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRTerminalSetup* TerminalSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRTerminalConsoleWidget* TerminalConsoleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PowerOn, meta=(AllowPrivateAccess=true))
    bool bPowerOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* InteractingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* ActiveHacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRTerminalDirectory ActiveDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveDirectoryName, meta=(AllowPrivateAccess=true))
    FName ActiveDirectoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIRRTerminalUser ActiveUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FIRRDoorCodeEntry> DoorCodes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionStarted OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResponsesTriggered OnResponsesTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerChanged OnPowerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserChanged OnUserChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDirectoryChanged OnDirectoryChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HackRemainingCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRHackDeviceState LastHackInterruptReason;
    
    UIRRTerminalComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryGoBack();
    
    UFUNCTION(BlueprintCallable)
    bool TryChangeDirectory(const FString& Path, bool bForce, TArray<UIRRTerminalSequence*>& OutSequences);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerResponses_MC(const TArray<UIRRTerminalSequence*>& Sequences, const FText& Command);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerErrorResponse(const FText& Command);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TogglePowerOn_Server(bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void TogglePowerOn(bool bOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopInteraction_Server();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void StopInteraction_Client();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopHacking_Server();
    
    UFUNCTION(BlueprintCallable)
    void StopHacking();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void StartInteraction_Client(AActor* NewInteractingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartInteraction(AActor* NewInteractingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartHacking();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SimulateHackInput_MC(const FText& Input);
    
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetUser_MC(FIRRTerminalUser NewUser);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUser(FIRRTerminalUser NewUser);
    
    UFUNCTION(BlueprintCallable)
    void SetupHacking();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetDirectoryPath_MC(FName NewDirectoryName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDirectoryPath(FIRRTerminalDirectory NewDirectory);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RequestSetDirectoryPath(const FString& Path, bool bForce);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RequestLogin(const FString& Name, const FString& Password);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RefreshDoorCodes();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ProcessCommand_Server(const FText& Input, FIRRTerminalCommand TempCommand);
    
    UFUNCTION(BlueprintCallable)
    void ProcessCommand(const FText& Input, FIRRTerminalCommand TempCommand);
    
    UFUNCTION(BlueprintCallable)
    void PredictCommand(const FText& Input, FIRRTerminalCommand TempCommand);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveDirectoryName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Shutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidLogin(const FString& Name, const FString& Password) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDirectoryPath(const FString& Path) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRootDirectory(const FIRRTerminalDirectory& Directory) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLocallyControlled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDirectoryVisible(const UIRRTerminalComponent* Terminal, FIRRTerminalDirectory Directory);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDirectoryAccessible(const UIRRTerminalComponent* Terminal, FIRRTerminalDirectory Directory);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HackInterrupted_MC(EIRRHackDeviceState reason);
    
    UFUNCTION(BlueprintCallable)
    FIRRTerminalUser GetUserByName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void GetSplitCommand(FText Command, FString& LPart, FString& RPart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRTerminalDirectory GetRootDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPrintableDirectoryPath(FIRRTerminalDirectory Directory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParentDirectory(const FIRRTerminalDirectory& Directory, FIRRTerminalDirectory& OutParent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRHackDeviceStatus GetHackDeviceStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFullDirectoryPath() const;
    
    UFUNCTION(BlueprintCallable)
    FIRRTerminalDirectory GetDirectoryByName(FName DirectoryName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRTerminalDirectory> GetChildDirectories(const FIRRTerminalDirectory& Directory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRTerminalUser GetActiveUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActiveOperator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRTerminalDirectory GetActiveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRTerminalFile* FindFileInActiveDirectory(const FString& Filename) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExecuteMissionEvent(UIRRMissionEvent* MissionEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckDirectoryAccess(const UIRRTerminalComponent* Terminal, const FIRRTerminalDirectory& Directory, TArray<UIRRTerminalSequence*>& OutSequences);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartHacking() const;
    
    UFUNCTION(BlueprintCallable)
    FString BuildFullDirectoryPath(const FIRRTerminalDirectory& Directory) const;
    
};

