#pragma once
#include "CoreMinimal.h"
#include "IKRigSettingsBase.h"
#include "IKRigBoneSettingsBase.generated.h"

USTRUCT(BlueprintType)
struct FIKRigBoneSettingsBase : public FIKRigSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bone;
    
    IKRIG_API FIKRigBoneSettingsBase();
};

