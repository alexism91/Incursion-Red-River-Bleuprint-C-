#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "IKRetargetOpSettingsBase.h"
#include "IKRetargetPelvisMotionOpSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetPelvisMotionOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference SourcePelvisBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference TargetPelvisBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TranslationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TranslationOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlendToSourceTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BlendToSourceTranslationWeights;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ScaleHorizontal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ScaleVertical;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AffectIKHorizontal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AffectIKVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugDraw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DebugDrawSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DebugDrawThickness;
    
    IKRIG_API FIKRetargetPelvisMotionOpSettings();
};

