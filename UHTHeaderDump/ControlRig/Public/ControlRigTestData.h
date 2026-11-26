#pragma once
#include "CoreMinimal.h"
#include "ControlRigReplay.h"
#include "ControlRigTestDataFrame.h"
#include "ControlRigTestData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UControlRigTestData : public UControlRigReplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigTestDataFrame Initial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigTestDataFrame> InputFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigTestDataFrame> OutputFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EventQueue;
    
    UControlRigTestData();

    UFUNCTION(BlueprintPure)
    int32 GetFrameIndexForTime(double InSeconds, bool bInput) const;
    
};

