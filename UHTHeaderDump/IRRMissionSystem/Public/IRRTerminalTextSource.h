#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRTerminalTextSource.generated.h"

class UIRRTerminalComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTerminalTextSource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UIRRTerminalTextSource();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetText(const UIRRTerminalComponent* Terminal) const;
    
};

