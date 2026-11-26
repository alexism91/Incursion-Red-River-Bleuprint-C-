#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "QUA_DurabilityItem.h"
#include "QUA_WeaponDurability.generated.h"

USTRUCT(BlueprintType)
struct FQUA_WeaponDurability : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LossPerShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQUA_DurabilityItem> DurabilityItems;
    
    TEST_C_API FQUA_WeaponDurability();
};

