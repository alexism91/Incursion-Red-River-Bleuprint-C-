#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESlatePostRT -FallbackName=ESlatePostRT
#include "SlatePostSettings.h"
#include "SlateRHIRendererSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Game)
class USlateRHIRendererSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESlatePostRT, FSlatePostSettings> SlatePostSettings;
    
public:
    USlateRHIRendererSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlatePostSettings GetSlatePostSetting(ESlatePostRT InPostBufferBit) const;
    
    UFUNCTION(BlueprintCallable)
    FSlatePostSettings GetMutableSlatePostSetting(ESlatePostRT InPostBufferBit);
    
};

