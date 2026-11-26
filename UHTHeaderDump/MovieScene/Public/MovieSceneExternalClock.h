#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MovieSceneClock.h"
#include "MovieSceneExternalClock.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneExternalClock : public UMovieSceneClock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CustomClockSourcePath;
    
    UMovieSceneExternalClock();

};

