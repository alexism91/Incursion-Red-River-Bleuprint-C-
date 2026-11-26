#pragma once
#include "CoreMinimal.h"
#include "IRRAIGroupReport.h"
#include "IRRAILocationData.h"
#include "IRRAIGroupMemberData.generated.h"

class AIRRAIBaseController;
class UIRRAIGroupComponent;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIGroupMemberData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAIGroupReport> Reports;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIRRAIBaseController* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAILocationData LeaderLocationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UIRRAIGroupComponent*, FIRRAILocationData> OtherMemberData;
    
    FIRRAIGroupMemberData();
};

