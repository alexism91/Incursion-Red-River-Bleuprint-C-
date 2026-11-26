#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Enum.h"
#include "BTTask_SetKeyValueEnum.generated.h"

class UEnum;

UCLASS(Blueprintable)
class UBTTask_SetKeyValueEnum : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* EnumType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Enum Value;
    
public:
    UBTTask_SetKeyValueEnum();

};

