#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNService -FallbackName=HTNService
#include "IRRGrenadeClearance.h"
#include "HTNService_GrenadesFree.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNService_GrenadesFree : public UHTNService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGrenadeClearance Clearance;
    
    UHTNService_GrenadesFree();

};

