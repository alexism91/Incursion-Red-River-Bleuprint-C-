#pragma once
#include "CoreMinimal.h"
#include "MovieGraphSettingNode.h"
#include "MovieGraphApplyCVarPresetNode.generated.h"

class IMovieSceneConsoleVariableTrackInterface;
class UMovieSceneConsoleVariableTrackInterface;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphApplyCVarPresetNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ConsoleVariablePreset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMovieSceneConsoleVariableTrackInterface> ConsoleVariablePreset;
    
    UMovieGraphApplyCVarPresetNode();

};

