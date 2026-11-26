#pragma once
#include "CoreMinimal.h"
#include "MovieGraphSettingNode.h"
#include "MovieGraphSetCVarValueNode.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphSetCVarValueNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Name: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Value: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UMovieGraphSetCVarValueNode();

};

