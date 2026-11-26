#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRRadioMessage.h"
#include "IRRRadioMessageArray.generated.h"

USTRUCT(BlueprintType)
struct FIRRRadioMessageArray : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRRadioMessage> RadioMessageArray;
    
    IRRRADIOSYSTEM_API FIRRRadioMessageArray();
};

