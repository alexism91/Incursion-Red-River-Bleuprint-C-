class UBP_UMS_RespawnComponent_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 3;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Framework/Components/PlayerComponents/BP_UMS_RespawnComponent.BP_UMS_RespawnComponent_C:ExecuteUbergraph_BP_UMS_RespawnComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double CurrentHealth = 100;
     OnDeath = ;
     OnRevivedSuccessfull = ;
    struct FS_MarkerCustomization Marker Info = {
        "MarkerType_36_BDDCFCBA471F68EE4580389AFC04177F": E_MarkerType::NewEnumerator3,
        "OverrideMarkerIcon_33_97CB54A744045323E7D0939BEC133702": nullptr,
        "ShowDistance_8_A16F52734F3DEFDEF9E7019FEB49DCFD": 0,
        "HideDistance_30_1AF2EED7453FAB927DCCCA8E3052D742": 0,
        "EdgeOffset_27_35D612D343C44A3DD49AE5B78B9C75B3": 0,
        "HideOnEdge?_19_929D2A244E4882F0F9BE2E938C59D377": false,
        "Hint_22_5C1F2DDB44D40636829912876FB30F05": FText("")
    };
    struct FTimerHandle DeathTimer = {
        "Handle": 0
    };
     OnRevivedFailed = ;
     OnRespawnedSuccess = ;
    bool bReplicates = true;
    double TimeSinceDeath;
    bool IsDead?;
    class ACharacter* As Character;
    class UUserWidget* DeathScreen;
    TSubclassOf<UUserWidget> DeathScreenWidgetClass;
    class UAnimMontage* ReviveMontage;

};