#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphTraversableObject.h"
#include "MovieGraphMergeableModifierContainer.generated.h"

class UMovieGraphCollectionModifier;

UCLASS(Blueprintable)
class UMovieGraphMergeableModifierContainer : public UObject, public IMovieGraphTraversableObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphCollectionModifier*> Modifiers;
    
    UMovieGraphMergeableModifierContainer();


    // Fix for true pure virtual functions not being implemented
};

