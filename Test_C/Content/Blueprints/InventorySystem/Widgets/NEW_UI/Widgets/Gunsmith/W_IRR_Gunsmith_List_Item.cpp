class UW_IRR_Gunsmith_List_Item_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_List_Item.W_IRR_Gunsmith_List_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_List_Item.W_IRR_Gunsmith_List_Item_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_List_Item.W_IRR_Gunsmith_List_Item_C:ExecuteUbergraph_W_IRR_Gunsmith_List_Item'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ItemRef"), FGuid(0x19E5FDC2, 0x4E032CA0, 0x293449B9, 0x2F0C03D2) }, 
        { FName("OnGunsmithItemClicked"), FGuid(0x322E72D7, 0x409705D6, 0xF18C5A86, 0xD60B38EA) }, 
        { FName("ListItemSize"), FGuid(0x620207BE, 0x4AD342BF, 0xF87791B0, 0x4155A0E6) }, 
        { FName("EquipToBackground"), FGuid(0x00D8D8F2, 0x01B13A6F, 0xAD60732C, 0x3D97D57B) }, 
        { FName("Image_67"), FGuid(0xE4EFFD60, 0x08C8364E, 0xAB15C2B0, 0x9C0F5762) }, 
        { FName("W_IRR_BaseButton"), FGuid(0x49AB971A, 0xE95F371A, 0x9FB15619, 0xA09C5C04) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D ListItemSize = FVector2D(362, 146);
     OnGunsmithItemClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseButton_C* W_IRR_BaseButton;
    class UImage* Image_67;
    class UBorder* EquipToBackground;
    class UW_InventoryItem_C* ItemRef;

};