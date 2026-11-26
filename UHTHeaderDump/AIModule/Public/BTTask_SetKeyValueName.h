#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Name.h"
#include "BTTask_SetKeyValueName.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetKeyValueName : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Name Value;
    
public:
    UBTTask_SetKeyValueName();

};

