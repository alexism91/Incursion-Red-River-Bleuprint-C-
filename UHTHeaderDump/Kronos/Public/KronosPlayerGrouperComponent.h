#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "KronosPlayerGroupMapping.h"
#include "OnKronosPlayerGroupIndexChangedDelegate.h"
#include "KronosPlayerGrouperComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KRONOS_API UKronosPlayerGrouperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAssignGroupsToPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSingleGroupIfReservationsUnavailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnIfReservationsUnavailable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerGroupMappings, meta=(AllowPrivateAccess=true))
    TArray<FKronosPlayerGroupMapping> PlayerGroupMappings;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosPlayerGroupIndexChanged OnPlayerAddedToGroupEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosPlayerGroupIndexChanged OnPlayerRemovedFromGroupEvent;
    
public:
    UKronosPlayerGrouperComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SwapPlayerGroups(const FUniqueNetIdRepl& PlayerA, const FUniqueNetIdRepl& PlayerB);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 RemovePlayerFromGroup(const FUniqueNetIdRepl& PlayerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerGroupMappings(const TArray<FKronosPlayerGroupMapping>& OldPlayerGroupMappings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalPlayerGroupIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGroupIndexOfPlayer(const FUniqueNetIdRepl& PlayerId) const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    int32 GetGroupIndexAssignment(const FUniqueNetIdRepl& PlayerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUniqueNetIdRepl> GetAllPlayersInGroup(int32 GroupIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DumpPlayerGroups() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 CreateUniqueGroupIndex();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ChangePlayerGroup(const FUniqueNetIdRepl& PlayerId, int32 NewGroupIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AssignGroupToPlayer(const FUniqueNetIdRepl& PlayerId);
    
};

