#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRTickableWorldSubSystem -FallbackName=IRRTickableWorldSubSystem
#include "IRRCosmeticTracerSegmentsDelegateDelegate.h"
#include "IRRCosmeticBulletSubsystem.generated.h"

class AEBBullet;
class UNiagaraDataChannelAsset;

UCLASS(Blueprintable)
class TEST_C_API UIRRCosmeticBulletSubsystem : public UIRRTickableWorldSubSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCosmeticTracerSegmentsDelegate OnTracerSegments;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AEBBullet*> BulletCDOs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, int32> BulletCDOLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraDataChannelAsset* TracerDataChannel;
    
public:
    UIRRCosmeticBulletSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSystemEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLiveBulletCount() const;
    
};

