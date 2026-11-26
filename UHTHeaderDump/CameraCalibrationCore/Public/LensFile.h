#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "DistortionInfo.h"
#include "DistortionPointInfo.h"
#include "DistortionTable.h"
#include "ELensDataCategory.h"
#include "ELensDataMode.h"
#include "EncodersTable.h"
#include "FocalLengthInfo.h"
#include "FocalLengthPointInfo.h"
#include "FocalLengthTable.h"
#include "ImageCenterInfo.h"
#include "ImageCenterPointInfo.h"
#include "ImageCenterTable.h"
#include "LensInfo.h"
#include "NodalOffsetPointInfo.h"
#include "NodalOffsetTable.h"
#include "NodalPointOffset.h"
#include "STMapInfo.h"
#include "STMapPointInfo.h"
#include "STMapTable.h"
#include "LensFile.generated.h"

class ULensDistortionModelHandlerBase;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, MinimalAPI)
class ULensFile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLensInfo LensInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELensDataMode DataMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> UserMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncodersTable EncodersTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistortionTable DistortionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocalLengthTable FocalLengthTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageCenterTable ImageCenterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNodalOffsetTable NodalOffsetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTMapTable STMapTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> UndistortionDisplacementMapHolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> DistortionDisplacementMapHolders;
    
public:
    ULensFile();

    UFUNCTION(BlueprintCallable)
    void RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus);
    
    UFUNCTION(BlueprintCallable)
    void MergeFocusPoint(ELensDataCategory InDataCategory, float InSrcFocus, float InDestFocus, bool bReplaceExistingZoomPoints);
    
    UFUNCTION(BlueprintCallable)
    bool HasZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSamples(ELensDataCategory InDataCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasIrisEncoderMapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFocusPoint(ELensDataCategory InDataCategory, float InFocus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFocusEncoderMapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPointNum(ELensDataCategory InDataCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSTMapPointInfo> GetSTMapPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSTMapPoint(float InFocus, float InZoom, FSTMapInfo& OutSTMapInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FNodalOffsetPointInfo> GetNodalOffsetPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNodalOffsetPoint(float InFocus, float InZoom, FNodalPointOffset& OutNodalPointOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FImageCenterPointInfo> GetImageCenterPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetImageCenterPoint(float InFocus, float InZoom, FImageCenterInfo& OutImageCenterInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFocalLengthPointInfo> GetFocalLengthPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFocalLengthPoint(float InFocus, float InZoom, FFocalLengthInfo& OutFocalLengthInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDistortionPointInfo> GetDistortionPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDistortionPoint(float InFocus, float InZoom, FDistortionInfo& OutDistortionInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float EvaluateNormalizedIris(float InNormalizedValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float EvaluateNormalizedFocus(float InNormalizedValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EvaluateNodalPointOffset(float InFocus, float InZoom, FNodalPointOffset& OutEvaluatedValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EvaluateImageCenterParameters(float InFocus, float InZoom, FImageCenterInfo& OutEvaluatedValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EvaluateFocalLength(float InFocus, float InZoom, FFocalLengthInfo& OutEvaluatedValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EvaluateDistortionParameters(float InFocus, float InZoom, FDistortionInfo& OutEvaluatedValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EvaluateDistortionData(float InFocus, float InZoom, FVector2D InFilmback, ULensDistortionModelHandlerBase* InLensHandler) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearData(ELensDataCategory InDataCategory);
    
    UFUNCTION(BlueprintCallable)
    void ClearAll();
    
    UFUNCTION(BlueprintCallable)
    void ChangeZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InExistingZoom, float InNewZoom);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFocusPoint(ELensDataCategory InDataCategory, float InExistingFocus, float InNewFocus);
    
    UFUNCTION(BlueprintCallable)
    void AddSTMapPoint(float NewFocus, float NewZoom, const FSTMapInfo& NewPoint);
    
    UFUNCTION(BlueprintCallable)
    void AddNodalOffsetPoint(float NewFocus, float NewZoom, const FNodalPointOffset& NewPoint);
    
    UFUNCTION(BlueprintCallable)
    void AddImageCenterPoint(float NewFocus, float NewZoom, const FImageCenterInfo& NewPoint);
    
    UFUNCTION(BlueprintCallable)
    void AddFocalLengthPoint(float NewFocus, float NewZoom, const FFocalLengthInfo& NewFocalLength);
    
    UFUNCTION(BlueprintCallable)
    void AddDistortionPoint(float NewFocus, float NewZoom, const FDistortionInfo& NewPoint, const FFocalLengthInfo& NewFocalLength);
    
};

