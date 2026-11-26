#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneHookSection -FallbackName=MovieSceneHookSection
#include "MovieSceneGameplayCueChannel.h"
#include "MovieSceneGameplayCueTriggerSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneGameplayCueChannel Channel;
    
public:
    UMovieSceneGameplayCueTriggerSection();

};

