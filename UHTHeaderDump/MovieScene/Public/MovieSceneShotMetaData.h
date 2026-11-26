#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneMetaDataInterface.h"
#include "MovieSceneShotMetaData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneShotMetaData : public UObject, public IMovieSceneMetaDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<bool> bIsNoGood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<bool> bIsFlagged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<bool> bIsRecorded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<bool> bIsSubSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<int32> FavoriteRating;
    
public:
    UMovieSceneShotMetaData();


    // Fix for true pure virtual functions not being implemented
};

