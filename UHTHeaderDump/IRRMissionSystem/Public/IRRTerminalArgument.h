#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRTerminalArgumentResult.h"
#include "IRRTerminalArgument.generated.h"

class UIRRTerminalComponent;
class UIRRTerminalSequence;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTerminalArgument : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPredictable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalSequence*> OnSuccessSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalSequence*> OnFailureSequences;
    
    UIRRTerminalArgument();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FIRRTerminalArgumentResult ExecuteArgument(UIRRTerminalComponent* Terminal, const FString& Payload);
    
};

