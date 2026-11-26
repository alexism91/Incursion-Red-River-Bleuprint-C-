#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNTask_BlackboardBase -FallbackName=HTNTask_BlackboardBase
#include "IRRCoverCacheQueryParams.h"
#include "HTNTask_CoverQuery.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_CoverQuery : public UHTNTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCoverCacheQueryParams QueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    UHTNTask_CoverQuery();

};

