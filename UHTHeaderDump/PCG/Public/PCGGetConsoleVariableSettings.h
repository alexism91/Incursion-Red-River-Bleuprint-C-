#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGGetConsoleVariableSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetConsoleVariableSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConsoleVariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputAttributeName;
    
    UPCGGetConsoleVariableSettings();

};

