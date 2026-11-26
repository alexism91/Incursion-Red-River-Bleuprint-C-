#pragma once
#include "CoreMinimal.h"
#include "CurveRemapPair.h"
#include "RetargetOpBase.h"
#include "CurveRemapOp.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UCurveRemapOp : public URetargetOpBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurveRemapPair> CurvesToRemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyAllSourceCurves;
    
public:
    UCurveRemapOp();

};

