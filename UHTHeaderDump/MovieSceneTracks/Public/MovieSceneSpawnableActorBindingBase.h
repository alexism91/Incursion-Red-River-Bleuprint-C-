#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSpawnableBindingBase -FallbackName=MovieSceneSpawnableBindingBase
#include "MovieSceneSpawnableActorBindingBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMovieSceneSpawnableActorBindingBase : public UMovieSceneSpawnableBindingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNetAddressableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UMovieSceneSpawnableActorBindingBase();

};

