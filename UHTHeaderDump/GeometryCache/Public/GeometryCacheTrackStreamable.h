#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheTrackStreamable.generated.h"

class UGeometryCacheCodecBase;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCacheCodecBase* Codec;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSampleTime;
    
public:
    UGeometryCacheTrackStreamable();

};

