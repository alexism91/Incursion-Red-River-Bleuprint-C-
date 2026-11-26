#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=UniversalObjectLocator -ObjectName=ELocatorResolveFlags -FallbackName=ELocatorResolveFlags
//CROSS-MODULE INCLUDE V2: -ModuleName=UniversalObjectLocator -ObjectName=UniversalObjectLocator -FallbackName=UniversalObjectLocator
#include "MovieSceneBindingReference.generated.h"

class UMovieSceneCustomBinding;

USTRUCT(BlueprintType)
struct FMovieSceneBindingReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniversalObjectLocator Locator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELocatorResolveFlags ResolveFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneCustomBinding* CustomBinding;
    
    MOVIESCENE_API FMovieSceneBindingReference();
};

