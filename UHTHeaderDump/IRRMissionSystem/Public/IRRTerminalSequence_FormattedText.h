#pragma once
#include "CoreMinimal.h"
#include "IRRTerminalSequence.h"
#include "IRRTerminalSequence_FormattedText.generated.h"

class UIRRTerminalComponent;
class UIRRTerminalTextSource;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTerminalSequence_FormattedText : public UIRRTerminalSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalTextSource*> Sources;
    
    UIRRTerminalSequence_FormattedText();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedText(const UIRRTerminalComponent* Terminal) const;
    
};

