#pragma once
#include "CoreMinimal.h"
#include "IRRTerminalSequence.h"
#include "IRRTerminalSequence_HackStatus.generated.h"

class UIRRTerminalComponent;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTerminalSequence_HackStatus : public UIRRTerminalSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInterruptReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReadyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoDeviceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DepletedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoDeviceRequiredText;
    
    UIRRTerminalSequence_HackStatus();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStatusText(const UIRRTerminalComponent* Terminal) const;
    
};

