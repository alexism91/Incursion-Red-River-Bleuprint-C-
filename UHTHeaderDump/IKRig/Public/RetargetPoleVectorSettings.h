#pragma once
#include "CoreMinimal.h"
#include "RetargetPoleVectorSettings.generated.h"

USTRUCT(BlueprintType)
struct FRetargetPoleVectorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetChainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AlignAlpha;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StaticAngularOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaintainOffset;
    
    IKRIG_API FRetargetPoleVectorSettings();
};

