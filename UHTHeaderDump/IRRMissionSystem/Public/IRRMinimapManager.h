#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRObjectReplicationComponent -FallbackName=IRRObjectReplicationComponent
#include "IRRPingData.h"
#include "MarkerAddedDelegate.h"
#include "MarkerBindingsChangedDelegate.h"
#include "MarkerRemovedDelegate.h"
#include "PingAddedDelegate.h"
#include "PingRemovedDelegate.h"
#include "IRRMinimapManager.generated.h"

class ACharacter;
class APlayerController;
class UIRRMarkerComponent;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRMinimapManager : public UIRRObjectReplicationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MapMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_Markers, meta=(AllowPrivateAccess=true))
    TArray<UIRRMarkerComponent*> Markers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Pings, meta=(AllowPrivateAccess=true))
    TArray<FIRRPingData> Pings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIRRMarkerComponent*> BroadcastMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapMaterial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerAdded OnMarkerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerRemoved OnMarkerRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerBindingsChanged OnMarkerBindingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingAdded OnPingAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingRemoved OnPingRemoved;
    
    UIRRMinimapManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterPing(FIRRPingData PingData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterMarker(UIRRMarkerComponent* Marker);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveHiddenPingsForController(APlayerController* Controller);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterPing(FIRRPingData PingData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterMarker(UIRRMarkerComponent* Marker);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Pings(TArray<FIRRPingData> OldPings);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Markers(TArray<UIRRMarkerComponent*> OldMarkers);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMarkerBindingsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRPingData> GetPingDataByInstigator(ACharacter* InInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRMarkerComponent*> GetMarkersByTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRMarkerComponent* GetClosestMarkerToLocation(const TArray<UIRRMarkerComponent*> InMarkers, FVector InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UIRRMarkerComponent*> FilterMarkersByTag(const TArray<UIRRMarkerComponent*> InMarkers, FGameplayTag InTag);
    
};

