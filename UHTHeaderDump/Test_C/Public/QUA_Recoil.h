#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "QUA_RecoilStates.h"
#include "QUA_Recoil.generated.h"

USTRUCT(BlueprintType)
struct FQUA_Recoil : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_RecoilStates RecoilStatesViewmodel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_RecoilStates RecoilStatesCamera;
    
    TEST_C_API FQUA_Recoil();
};

