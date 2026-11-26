#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneCustomBinding.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UMovieSceneCustomBinding : public UObject {
    GENERATED_BODY()
public:
    UMovieSceneCustomBinding();

    UFUNCTION(BlueprintCallable)
    static int32 GetBaseEnginePriority();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBaseCustomPriority();
    
};

