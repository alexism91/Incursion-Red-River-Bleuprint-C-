#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BitFlag64_SenseSys.h"
#include "EReceiveStimulusFlag.h"
#include "EStimulusMobility.h"
#include "OnSenseStateChangedDelegate.h"
#include "OnSensedFromDelegate.h"
#include "OnSensedFromSensorDelegate.h"
#include "StimulusTagResponse.h"
#include "SenseStimulusBase.generated.h"

class AActor;
class UObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SENSESYSTEM_API USenseStimulusBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInvisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStimulusMobility Mobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensedFromSensor OnSensedFromSensor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSenseStateChanged OnSenseStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FStimulusTagResponse> TagResponse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FOnSensedFrom> SpecifyActorDelegateMap;
    
public:
    USenseStimulusBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetStimulusMobility(EStimulusMobility InMobility);
    
    UFUNCTION(BlueprintCallable)
    void SetScore_BP(FName SensorTag, float ScoreValue);
    
    UFUNCTION(BlueprintCallable)
    void SetResponseChannelsBit(FName Tag, FBitFlag64_SenseSys NewChannels);
    
    UFUNCTION(BlueprintCallable)
    void SetResponseChannel(FName Tag, uint8 Channel, bool bEnableChannel);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveStimulusFlag(FName SensorTag, EReceiveStimulusFlag Flag, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSenseStimulus(bool bNewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAge_BP(FName SensorTag, float AgeValue);
    
    UFUNCTION(BlueprintCallable)
    void ReportSenseEvent(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoreTraceActors(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoreTraceActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnUnregisterReceiver(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    void OnSensedFromSpecifyActor(const AActor* Actor, FOnSensedFrom Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSensedFrom(const AActor* Actor, FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRememberFrom(const AActor* Actor, FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStimulusTagResponse GetStimulusSensorTagResponse(FName SensorTag, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScore_BP(FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetLostSensedFromActors(FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetCurrentSensedFromActors(FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAge_BP(FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearResponseChannels(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void ClearIgnoreTraceActors();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllResponseChannels();
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreTraceActors(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreTraceActor(AActor* Actor);
    
};

