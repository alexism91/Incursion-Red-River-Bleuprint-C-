class ABP_LobbyCharacter_C : public AKronosLobbyCharacter
{
public:
    int32 NumReplicatedProperties = 1;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyCharacter.BP_LobbyCharacter_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyCharacter.BP_LobbyCharacter_C:ExecuteUbergraph_BP_LobbyCharacter'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGuid ID = FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000);
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyCharacter.Default__BP_LobbyCharacter_C:CharacterMesh0'";
    class UCharacterMovementComponent* CharacterMovement = "CharacterMovementComponent'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyCharacter.Default__BP_LobbyCharacter_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyCharacter.Default__BP_LobbyCharacter_C:CollisionCylinder'";
    bool bAlwaysRelevant = true;
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyCharacter.Default__BP_LobbyCharacter_C:CollisionCylinder'";
    TArray<FName> Tags = {
        FName("Player")
    };
    class UIRRPlayerOutfitComponent* IRRPlayerOutfit;
    class UAdvancedAkAudioInputComponent* AdvancedAkAudioInput;
    class UBP_InventoryComponent_C* BP_InventoryComponent;
    class UBP_EquipmentComponent_C* BP_EquipmentComponent;
    class UBP_MontageComponent_C* BP_MontageComponent;
    class UKronosNameplateComponent* KronosNameplate;
    class UAGRAnimMasterComponent* AGRAnimMaster;

};