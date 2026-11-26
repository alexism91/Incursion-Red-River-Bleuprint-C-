#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "IRRBehaviorMapDefinition.h"
#include "IRRBotTypeDefinition.h"
#include "IRRBotTypesChangedDelegate.h"
#include "IRRLoadoutDefinition.h"
#include "IRRStatBaselineDefinition.h"
#include "IRRBotTypeRegistry.generated.h"

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRBotTypeRegistry : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBotTypesChanged OnBotTypesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRBotTypeDefinition> BotTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRLoadoutDefinition> Loadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRBehaviorMapDefinition> BehaviorMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRStatBaselineDefinition> StatBaselines;
    
public:
    UIRRBotTypeRegistry();

    UFUNCTION(BlueprintCallable)
    void ScanFolders();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadoutRegistered(FName LoadoutId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBotTypeRegistered(FName BotTypeId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStatBaseline(FName StatBaselineId, FIRRStatBaselineDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoadout(FName LoadoutId, FIRRLoadoutDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBotTypeResolved(FName BotTypeId, FIRRBotTypeDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetBotTypeIdOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBotType(FName BotTypeId, FIRRBotTypeDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBehaviorMap(FName BehaviorMapId, FIRRBehaviorMapDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllBotTypeIds() const;
    
};

