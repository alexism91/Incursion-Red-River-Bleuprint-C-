#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MovieSceneDirectorBlueprintConditionPayloadVariable.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneDirectorBlueprintConditionPayloadVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ObjectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    MOVIESCENETRACKS_API FMovieSceneDirectorBlueprintConditionPayloadVariable();
};

