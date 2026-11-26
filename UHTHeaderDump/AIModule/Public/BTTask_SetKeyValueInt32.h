#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Int32.h"
#include "BTTask_SetKeyValueInt32.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetKeyValueInt32 : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Int32 Value;
    
public:
    UBTTask_SetKeyValueInt32();

};

