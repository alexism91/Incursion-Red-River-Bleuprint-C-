#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "IRROnRaidTimerExpiredDelegate.h"
#include "IRRRaidTimerSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRRaidTimerSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnRaidTimerExpired OnRaidTimerExpired;
    
    UIRRRaidTimerSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRaidTimerRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingSeconds() const;
    
};

