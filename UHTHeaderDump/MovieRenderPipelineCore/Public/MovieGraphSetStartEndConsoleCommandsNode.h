#pragma once
#include "CoreMinimal.h"
#include "MovieGraphSettingNode.h"
#include "MovieGraphSetStartEndConsoleCommandsNode.generated.h"

class UMovieGraphStartEndConsoleCommands;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphSetStartEndConsoleCommandsNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ConsoleCommands: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieGraphStartEndConsoleCommands* ConsoleCommands;
    
    UMovieGraphSetStartEndConsoleCommandsNode();

};

