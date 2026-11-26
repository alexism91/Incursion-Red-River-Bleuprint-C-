#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "IRRMissionBriefing.h"
#include "IRRMissionBriefingControlWidget.generated.h"

class AActor;
class UIRRAgentSetup;
class UIRRBaseButtonWidget;
class UProgressBar;
class USlider;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionBriefingControlWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* PB_ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* ProgressSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* Play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* Stop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DurationFormat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIRRMissionBriefing LoadedBriefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIRRAgentSetup* LoadedAgent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIRRMissionBriefing StartedBriefing;
    
public:
    UIRRMissionBriefingControlWidget();

    UFUNCTION(BlueprintCallable)
    void TogglePlayPause();
    
    UFUNCTION(BlueprintCallable)
    void StopBriefing();
    
    UFUNCTION(BlueprintCallable)
    void SeekBriefing(float Progress);
    
    UFUNCTION(BlueprintCallable)
    void PlayBriefing();
    
    UFUNCTION(BlueprintCallable)
    void PauseBriefing();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlaybackStateChanged(bool bPlaying, bool bPaused);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedBriefingPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedBriefingActive() const;
    
    UFUNCTION(BlueprintCallable)
    void InitMissionBriefingControl(const FIRRMissionBriefing& BriefingData, UIRRAgentSetup* Agent, AActor* SourceActor, bool bAutoPlay);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStopClicked(UIRRBaseButtonWidget* ButtonRef);
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderValueChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderCaptureEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderCaptureBegin();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayClicked(UIRRBaseButtonWidget* ButtonRef);
    
    UFUNCTION(BlueprintCallable)
    void HandleBriefingStarted(FIRRMissionBriefing BriefingData);
    
    UFUNCTION(BlueprintCallable)
    void HandleBriefingFinished(FIRRMissionBriefing BriefingData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoadedBriefingPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoadedBriefingDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRMissionBriefing GetLoadedBriefing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatBriefingTime(float Seconds);
    
};

