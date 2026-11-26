#pragma once
#include "CoreMinimal.h"
#include "CurveRemapPair.h"
#include "IKRetargetOpSettingsBase.h"
#include "IKRetargetCurveRemapOpSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetCurveRemapOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyAllSourceCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemapCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurveRemapPair> CurvesToRemap;
    
    IKRIG_API FIKRetargetCurveRemapOpSettings();
};

