#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHostObject -FallbackName=OnlineBeaconHostObject
#include "EKronosReservationCompleteResult.h"
#include "KronosReservation.h"
#include "KronosReservationMember.h"
#include "KronosReservationHost.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosReservationHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogReservations;
    
    AKronosReservationHost(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TimeoutReservation(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PreReservationOwnerRemoved(const FUniqueNetIdRepl& OwnerId, const FKronosReservation& Reservation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EKronosReservationCompleteResult K2_PreRegisterReservation(const FKronosReservation& InReservation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnReservationRemoved(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnReservationRegistered(const FKronosReservation& NewReservation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_InitRegisteredReservation(FKronosReservation& InReservation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKronosReservation> GetReservations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumReservations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumConsumedReservations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumReservations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindReservation(const FUniqueNetIdRepl& PlayerId, FKronosReservationMember& OutPlayerReservation, FKronosReservation& OutOwningReservation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DumpReservations() const;
    
};

