#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Struct.h"
#include "BTTask_SetKeyValueStruct.generated.h"

class UScriptStruct;

UCLASS(Blueprintable)
class UBTTask_SetKeyValueStruct : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* StructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Struct Value;
    
public:
    UBTTask_SetKeyValueStruct();

};

