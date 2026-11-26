#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingResolveContext -FallbackName=MovieSceneBindingResolveContext
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingResolveResult -FallbackName=MovieSceneBindingResolveResult
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneReplaceableBindingBase -FallbackName=MovieSceneReplaceableBindingBase
#include "Templates/SubclassOf.h"
#include "MovieSceneReplaceableActorBinding_BPBase.generated.h"

class UMovieScene;
class UMovieSceneSpawnableBindingBase;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMovieSceneReplaceableActorBinding_BPBase : public UMovieSceneReplaceableBindingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomBindingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieSceneSpawnableBindingBase> PreviewSpawnableType;
    
    UMovieSceneReplaceableActorBinding_BPBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_SupportsBindingCreationFromObject(const UObject* SourceObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FMovieSceneBindingResolveResult BP_ResolveRuntimeBinding(const FMovieSceneBindingResolveContext& ResolveContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_InitReplaceableBinding(UObject* SourceObject, UMovieScene* OwnerMovieScene);
    
};

