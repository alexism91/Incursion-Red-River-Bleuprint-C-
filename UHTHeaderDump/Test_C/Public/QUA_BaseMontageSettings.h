#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "QUA_AnimSet.h"
#include "QUA_BaseMontageSettings.generated.h"

USTRUCT(BlueprintType)
struct FQUA_BaseMontageSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQUA_AnimSet> Montages;
    
    TEST_C_API FQUA_BaseMontageSettings();
};

