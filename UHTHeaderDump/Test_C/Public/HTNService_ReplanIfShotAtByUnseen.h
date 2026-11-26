#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNReplanParameters -FallbackName=HTNReplanParameters
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNService -FallbackName=HTNService
#include "HTNService_ReplanIfShotAtByUnseen.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNService_ReplanIfShotAtByUnseen : public UHTNService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplanCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHTNReplanParameters ReplanParameters;
    
    UHTNService_ReplanIfShotAtByUnseen();

};

