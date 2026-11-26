#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRTerminalResponse.generated.h"

class UIRRTerminalResponseCondition;
class UIRRTerminalSequence;

USTRUCT(BlueprintType)
struct FIRRTerminalResponse : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalResponseCondition*> Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalSequence*> Sequences;
    
    IRRMISSIONSYSTEM_API FIRRTerminalResponse();
};

