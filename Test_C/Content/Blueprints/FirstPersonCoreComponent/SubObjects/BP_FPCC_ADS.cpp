class UBP_FPCC_ADS_C : public UFirstPersonWeaponADS
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/FirstPersonCoreComponent/SubObjects/BP_FPCC_ADS.BP_FPCC_ADS_C:ExecuteUbergraph_BP_FPCC_ADS'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double TP_FOV = 90;
    double FP_FOV = 90;
    class UCurveFloat* FLineAimTransition = "CurveFloat'Test_C/Content/Blueprints/InventorySystem/Templates/Attachments/Sight/FC_LinearTransition.FC_LinearTransition'";
    class UAkAudioEvent* DefaultAimTransitionSound = "AkAudioEvent'Test_C/Content/Soundbanks/Events/Default_Work_Unit/Player/Aim_In_Out.Aim_In_Out'";
    class UMaterialParameterCollection* FieldOfViewMaterialParameterCollection = "MaterialParameterCollection'Test_C/Content/ThirdParty/InfimaGames/AnimatedLowPolyWeapons/Materials/MPC_Viewmodel.MPC_Viewmodel'";
    FName FieldOfViewParameterName = FName("Field Of View");
    class UMaterialParameterCollection* AimAlphaMaterialParameterCollection = "MaterialParameterCollection'Test_C/Content/ThirdParty/InfimaGames/AnimatedLowPolyWeapons/Materials/MPC_Viewmodel.MPC_Viewmodel'";

};