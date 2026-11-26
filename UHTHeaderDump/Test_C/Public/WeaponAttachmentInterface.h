#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "QUA_SightSetting.h"
#include "WeaponAttachmentInterface.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UWeaponAttachmentInterface : public UInterface {
    GENERATED_BODY()
};

class IWeaponAttachmentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerSeparateFOV(bool Activate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerOwnerNoSee(bool Activate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetSightSockets();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FQUA_SightSetting GetSightSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSightMagnification();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetItemID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetGripTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetActiveMesh();
    
};

