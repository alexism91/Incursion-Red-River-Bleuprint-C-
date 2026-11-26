#pragma once
#include "CoreMinimal.h"
#include "IRRTerminalArgumentResult.generated.h"

class UIRRTerminalSequence;

USTRUCT(BlueprintType)
struct IRRMISSIONSYSTEM_API FIRRTerminalArgumentResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalSequence*> Sequences;
    
    FIRRTerminalArgumentResult();
};

