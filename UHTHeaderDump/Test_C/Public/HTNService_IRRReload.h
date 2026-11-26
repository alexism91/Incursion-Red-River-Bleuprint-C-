#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNService -FallbackName=HTNService
#include "HTNService_IRRReload.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNService_IRRReload : public UHTNService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckInterval;
    
    UHTNService_IRRReload();

};

