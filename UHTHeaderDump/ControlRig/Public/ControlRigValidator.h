#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigValidator.generated.h"

class UControlRigValidationPass;

UCLASS(Blueprintable, MinimalAPI)
class UControlRigValidator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UControlRigValidationPass*> Passes;
    
public:
    UControlRigValidator();

};

