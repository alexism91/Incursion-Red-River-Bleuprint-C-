#pragma once
#include "CoreMinimal.h"
#include "HTNReplanParameters.h"
#include "HTNService.h"
#include "HTNService_Replan.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNService_Replan : public UHTNService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHTNReplanParameters Parameters;
    
    UHTNService_Replan();

};

