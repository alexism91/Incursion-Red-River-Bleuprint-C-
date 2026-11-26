#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpBase.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetOpBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentOpName;
    
public:
    IKRIG_API FIKRetargetOpBase();
};

