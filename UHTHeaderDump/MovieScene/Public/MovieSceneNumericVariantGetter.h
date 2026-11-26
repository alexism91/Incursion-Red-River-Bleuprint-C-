#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneNumericVariantGetter.generated.h"

class UMovieSceneNumericVariantGetter;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneNumericVariantGetter : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneNumericVariantGetter* ReferenceToSelf;
    
    UMovieSceneNumericVariantGetter();

};

