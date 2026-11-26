#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosClothAssetEngine -ObjectName=ChaosClothAssetBase -FallbackName=ChaosClothAssetBase
#include "ChaosOutfitPiece.h"
#include "ChaosOutfitAsset.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UChaosOutfitAsset : public UChaosClothAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosOutfitPiece> Pieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> Bodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection OutfitCollection;
    
public:
    UChaosOutfitAsset();

};

