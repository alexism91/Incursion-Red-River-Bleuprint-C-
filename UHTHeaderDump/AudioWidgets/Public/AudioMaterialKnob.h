#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "AudioMaterialKnobStyle.h"
#include "OnKnobValueChangedEventDelegate.h"
#include "AudioMaterialKnob.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioMaterialKnob : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMaterialKnobStyle WidgetStyle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKnobValueChangedEvent OnKnobValueChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TuneSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FineTuneSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseUsesStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSize;
    
public:
    UAudioMaterialKnob();

    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTuneSpeed(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseUsesStep(bool InUsesStep);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetFineTuneSpeed(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTuneSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStepSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseUsesStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFineTuneSpeed() const;
    
};

