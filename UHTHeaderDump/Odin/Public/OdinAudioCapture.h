#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioCapture -ObjectName=AudioCapture -FallbackName=AudioCapture
#include "CaptureDeviceChangeDelegate.h"
#include "OdinCaptureDeviceInfo.h"
#include "OdinAudioCapture.generated.h"

UCLASS(Blueprintable)
class ODIN_API UOdinAudioCapture : public UAudioCapture {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCaptureDeviceChangedWithDetails, const FOdinCaptureDeviceInfo&, PreviousDevice, const FOdinCaptureDeviceInfo&, NewDevice);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCaptureDeviceChange OnCaptureDeviceReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCaptureDeviceChange OnDefaultDeviceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCaptureDeviceChangedWithDetails OnCaptureDeviceChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSelectedDeviceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedTimeWithoutStreamUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedTimeForStreamSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryRecognizingDeviceDisconnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultDeviceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinCaptureDeviceInfo CurrentSelectedDevice;
    
public:
    UOdinAudioCapture();

    UFUNCTION(BlueprintCallable)
    void StartCapturing(bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetTryRecognizingDeviceDisconnected(bool bTryRecognizing);
    
    UFUNCTION(BlueprintCallable)
    bool RestartCapturing(bool bAutomaticallyStartCapture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTryRecognizingDeviceDisconnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStreamTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAudioCaptureDevice(FOdinCaptureDeviceInfo& CurrentDevice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCaptureDevicesAvailable(TArray<FOdinCaptureDeviceInfo>& OutDevices);
    
    UFUNCTION(BlueprintCallable)
    void ChangeToDefaultCaptureDevice();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCaptureDeviceByName(FName DeviceName, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCaptureDeviceById(const FString& NewDeviceId, bool& bSuccess);
    
};

