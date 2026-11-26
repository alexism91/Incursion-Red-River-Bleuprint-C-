#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EIRRAllegianceAttitude.h"
#include "IRRAllegianceAppearance.h"
#include "IRRAllegianceDefinition.h"
#include "IRRAllegianceStyle.h"
#include "IRRAllegianceVoice.h"
#include "IRRAllegiancesChangedDelegate.h"
#include "IRRAllegianceRegistry.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRAllegianceRegistry : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAllegiancesChanged OnAllegiancesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerAllegianceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRAllegianceDefinition> Allegiances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRAllegianceStyle> AllegianceStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRAllegianceAppearance> AllegianceAppearances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRAllegianceVoice> AllegianceVoices;
    
public:
    UIRRAllegianceRegistry();

    UFUNCTION(BlueprintCallable)
    bool UnregisterAllegiance(FName AllegianceId);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerAllegianceId(FName InPlayerAllegianceId);
    
    UFUNCTION(BlueprintCallable)
    void ScanAllegianceFolders();
    
    UFUNCTION(BlueprintCallable)
    void RegisterAllegianceSearchPath(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterAllegiance(const FIRRAllegianceDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllegianceRegistered(FName AllegianceId) const;
    
    UFUNCTION(BlueprintCallable)
    bool ImportAllegianceFromFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayerAllegianceId() const;
    
    UFUNCTION(BlueprintCallable)
    FGenericTeamId GetOrAssignTeamId(FName AllegianceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMissionFaction(FName AllegianceId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRAllegianceAttitude GetAttitude(FName A, FName B) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllegianceVoice(FName AllegianceId, FIRRAllegianceVoice& OutVoice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllegianceStyle(FName AllegianceId, FIRRAllegianceStyle& OutStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAllegianceForTeamId(FGenericTeamId TeamId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAllegianceForMissionFaction(FGameplayTag MissionFaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAllegianceFolder(FName AllegianceId, bool bLocal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllegianceDefinition(FName AllegianceId, FIRRAllegianceDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllegianceAppearance(FName AllegianceId, FIRRAllegianceAppearance& OutAppearance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllAllegianceIds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExportAllegianceToFile(FName AllegianceId, bool bLocal) const;
    
};

