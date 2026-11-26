#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ClusterUnionReplicatedData.h"
#include "ComponentReference.h"
#include "EComponentPhysicsStateChange.h"
#include "OnClusterUnionAddedComponentDelegate.h"
#include "OnClusterUnionBoundsChangedDelegate.h"
#include "OnClusterUnionRemovedComponentDelegate.h"
#include "PrimitiveComponent.h"
#include "ClusterUnionComponent.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UClusterUnionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDamageFromCollision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClusterUnionAddedComponent OnComponentAddedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClusterUnionRemovedComponent OnComponentRemovedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClusterUnionBoundsChanged OnComponentBoundsChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> ClusteredComponentsReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GravityGroupIndexOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RigidState, meta=(AllowPrivateAccess=true))
    FClusterUnionReplicatedData ReplicatedRigidState;
    
public:
    UClusterUnionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsAnchored(bool bIsAnchored);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDamageFromCollision(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveComponentFromCluster(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveComponentBonesFromCluster(UPrimitiveComponent* InComponent, const TArray<int32>& BoneIds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RigidState();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsComponentAdded(UPrimitiveComponent* Component);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsAuthority() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleComponentPhysicsStateChangePostAddIntoClusterUnion(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);
    
    UFUNCTION(BlueprintCallable)
    void HandleComponentPhysicsStateChange(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> GetPrimitiveComponents();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetActors();
    
    UFUNCTION(BlueprintCallable)
    void ForceSetChildToParent(UPrimitiveComponent* InComponent, const TArray<int32>& BoneIds, const TArray<FTransform>& ChildToParent);
    
    UFUNCTION(BlueprintCallable)
    void AddComponentToCluster(UPrimitiveComponent* InComponent, const TArray<int32>& BoneIds, bool bRebuildGeometry);
    
};

