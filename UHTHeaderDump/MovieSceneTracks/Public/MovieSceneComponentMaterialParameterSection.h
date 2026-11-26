#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialParameterInfo -FallbackName=MaterialParameterInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParameterChannelNames -FallbackName=ParameterChannelNames
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "ColorMaterialParameterInfoAndCurves.h"
#include "ScalarMaterialParameterInfoAndCurve.h"
#include "MovieSceneComponentMaterialParameterSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneComponentMaterialParameterSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalarMaterialParameterInfoAndCurve> ScalarParameterInfosAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorMaterialParameterInfoAndCurves> ColorParameterInfosAndCurves;
    
    UMovieSceneComponentMaterialParameterSection();

    UFUNCTION(BlueprintCallable)
    bool RemoveScalarParameter(const FMaterialParameterInfo& InParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveColorParameter(const FMaterialParameterInfo& InParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddScalarParameterKey(const FMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, float InValue, const FString& InLayerName, const FString& InAssetName);
    
    UFUNCTION(BlueprintCallable)
    void AddColorParameterKey(const FMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, FLinearColor InValue, const FString& InLayerName, const FString& InAssetName, const FParameterChannelNames& InChannelNames);
    

    // Fix for true pure virtual functions not being implemented
};

