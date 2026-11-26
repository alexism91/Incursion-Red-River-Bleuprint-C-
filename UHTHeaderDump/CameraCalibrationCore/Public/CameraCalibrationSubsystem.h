#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "DistortionHandlerPicker.h"
#include "LensFilePicker.h"
#include "Templates/SubclassOf.h"
#include "CameraCalibrationSubsystem.generated.h"

class UCameraCalibrationStep;
class UCameraImageCenterAlgo;
class UCameraNodalOffsetAlgo;
class UCineCameraComponent;
class ULensDistortionModelHandlerBase;
class ULensFile;
class ULensModel;
class UMaterialInterface;

UCLASS(Blueprintable, MinimalAPI)
class UCameraCalibrationSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULensFile* DefaultLensFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<ULensModel>> LensModelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UCameraNodalOffsetAlgo>> CameraNodalOffsetAlgosMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UCameraImageCenterAlgo>> CameraImageCenterAlgosMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UCameraCalibrationStep>> CameraCalibrationStepsMap;
    
public:
    UCameraCalibrationSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterDistortionModelHandler(UCineCameraComponent* Component, ULensDistortionModelHandlerBase* Handler);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLensFile(ULensFile* NewDefaultLensFile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ULensModel> GetRegisteredLensModel(FName ModelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetOverlayMaterialNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetOverlayMaterial(const FName& OverlayName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULensFile* GetLensFile(const FLensFilePicker& Picker) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ULensDistortionModelHandlerBase*> GetDistortionModelHandlers(UCineCameraComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULensFile* GetDefaultLensFile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetCameraNodalOffsetAlgos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UCameraNodalOffsetAlgo> GetCameraNodalOffsetAlgo(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetCameraImageCenterAlgos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UCameraImageCenterAlgo> GetCameraImageCenterAlgo(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetCameraCalibrationSteps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UCameraCalibrationStep> GetCameraCalibrationStep(FName Name) const;
    
    UFUNCTION(BlueprintCallable)
    ULensDistortionModelHandlerBase* FindOrCreateDistortionModelHandler(UPARAM(Ref) FDistortionHandlerPicker& DistortionHandlerPicker, const TSubclassOf<ULensModel> LensModelClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULensDistortionModelHandlerBase* FindDistortionModelHandler(UPARAM(Ref) FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker) const;
    
};

