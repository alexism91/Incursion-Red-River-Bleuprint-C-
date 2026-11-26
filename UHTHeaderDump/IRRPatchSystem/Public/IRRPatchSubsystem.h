#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "IRRBuildVersion.h"
#include "IRRNewsItem.h"
#include "IRROnNewsDataReadyDelegate.h"
#include "IRROnPatchCheckCompleteDelegate.h"
#include "IRROnPatchDataReadyDelegate.h"
#include "IRRPatchData.h"
#include "IRRPatchNoteDisplay.h"
#include "IRRPatchSubsystem.generated.h"

UCLASS(Blueprintable)
class IRRPATCHSYSTEM_API UIRRPatchSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnPatchDataReady OnPatchDataReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnPatchCheckComplete OnPatchCheckComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnNewsDataReady OnNewsDataReady;
    
    UIRRPatchSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPatchNotes() const;
    
    UFUNCTION(BlueprintCallable)
    void RequestPatchData();
    
    UFUNCTION(BlueprintCallable)
    void RequestNewsData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText PatchNotesToRichText(const FString& PatchNotes, const FString& HeaderStyleRow, const FString& BoldStyleRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIRRBuildVersion ParseBuildVersion(const FString& BuildString);
    
    UFUNCTION(BlueprintCallable)
    void MarkPatchNotesSeen();
    
    UFUNCTION(BlueprintCallable)
    void MarkNewsImported(const TArray<FString>& NewsIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdateCheckComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameOutdated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingResets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPatchData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNewsData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyResetFlag(const FIRRPatchData& Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRPatchData> GetUnseenPatches() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRNewsItem> GetUnimportedNews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRPatchData GetPendingResetFlags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRPatchNoteDisplay> GetPatchNotesToShow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLatestPatch(FIRRPatchData& OutPatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLatestMajorPatch(FIRRPatchData& OutPatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastSeenBuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentBuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRPatchData> GetAllPatches(bool bMajorOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRNewsItem> GetAllNews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText BuildResetSummary(const FIRRPatchData& Flags);
    
    UFUNCTION(BlueprintCallable)
    void ApplyResetFlags(const FIRRPatchData& Flags);
    
};

