#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "SingleBark.h"
#include "Barks.generated.h"

USTRUCT(BlueprintType)
struct FBarks : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSingleBark> Barks;
    
    TEST_C_API FBarks();
};

