#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Bool.h"
#include "BTTask_SetKeyValueBool.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetKeyValueBool : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool Value;
    
public:
    UBTTask_SetKeyValueBool();

};

