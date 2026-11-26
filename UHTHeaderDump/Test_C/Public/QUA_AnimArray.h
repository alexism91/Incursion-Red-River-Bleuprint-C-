#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "QUA_AnimArray.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FQUA_AnimArray : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Animations;
    
    TEST_C_API FQUA_AnimArray();
};

