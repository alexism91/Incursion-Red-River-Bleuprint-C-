#pragma once
#include "CoreMinimal.h"
#include "FirstPersonWeaponSubObject.h"
#include "FirstPersonWeaponClipping.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonWeaponClipping : public UFirstPersonWeaponSubObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneNameToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBlockAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClippingDistance;
    
    UFirstPersonWeaponClipping();

};

