#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCoreTech -ObjectName=FrameTrackingContourData -FallbackName=FrameTrackingContourData
#include "ReducedContour.h"
#include "MetaHumanContourData.generated.h"

UCLASS(Blueprintable)
class METAHUMANCORE_API UMetaHumanContourData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTrackingContourData FrameTrackingContourData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FReducedContour> ReducedContourData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> ManuallyModifiedCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContourDataConfigVersion;
    
    UMetaHumanContourData();

};

