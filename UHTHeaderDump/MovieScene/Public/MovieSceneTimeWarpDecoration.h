#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneEntityProvider.h"
#include "MovieSceneTimeWarpDecoration.generated.h"

class IMovieSceneTimeWarpSource;
class UMovieSceneTimeWarpSource;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTimeWarpDecoration : public UObject, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IMovieSceneTimeWarpSource>> Sources;
    
public:
    UMovieSceneTimeWarpDecoration();


    // Fix for true pure virtual functions not being implemented
};

