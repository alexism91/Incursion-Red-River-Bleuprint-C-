#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneBindingEventReceiverInterface.generated.h"

class UMovieSceneSequencePlayer;

UINTERFACE(Blueprintable, MinimalAPI)
class UMovieSceneBindingEventReceiverInterface : public UInterface {
    GENERATED_BODY()
};

class IMovieSceneBindingEventReceiverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectUnboundBySequencer(UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectBoundBySequencer(UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID);
    
};

