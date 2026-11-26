#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRNavLocation -FallbackName=IRRNavLocation
#include "IRRAIPathData.h"
#include "IRRAISenseEvent.h"
#include "IRRAISimplePoint.h"
#include "IRRAITargetDataStruct.h"
#include "IRRAITargetInterface.h"
#include "IRRDamageData.h"
#include "IRRAITarget.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRAITarget : public UObject, public IGameplayTagAssetInterface, public IIRRAITargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAITargetDataStruct TargetData;
    
public:
    UIRRAITarget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetDeath(FIRRDamageData DamageData);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLocationSearched();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetKnown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSearchedSensedLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenSensedBy(FGameplayTag SenseTag, float& TimeSince) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceVisionChanged(bool& Seen) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceUnderFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastKnownUpdated(const float TimeSeconds) const;
    
    UFUNCTION(BlueprintPure)
    bool GetTimeLastSensed(double& TimeSensed, bool bOnlyPersonal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetSeen(float& TimeSince) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetHeard(float& TimeSince) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetEyeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAITargetDataStruct GetTargetData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSenseEventForTag(FGameplayTag SenseTag, FIRRAISenseEvent& OutSenseEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAIPathData GetPathToLastKnownLocation() const;
    
    UFUNCTION(BlueprintPure)
    bool GetLastSensedData(FIRRNavLocation& LastSensedLocation, double& TimeSensed, FGameplayTag& SenseType, bool bOnlyPersonal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTargetVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReadyToExecuteSearch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasTargetShotAtMe(float& TimeSince) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasTargetDamageMe(float& TimeSince) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngagementDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentFocusPoint(FIRRAISimplePoint& OutFocusPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCombatVector(FVector& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLookTowardsTarget() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
protected:
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer BP_GetOwnedGameplayTags() const override PURE_VIRTUAL(BP_GetOwnedGameplayTags, return FGameplayTagContainer{};);
    
};

