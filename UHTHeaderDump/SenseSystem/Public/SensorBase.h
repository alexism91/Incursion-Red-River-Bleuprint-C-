#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BitFlag64_SenseSys.h"
#include "ChannelSetup.h"
#include "EOnSenseEvent.h"
#include "ESensorArrayByType.h"
#include "ESensorThreadType.h"
#include "ESensorType.h"
#include "ESuccessState.h"
#include "EUpdateReady.h"
#include "SensedStimulus.h"
#include "StimulusFindResult.h"
#include "Templates/SubclassOf.h"
#include "SensorBase.generated.h"

class AActor;
class USenseManager;
class USenseReceiverComponent;
class USenseStimulusBase;
class USensorTestBase;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class SENSESYSTEM_API USensorBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SensorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESensorType SensorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESensorThreadType SensorThreadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform SensorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnSenseEvent DetectDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CallStimulusFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChannelSetup> ChannelSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBitFlag64_SenseSys BitChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBitFlag64_SenseSys IgnoreBitChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USensorTestBase*> SensorTests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Ignored_Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USenseStimulusBase*> Ignored_Components;
    
    USensorBase();

    UFUNCTION(BlueprintCallable)
    void SetUpdateTimeRate(float NewUpdateTimeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetSensorThreadType(ESensorThreadType NewSensorThreadType);
    
    UFUNCTION(BlueprintCallable)
    void SetSenseResponseChannelBit(uint8 InChannel, bool bEnableChannel);
    
    UFUNCTION(BlueprintCallable)
    void SetSenseChannelsBit(FBitFlag64_SenseSys InChannels);
    
    UFUNCTION(BlueprintCallable)
    void SetSenseChannelParam(uint8 InChannel, bool NewSenseForcedByBestScore, int32 TrackBestScoreCount, float MinBestScore);
    
    UFUNCTION(BlueprintCallable)
    void SetNewSenseForcedByBestScore(uint8 InChannel, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreSenseResponseChannelBit(uint8 InChannel, bool bEnableChannel);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreSenseChannelsBit(FBitFlag64_SenseSys InChannels);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSensor(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBestScore_MinScore(uint8 InChannel, float MinScore);
    
    UFUNCTION(BlueprintCallable)
    void SetBestScore_Count(uint8 InChannel, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoredActors();
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoredActors(TArray<AActor*> Actors);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoredActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSensorTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSensorTestRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetSensorTestBoundBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EUpdateReady GetSensorReadyBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AActor* GetSensorOwnerAs(TSubclassOf<AActor> ActorClass, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSensorOwner_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USenseReceiverComponent* GetSenseReceiverComponent_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USenseManager* GetSenseManager_BP() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FSensedStimulus> GetSensedStimulusBySenseEvent_BP(ESensorArrayByType SenseEvent, uint8 Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<AActor*> GetSensedActorsByClass(TSubclassOf<AActor> ActorClass, ESensorArrayByType SenseState, uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AActor* GetSensedActorByClass(TSubclassOf<AActor> ActorClass, ESensorArrayByType SenseState, uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetIgnoredActors_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChannelID(uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USenseStimulusBase* GetBestSenseStimulusComponent(uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBestSenseStimulus(FSensedStimulus& SensedStimulus, uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBestSenseActor(uint8 Channel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetActorLocationFromMemory_ByComponent(const USenseStimulusBase* Comp, FVector& Location, uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetActorLocationFromMemory_ByActor(const AActor* Actor, FVector& Location, uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable)
    void ForgetAllSensed();
    
    UFUNCTION(BlueprintCallable)
    FStimulusFindResult FindStimulusInAllState_SingleChannel(const USenseStimulusBase* StimulusComponent, uint8 InChannel);
    
    UFUNCTION(BlueprintCallable)
    TArray<FStimulusFindResult> FindStimulusInAllState(const USenseStimulusBase* StimulusComponent, FBitFlag64_SenseSys InChannels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindComponent(const USenseStimulusBase* Comp, ESensorArrayByType SenseState, FSensedStimulus& SensedStimulus, uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSensedStimulus> FindBestScoreSensed(uint8 InChannel, int32 Count) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSensedStimulus> FindBestAgeSensed(uint8 InChannel, int32 Count) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FStimulusFindResult> FindActorInAllState(const AActor* Actor, FBitFlag64_SenseSys InChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindActor(const AActor* Actor, ESensorArrayByType SenseState, FSensedStimulus& SensedStimulus, uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DrawDebugSensor(bool bTest, bool bCurrentSensed, bool bLostSensed, bool bBestSensed, bool bAge, float Duration) const;
    
    UFUNCTION(BlueprintCallable)
    bool DestroySensorTest(TSubclassOf<USensorTestBase> SensorTestClass, int32 SensorTestIndexPlace);
    
    UFUNCTION(BlueprintCallable)
    USensorTestBase* CreateNewSensorTest(TSubclassOf<USensorTestBase> SensorTestClass, int32 SensorTestIndexPlace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ContainsComponent(const USenseStimulusBase* Comp, ESensorArrayByType SenseState, uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ContainsActor(const AActor* Actor, ESensorArrayByType SenseState, uint8 InChannel) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentSense(bool bCallUpdate);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentMemorySense(bool bCallForget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckResponseChannel(const USenseStimulusBase* StimulusComponent) const;
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreActors(TArray<AActor*> IgnoredActors);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreActor(AActor* IgnoreActor);
    
};

