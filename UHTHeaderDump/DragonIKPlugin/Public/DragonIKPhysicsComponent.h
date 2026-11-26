#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "DragonData_PhysicsHandleMultiplier.h"
#include "DragonIKPhysicsComponent.generated.h"

class ADragonIKPhysicsHolder;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DRAGONIKPLUGIN_API UDragonIKPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ADragonIKPhysicsHolder* handler_holder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 physanim_tag_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Custom_Root_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> individual_bone_selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Influence_Stopping_Bones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDragonData_PhysicsHandleMultiplier> Override_Handle_Strength_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Linear_Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Angular_Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Linear_Damp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Angular_Damp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Interpolation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Teleport_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool parent_child_ragdoll_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> Parent_Child_Connection_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool use_auto_blending_logic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Autoblendalpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool modify_physics_states;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hit_Enable_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hit_Disable_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float hit_delay_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Physanim_Enter_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool blend_to_zero;
    
    UDragonIKPhysicsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSpecificPhysanimData(FName BoneName, int32 linear_strength_var, int32 angular_strength_var, int32 linear_damp_var, int32 angular_damp_var);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolation(int32 inter_value);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetInterpolation(int32 inter_value);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_ReleaseAllHandles(bool go_ragdoll);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_ReGrabAllHandles(bool exit_ragdoll);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_PerformActiveRagdoll(float pelvis_mass_override);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_OnHitCallback(const FHitResult& Hit, const FName Optional_Override_Hit_Bone_Name, const FVector& hit_location, const FVector& hit_impulse_direction, const FName& hit_bone_name);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Modify_Reset_Bone_Info(const TArray<FName>& bone_list);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_DragonIKSimulatePhysics(USkeletalMeshComponent* skmesh, FName BoneName, bool IncludeSelf);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Control_Bone_Handle(FName bone_name, FTransform override_transform, bool Enable);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_CacheSimulationStates();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllHandles(bool go_ragdoll);
    
    UFUNCTION(BlueprintCallable)
    void ReGrabAllHandles(bool exit_ragdoll);
    
    UFUNCTION(BlueprintCallable)
    void PerformActiveRagdoll(float pelvis_mass_override);
    
    UFUNCTION(BlueprintCallable)
    void OnHitCallback(const FHitResult& Hit, FName Optional_Override_Hit_Bone_Name, FVector& hit_location, FVector& hit_impulse_direction, FName& hit_bone_name);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_SetInterpolation(int32 inter_value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_ReleaseAllHandles(bool go_ragdoll);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_ReGrabAllHandles(bool exit_ragdoll);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_PerformActiveRagdoll(float pelvis_mass_override);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_OnHitCallback(const FHitResult& Hit, const FName Optional_Override_Hit_Bone_Name, const FVector& hit_location, const FVector& hit_impulse_direction, const FName& hit_bone_name);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_Modify_Reset_Bone_Info(const TArray<FName>& bone_list);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_DragonIKSimulatePhysics(USkeletalMeshComponent* skmesh, FName BoneName, bool IncludeSelf);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_Control_Bone_Handle(FName bone_name, FTransform override_transform, bool Enable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_CacheSimulationStates();
    
    UFUNCTION(BlueprintCallable)
    void Modify_Reset_Bone_Info(TArray<FName> bone_list);
    
    UFUNCTION(BlueprintCallable)
    void FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(BlueprintCallable)
    void Control_Bone_Handle(FName bone_name, FTransform override_transform, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void CacheSimulationStates();
    
};

