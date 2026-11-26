#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EQuestResult.h"
#include "QuestEventPayload.h"
#include "QuestText.h"
#include "QuestVariable.h"
#include "QuestUtilityLibrary.generated.h"

class AActor;
class APlayerController;
class UObject;
class UQuestComponent;
class UQuestContext;
class UQuestContextViewModel;
class UQuestListViewModel;
class UQuestObjectiveViewModel;
class UQuestTrackerComponent;
class UQuestTrackerViewModel;

UCLASS(Blueprintable)
class QUESTFRAMEWORK_API UQuestUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetQuestVariableAsInteger(UQuestContext* Context, const FQuestVariable& Variable, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuestVariableAsFloat(UQuestContext* Context, const FQuestVariable& Variable, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuestVariableAsBool(UQuestContext* Context, const FQuestVariable& Variable, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SendQuestMessage(const UObject* WorldContext, const FGameplayTag MessageTag, FQuestEventPayload Payload, AActor* Recipient, AActor* Sender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UQuestComponent* GetSharedQuestComponent(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetQuestVariableValueAsInteger(UQuestContext* Context, const FQuestVariable& Variable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetQuestVariableValueAsFloat(UQuestContext* Context, const FQuestVariable& Variable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetQuestVariableValueAsBool(UQuestContext* Context, const FQuestVariable& Variable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UQuestTrackerComponent* GetQuestTrackerComponentFromActor(AActor* Actor, bool bLookForComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UQuestComponent* GetQuestComponentFromActor(AActor* Actor, bool bLookForComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UQuestTrackerViewModel* GetPlayerQuestTrackerViewModel(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UQuestTrackerComponent* GetPlayerQuestTrackerComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UQuestListViewModel* GetPlayerQuestListViewModel(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UQuestComponent* GetPlayerQuestComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UQuestComponent* GetGameStateQuestComponent(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UQuestComponent* GetGameModeQuestComponent(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatQuestText(const FQuestText& Text, UQuestContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UQuestComponent* FindRelevantQuestComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void FilterChangedQuestContextViewModels(const TArray<UQuestContextViewModel*>& OldList, const TArray<UQuestContextViewModel*>& NewList, TArray<UQuestContextViewModel*>& OutAdded, TArray<UQuestContextViewModel*>& OutRemoved);
    
    UFUNCTION(BlueprintCallable)
    static void FilterChangedObjectiveViewModels(const TArray<UQuestObjectiveViewModel*>& OldList, const TArray<UQuestObjectiveViewModel*>& NewList, TArray<UQuestObjectiveViewModel*>& OutAdded, TArray<UQuestObjectiveViewModel*>& OutRemoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertQuestResultToText(EQuestResult InResult, FText NotStarted, FText InProgress, FText Completed, FText Failed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor ConvertQuestResultToColor(EQuestResult InResult, FLinearColor NotStarted, FLinearColor InProgress, FLinearColor Completed, FLinearColor Failed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ConvertQuestResultToBool(EQuestResult InResult, bool NotStarted, bool InProgress, bool Completed, bool Failed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BroadcastQuestMessage(const UObject* WorldContext, const FGameplayTag MessageTag, FQuestEventPayload Payload, AActor* Sender);
    
};

