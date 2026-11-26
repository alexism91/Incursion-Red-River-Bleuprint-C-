#pragma once
#include "CoreMinimal.h"
#include "CharacterMontageSet.h"
#include "EquippableDataAsset.h"
#include "MeleeDataAsset.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UMeleeDataAsset : public UEquippableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterMontageSet> AttackMontageSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeAttackMontage;
    
    UMeleeDataAsset();

};

