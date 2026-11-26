class UW_IRR_Mission_Deliver_Selectable_Item_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_Mission_Deliver_Selectable_Item.W_IRR_Mission_Deliver_Selectable_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_Mission_Deliver_Selectable_Item.W_IRR_Mission_Deliver_Selectable_Item_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_Mission_Deliver_Selectable_Item.W_IRR_Mission_Deliver_Selectable_Item_C:ExecuteUbergraph_W_IRR_Mission_Deliver_Selectable_Item'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Is Checked?"), FGuid(0xA982756D, 0x4BA7A7B6, 0x97DC1D9F, 0xDE3E15D8) }, 
        { FName("OnItemChecked"), FGuid(0xFDC45C71, 0x4A02BB36, 0x415DF9A3, 0x68626F8F) }, 
        { FName("Container Item"), FGuid(0x96216D8F, 0x4A4BEF1F, 0xA7618E9D, 0xD439CBE5) }, 
        { FName("BackgroundBorder"), FGuid(0x57E40710, 0x81D43867, 0xB63B20C3, 0x4B52259B) }, 
        { FName("Border_0"), FGuid(0x2999740D, 0x29643C08, 0x918BA12F, 0x0118891A) }, 
        { FName("SelectionBorder"), FGuid(0xCCC36D4D, 0x43F4A47B, 0x75856798, 0x623311B5) }, 
        { FName("W_IRR_CheckBox"), FGuid(0x9483726E, 0x82393622, 0x970572BD, 0x3AC0A637) }, 
        { FName("W_IRR_Stashtem_ItemInfo"), FGuid(0xCD9CDE40, 0x09533D86, 0xABD33001, 0xC7C3E23E) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FContainerItem Container Item = {
        "ItemInventoryComp": nullptr,
        "ItemDefinition": nullptr,
        "SoftItemDefinition": FSoftObjectPath(""),
        "ItemUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "MotherUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "ContainerIndex": -1,
        "SlotIndex": -1,
        "CurrentState": FGameplayTagContainer({}),
        "CurrentStats": {},
        "RequiredByItemUIDs": {},
        "ItemDimensions": {
            "X": FVector2D(-0,5, 0,5),
            "Y": FVector2D(-0,5, 0,5)
        },
        "CanStack": false,
        "MaxStack": 1,
        "Count": 1,
        "bRotated": false,
        "bIsVitalPart": false,
        "bQuestItem": false,
        "bLoot": false,
        "bDiscovered": false
    };
     OnItemChecked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Stashtem_ItemInfo_C* W_IRR_Stashtem_ItemInfo;
    class UW_IRR_CheckBox_C* W_IRR_CheckBox;
    class UBorder* SelectionBorder;
    class UBorder* Border_0;
    class UBorder* BackgroundBorder;
    bool Is Checked?;

};