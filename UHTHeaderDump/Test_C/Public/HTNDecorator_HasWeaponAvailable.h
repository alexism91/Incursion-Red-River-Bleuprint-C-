#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "HTNDecorator_HasWeaponAvailable.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_HasWeaponAvailable : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireLoaded;
    
    UHTNDecorator_HasWeaponAvailable();

};

