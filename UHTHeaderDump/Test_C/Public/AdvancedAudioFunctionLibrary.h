#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Odin -ObjectName=OdinCaptureDeviceInfo -FallbackName=OdinCaptureDeviceInfo
#include "AdvancedAudioFunctionLibrary.generated.h"

class UAdvancedAudioSubsystem;
class UAkAudioEvent;
class UObject;
class UOdinAudioCapture;

UCLASS(Blueprintable)
class TEST_C_API UAdvancedAudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedAudioFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnregisterOdinAudioCapture(const UObject* WorldContextObject, UOdinAudioCapture* Capture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StopPersistentEvent(const UObject* WorldContextObject, int32 PlayingID, int32 FadeOutTimeMs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopAllPersistentEvents(const UObject* WorldContextObject, int32 FadeOutTimeMs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetDefaultAudioInputDevice(const UObject* WorldContextObject, UOdinAudioCapture* Capture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetAudioInputDeviceByName(const UObject* WorldContextObject, FName DeviceName, UOdinAudioCapture* Capture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetAudioInputDeviceById(const UObject* WorldContextObject, const FString& DeviceID, UOdinAudioCapture* Capture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterOdinAudioCapture(const UObject* WorldContextObject, UOdinAudioCapture* Capture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PostPersistentEvent(const UObject* WorldContextObject, UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UOdinAudioCapture* GetOdinAudioCapture(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetCurrentAudioInputDeviceName(const UObject* WorldContextObject, UOdinAudioCapture* Capture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetCurrentAudioInputDevice(const UObject* WorldContextObject, FOdinCaptureDeviceInfo& CurrentDevice, UOdinAudioCapture* Capture);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FOdinCaptureDeviceInfo> GetAudioInputDevices();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAudioInputDeviceNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAudioInputDeviceDisplayName(const FOdinCaptureDeviceInfo& Device);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAdvancedAudioSubsystem* GetAdvancedAudioSubsystem(const UObject* WorldContextObject);
    
};

