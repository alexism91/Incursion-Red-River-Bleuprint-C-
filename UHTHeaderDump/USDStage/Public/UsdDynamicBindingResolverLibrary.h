#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneDynamicBindingResolveParams -FallbackName=MovieSceneDynamicBindingResolveParams
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneDynamicBindingResolveResult -FallbackName=MovieSceneDynamicBindingResolveResult
#include "UsdDynamicBindingResolverLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class USDSTAGE_API UUsdDynamicBindingResolverLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUsdDynamicBindingResolverLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FMovieSceneDynamicBindingResolveResult ResolveWithStageActor(UObject* WorldContextObject, const FMovieSceneDynamicBindingResolveParams& Params, const FString& StageActorIDNameFilter, const FString& RootLayerFilter, const FString& PrimPath);
    
};

