#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigOverrideContainer.h"
#include "ControlRigOverrideAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UControlRigOverrideAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigOverrideContainer Overrides;
    
    UControlRigOverrideAsset();

};

