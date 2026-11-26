#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "EQSParametrizedQueryExecutionRequest.h"
#include "BTTask_RunEQSQuery.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBBKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateBBOnFail;
    
    UBTTask_RunEQSQuery();

};

