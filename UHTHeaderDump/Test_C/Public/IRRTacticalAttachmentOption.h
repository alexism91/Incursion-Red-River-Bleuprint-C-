#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRTacticalAttachmentOption.generated.h"

class UTacticalComponent;

USTRUCT(BlueprintType)
struct FIRRTacticalAttachmentOption : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTacticalComponent*> TacticalAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    TEST_C_API FIRRTacticalAttachmentOption();
};

