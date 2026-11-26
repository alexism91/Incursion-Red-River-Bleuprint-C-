#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "AudioMaterialSliderStyle.h"
#include "OnSliderFloatValueChangedEventDelegate.h"
#include "AudioMaterialSlider.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioMaterialSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMaterialSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSliderFloatValueChangedEvent OnValueChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
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
    UAudioMaterialSlider();

    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTuneSpeed(const float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseUsesStep(bool bInUsesStep);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bInLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetFineTuneSpeed(const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
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

