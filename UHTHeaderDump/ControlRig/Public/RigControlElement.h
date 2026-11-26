#pragma once
#include "CoreMinimal.h"
#include "RigControlSettings.h"
#include "RigMultiParentElement.h"
#include "RigPreferredEulerAngles.h"
#include "RigControlElement.generated.h"

USTRUCT(BlueprintType)
struct FRigControlElement : public FRigMultiParentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPreferredEulerAngles PreferredEulerAngles;
    
    CONTROLRIG_API FRigControlElement();
};

