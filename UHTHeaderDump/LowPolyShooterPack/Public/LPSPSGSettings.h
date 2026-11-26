#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "LPSPSGSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class LOWPOLYSHOOTERPACK_API ULPSPSGSettings : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sensitivity;
    
public:
    ULPSPSGSettings();

    UFUNCTION(BlueprintCallable)
    void SetSensitivity(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFieldOfView() const;
    
};

