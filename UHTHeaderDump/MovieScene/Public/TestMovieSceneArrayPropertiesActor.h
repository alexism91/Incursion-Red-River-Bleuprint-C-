#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TestMovieSceneStruct.h"
#include "TestMovieSceneArrayPropertiesActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ATestMovieSceneArrayPropertiesActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector TestVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<float> MultipleFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTestMovieSceneStruct SingleStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FTestMovieSceneStruct> MultipleStructs;
    
    ATestMovieSceneArrayPropertiesActor(const FObjectInitializer& ObjectInitializer);

};

