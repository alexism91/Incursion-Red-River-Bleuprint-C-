#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "WidgetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateProgress(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyWidget();
    
};

