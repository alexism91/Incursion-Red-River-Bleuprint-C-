#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "IRROutfitMergeSubsystem.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class TEST_C_API UIRROutfitMergeSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> KeepAlive;
    
public:
    UIRROutfitMergeSubsystem();

};

