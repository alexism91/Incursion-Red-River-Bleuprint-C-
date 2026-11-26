#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRTerminalDirectory.generated.h"

class UIRRTerminalDirectoryRequirement;
class UIRRTerminalFile;

USTRUCT(BlueprintType)
struct FIRRTerminalDirectory : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotherDirectoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DirectoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalDirectoryRequirement*> Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalFile*> Files;
    
    IRRMISSIONSYSTEM_API FIRRTerminalDirectory();
};

