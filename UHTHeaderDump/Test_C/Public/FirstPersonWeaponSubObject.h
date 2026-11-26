#pragma once
#include "CoreMinimal.h"
#include "FirstPersonCoreSubObject.h"
#include "FirstPersonWeaponSubObject.generated.h"

class UWeaponComponent;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonWeaponSubObject : public UFirstPersonCoreSubObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponComponent* WeaponComponent;
    
    UFirstPersonWeaponSubObject();

};

