class UManager_Equipment_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 1;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Components/Manager_Equipment.Manager_Equipment_C:ExecuteUbergraph_Manager_Equipment'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool IsHandEmpty = true;
     OnItemToggled = ;
    bool CanToggleWeapon = true;
    struct FRotator CurrentControlRotation = FRotator(0, 0, 0);
    struct FRotator TargetControlRotation = FRotator(0, 0, 0);
    struct FTimerHandle ControlRotation_TimerHandle = {
        "Handle": 0
    };
     On_Equip_Montage_Finished = ;
    bool bReplicates = true;
    class APawn* OwnerPawn;
    class USkeletalMeshComponent* PawnMesh;
    class APlayerState* PlayerState;
    class AActor* HeldWeapon;
    TArray<struct FStruct_ItemSlotInfo*>* Slots;
    bool IsSwapping;
    bool IsSwappingByIndex;
    int TargetSwapIndex;
    bool SwappingToNext;
    bool InCustomizationMode;

};