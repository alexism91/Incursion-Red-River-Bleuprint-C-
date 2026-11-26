#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EQUA_StatType.h"
#include "QUA_Modifier.h"
#include "QUA_StatItem.generated.h"

USTRUCT(BlueprintType)
struct FQUA_StatItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQUA_StatType StatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_Modifier Modifier;
    
    TEST_C_API FQUA_StatItem();
};

