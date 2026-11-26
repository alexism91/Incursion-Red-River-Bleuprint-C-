#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRTerminalDirectoryRequirement.generated.h"

class UIRRTerminalComponent;
class UIRRTerminalSequence;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTerminalDirectoryRequirement : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalSequence*> OnSuccessSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalSequence*> OnFailureSequences;
    
    UIRRTerminalDirectoryRequirement();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsVisible(const UIRRTerminalComponent* Terminal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAccessible(const UIRRTerminalComponent* Terminal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAccessCommands(const UIRRTerminalComponent* Terminal, TArray<FText>& OutCommands);
    
};

