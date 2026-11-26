#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphTraversableObject.h"
#include "MovieGraphShowFlags.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphShowFlags : public UObject, public IMovieGraphTraversableObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<uint32> OverriddenShowFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, bool> ShowFlagEnableState;
    
public:
    UMovieGraphShowFlags();


    // Fix for true pure virtual functions not being implemented
};

