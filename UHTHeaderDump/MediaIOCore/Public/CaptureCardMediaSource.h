#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureColorSpace -FallbackName=ETextureColorSpace
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=TimeSynchronizableMediaSource -FallbackName=TimeSynchronizableMediaSource
//CROSS-MODULE INCLUDE V2: -ModuleName=OpenColorIO -ObjectName=OpenColorIOColorConversionSettings -FallbackName=OpenColorIOColorConversionSettings
#include "EMediaIOCoreSourceEncoding.h"
#include "EMediaIOInterlaceFieldOrder.h"
#include "EMediaIOSampleEvaluationType.h"
#include "CaptureCardMediaSource.generated.h"

class UVideoDeinterlacer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MEDIAIOCORE_API UCaptureCardMediaSource : public UTimeSynchronizableMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderJIT;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFramelock;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOSampleEvaluationType EvaluationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVideoDeinterlacer* Deinterlacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOInterlaceFieldOrder InterlaceFieldOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSourceEncoding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOCoreSourceEncoding OverrideSourceEncoding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSourceColorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextureColorSpace OverrideSourceColorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenColorIOColorConversionSettings ColorConversionSettings;
    
    UCaptureCardMediaSource();

};

