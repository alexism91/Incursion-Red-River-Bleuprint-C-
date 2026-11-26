#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOdinEffectType.h"
#include "OdinApmConfig.h"
#include "OdinVadConfig.h"
#include "OdinViConfig.h"
#include "OdinPipeline.generated.h"

class UOdinActivityEffect;
class UOdinCloneEffect;
class UOdinCustomEffect;
class UOdinHandle;
class UOdinMuteEffect;
class UOdinPipeline;
class UOdinRmsEffect;
class UOdinVolumeEffect;

UCLASS(Blueprintable)
class ODIN_API UOdinPipeline : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FApmConfigChangedDelegate, UOdinPipeline*, pipeline, int32, effectId, FOdinApmConfig, NewApmConfig);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApmConfigChangedDelegate OnApmConfigChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinHandle* Handle;
    
public:
    UOdinPipeline();

    UFUNCTION(BlueprintCallable)
    bool UpdateApmPlayback(int32 effectId, TArray<float>& Samples, int32 Delay);
    
    UFUNCTION(BlueprintCallable)
    bool SetViConfig(int32 effectId, FOdinViConfig Config);
    
    UFUNCTION(BlueprintCallable)
    bool SetVadConfig(int32 effectId, FOdinVadConfig Config);
    
    UFUNCTION(BlueprintCallable)
    bool SetApmConfig(int32 effectId, FOdinApmConfig Config);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEffect(int32 effectId);
    
    UFUNCTION(BlueprintCallable)
    bool MoveEffect(int32 effectId, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 InsertViEffect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 InsertVadEffect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 InsertCustomEffect(int32 Index, UOdinCustomEffect* Effect);
    
    UFUNCTION(BlueprintCallable)
    int32 InsertApmEffect(int32 Index, int32 SampleRate, bool bStereo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOdinViConfig GetViConfig(int32 effectId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOdinVadConfig GetVadConfig(int32 effectId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOdinEffectType GetEffectType(int32 effectId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEffectIndex(int32 effectId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEffectId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEffectCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOdinApmConfig GetApmConfig(int32 effectId) const;
    
    UFUNCTION(BlueprintCallable)
    UOdinVolumeEffect* CreateVolumeEffect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UOdinRmsEffect* CreateRmsEffect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UOdinMuteEffect* CreateMuteEffect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UOdinCloneEffect* CreateCloneEffect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UOdinActivityEffect* CreateActivityEffect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UOdinVolumeEffect* AppendVolumeEffect();
    
    UFUNCTION(BlueprintCallable)
    UOdinRmsEffect* AppendRmsEffect();
    
    UFUNCTION(BlueprintCallable)
    UOdinMuteEffect* AppendMuteEffect();
    
    UFUNCTION(BlueprintCallable)
    UOdinCloneEffect* AppendCloneEffect();
    
    UFUNCTION(BlueprintCallable)
    UOdinActivityEffect* AppendActivityEffect();
    
};

