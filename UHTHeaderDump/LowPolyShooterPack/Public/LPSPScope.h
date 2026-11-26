#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LPSPAttachment.h"
#include "LPSPLagValues.h"
#include "LPSPOffset.h"
#include "LPSPScope.generated.h"

class UTexture;

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPScope : public ALPSPAttachment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPOffset AimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FieldOfViewMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPLagValues LagMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSightMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* SightTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SightTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightEmission;
    
public:
    ALPSPScope(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetYawSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpreadMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitchSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLPSPLagValues GetLagMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFieldOfViewMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLPSPOffset GetAimOffset() const;
    
};

