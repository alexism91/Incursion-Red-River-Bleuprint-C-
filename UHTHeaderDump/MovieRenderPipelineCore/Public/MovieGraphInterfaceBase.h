#pragma once
#include "CoreMinimal.h"
#include "MovieGraphMember.h"
#include "MovieGraphInterfaceBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphInterfaceBase : public UMovieGraphMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBranch;
    
    UMovieGraphInterfaceBase();

};

