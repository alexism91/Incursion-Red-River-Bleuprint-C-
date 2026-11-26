#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DragonIKWeaponPhysicsComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DRAGONIKPLUGIN_API UDragonIKWeaponPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* weapon_input_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName read_this;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max_Arm_Length_Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 physanim_tag_index;
    
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
    float unfreeze_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_grabbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Teleport_Distance;
    
    UDragonIKWeaponPhysicsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Weapon_Transform_Override(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform);
    
    UFUNCTION(BlueprintCallable)
    void Unfreeze_Elbows_Function(FName hand_bone);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Weapon_Transform_Override(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Unfreeze_Elbows_Function(FName hand_bone);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Release_Weapon(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Release_Hand_Plus_Override(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Release_Hand_Only(FName hand_bone);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Grab_Weapon(FName grabbed_bone, bool simulate_physics, bool use_gravity, FName WeaponBoneName);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Freeze_Elbows_Function(FName hand_bone);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_EnableWeaponsArms();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_DisableWeaponsArms(bool reset_weapon_transform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Destroy_Weapon(AActor* Weapon);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Attach_Hand_Only(FName hand_bone, bool arm_position_recalibrate);
    
    UFUNCTION(BlueprintCallable)
    void Release_Weapon(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment);
    
    UFUNCTION(BlueprintCallable)
    void Release_Hand_Plus_Override(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation);
    
    UFUNCTION(BlueprintCallable)
    void Release_Hand_Only(FName hand_bone);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_Weapon_Transform_Override(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_Unfreeze_Elbows_Function(FName hand_bone);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_Release_Weapon(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_Release_Hand_Plus_Override(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_Release_Hand_Only(FName hand_bone);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_Grab_Weapon(FName grabbed_bone, bool simulate_physics, bool use_gravity, FName WeaponBoneName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_Freeze_Elbows_Function(FName hand_bone);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_EnableWeaponsArms();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_DisableWeaponsArms(bool reset_weapon_transform);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_Destroy_Weapon(AActor* Weapon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_Attach_Hand_Only(FName hand_bone, bool arm_position_recalibrate);
    
    UFUNCTION(BlueprintCallable)
    void Grab_Weapon(FName grabbed_bone, bool simulate_physics, bool use_gravity, FName WeaponBoneName);
    
    UFUNCTION(BlueprintCallable)
    void Freeze_Elbows_Function(FName hand_bone);
    
    UFUNCTION(BlueprintCallable)
    void FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(BlueprintCallable)
    void EnableWeaponsArms();
    
    UFUNCTION(BlueprintCallable)
    void DisableWeaponsArms(bool reset_weapon_transform);
    
    UFUNCTION(BlueprintCallable)
    void Destroy_Weapon(AActor* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void Attach_Hand_Only(FName hand_bone, bool arm_position_recalibrate);
    
};

