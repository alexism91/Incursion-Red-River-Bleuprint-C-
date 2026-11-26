class UIA_ToggleMagnifier_C : public UItemAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemActions/IA_ToggleMagnifier.IA_ToggleMagnifier_C:ExecuteUbergraph_IA_ToggleMagnifier'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<struct FCharacterMontageSet> ToggleAnims = {
        {
            "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle1.AM_FP_Tactical_Toggle1'",
            "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle1.AM_FP_Tactical_Toggle1'",
            "Weapon_Animation": nullptr
        },
        {
            "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle2.AM_FP_Tactical_Toggle2'",
            "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle2.AM_FP_Tactical_Toggle2'",
            "Weapon_Animation": nullptr
        },
        {
            "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle3.AM_FP_Tactical_Toggle3'",
            "FP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/FP/Misc/AM_FP_Tactical_Toggle3.AM_FP_Tactical_Toggle3'",
            "Weapon_Animation": nullptr
        }
    };
    FName Action = FName("Toggle Magnifier");

};