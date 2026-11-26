class UWB_KeybindingGenerator_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_KeybindingGenerator.WB_KeybindingGenerator_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_KeybindingGenerator.WB_KeybindingGenerator_C:ExecuteUbergraph_WB_KeybindingGenerator'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnKeyListenerEnd"), FGuid(0xACE0B21F, 0x41DB1E46, 0x38657EBB, 0xF95DCF0E) }, 
        { FName("BorderColor"), FGuid(0xBB35A8D5, 0x441E4548, 0x9731ABAE, 0x4774B571) }, 
        { FName("Keys"), FGuid(0x278EF0C4, 0x464F605C, 0x314B44B0, 0xEA5EB7B2) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<struct FStruct_InputKeyInfo> Keys = {
        {
            "KeyType_20_866387444AA282C102B26292BE102425": Enum_KeyType::NewEnumerator0,
            "SharedMapNames_36_5CBDF9164EB56DD12D6284A790DF7005": {},
            "InputAction_41_F0CC631D427AFF1C0FB2849BA41B6025": "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Sneak.IA_Sneak'",
            "PlayerMappedName_60_D667E47C4761808F2AAD738F1F328FEA": FName("None"),
            "InputMapIndex_58_0B1E836442D1B618608B7BA59F0EABF4": 0
        },
        {
            "KeyType_20_866387444AA282C102B26292BE102425": Enum_KeyType::NewEnumerator0,
            "SharedMapNames_36_5CBDF9164EB56DD12D6284A790DF7005": {},
            "InputAction_41_F0CC631D427AFF1C0FB2849BA41B6025": "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Sneak.IA_Sneak'",
            "PlayerMappedName_60_D667E47C4761808F2AAD738F1F328FEA": FName("None"),
            "InputMapIndex_58_0B1E836442D1B618608B7BA59F0EABF4": 0
        }
    };
    struct FLinearColor BorderColor = FLinearColor(0,026241, 0,028426, 0,042311, 1);
     OnKeyListenerEnd = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_KeyBindingButton_C* WB_KeyBindingButton_1;
    class UWB_KeyBindingButton_C* WB_KeyBindingButton;
    class UHorizontalBox* KeyList;

};