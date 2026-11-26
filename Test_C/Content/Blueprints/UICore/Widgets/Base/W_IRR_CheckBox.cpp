class UW_IRR_CheckBox_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_CheckBox.W_IRR_CheckBox_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_CheckBox.W_IRR_CheckBox_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_CheckBox.W_IRR_CheckBox_C:ExecuteUbergraph_W_IRR_CheckBox'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CheckBoxEvent"), FGuid(0x891529C0, 0x4EC2E5D4, 0x5D5012B1, 0x4BE9FE39) }, 
        { FName("Size"), FGuid(0x6613F761, 0x4D4D2997, 0x417A0895, 0x3DC2C441) }, 
        { FName("Is Checked"), FGuid(0xEA6A73EC, 0x4B08F59A, 0xF4E81E9A, 0xC25BAA05) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float Size = 32;
    class UAkAudioEvent* CheckBoxEvent = "AkAudioEvent'Test_C/Content/Soundbanks/Events/Default_Work_Unit/UI/GUI_Confirm.GUI_Confirm'";
     OnCheckStateChanged = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* SizeBox_0;
    class UCheckBox* CheckBox_198;
    bool Is Checked;

};