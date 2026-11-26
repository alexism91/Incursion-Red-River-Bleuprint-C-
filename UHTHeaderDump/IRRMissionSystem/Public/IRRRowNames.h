#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRRowNames.generated.h"

USTRUCT(BlueprintType)
struct FIRRRowNames : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RowNames;
    
    IRRMISSIONSYSTEM_API FIRRRowNames();
};

