#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "IRRShowcaseSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRShowcaseSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIRRShowcaseSubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetShowcaseProfile(bool bEnable, FString& OutMessage);
    
    UFUNCTION(BlueprintCallable)
    bool ResetShowcase(FString& OutMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowcaseProfileActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool CaptureTemplate(FString& OutMessage);
    
};

