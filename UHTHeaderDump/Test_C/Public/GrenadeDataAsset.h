#pragma once
#include "CoreMinimal.h"
#include "CharacterMontageSet.h"
#include "EquippableDataAsset.h"
#include "GrenadeDataAsset.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UGrenadeDataAsset : public UEquippableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet ThrowMontage;
    
    UGrenadeDataAsset();

};

