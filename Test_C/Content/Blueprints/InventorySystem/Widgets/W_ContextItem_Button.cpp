class UW_ContextItem_Button_C : public UContextItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextItem_Button.W_ContextItem_Button_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextItem_Button.W_ContextItem_Button_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextItem_Button.W_ContextItem_Button_C:ExecuteUbergraph_W_ContextItem_Button'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("W_IRR_Button_Medium_46"), FGuid(0xD5FB0511, 0x7E9D327B, 0xB450BF73, 0x02F38A39) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bIsSelectable = true;
    int32 MinWidth = 32;
    int32 MinHeight = 32;
    class UIRRAudioData* AudioData = "IRRAudioData'Test_C/Content/Blueprints/UICore/Data/DataAssets/DA_AudioData_Laptop.DA_AudioData_Laptop'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Button_Medium_C* W_IRR_Button_Medium_46;

};