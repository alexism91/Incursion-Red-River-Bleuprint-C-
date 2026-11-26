#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "AudioMaterialButtonStyle.h"
#include "OnButtonPressedChangedEventDelegate.h"
#include "AudioMaterialButton.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioMaterialButton : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMaterialButtonStyle WidgetStyle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonPressedChangedEvent OnButtonPressedChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPressed;
    
public:
    UAudioMaterialButton();

    UFUNCTION(BlueprintCallable)
    void SetIsPressed(bool InPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPressed() const;
    
};

