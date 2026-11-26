class UW_PlayerInventory_Layout_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_PlayerInventory_Layout.W_PlayerInventory_Layout_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_PlayerInventory_Layout.W_PlayerInventory_Layout_C:ExecuteUbergraph_W_PlayerInventory_Layout'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CachedGameMode"), FGuid(0x69FD4C34, 0x49610EE5, 0x678C9982, 0x40D18D5D) }, 
        { FName("TryToLoadInventory?"), FGuid(0xDC7B62A6, 0x4BB1784B, 0x2DB3AAA8, 0x214848C3) }, 
        { FName("BottomOverlay"), FGuid(0xAFC736D6, 0x47D2B756, 0x7202519C, 0x94782850) }, 
        { FName("Content"), FGuid(0x96F83EE5, 0xDC3C32F1, 0x8ADEF171, 0x70549724) }, 
        { FName("Image_106"), FGuid(0x07437235, 0x4A8EFFBE, 0x95ADC594, 0x00665BB8) }, 
        { FName("InventoryContainer"), FGuid(0xDBE9BB6C, 0x6BC53334, 0xADE7862B, 0x48C6CA9C) }, 
        { FName("W_InventoryDrop"), FGuid(0x4B03D8DD, 0x2A11320F, 0xB861F2A8, 0x3575BBB4) }, 
        { FName("W_IRR_Background"), FGuid(0x5C55C4CC, 0x41155273, 0xD1403199, 0xF71CBF86) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0x450A8AA5, 0x495C3753, 0xBEE025D0, 0x4C4FA7E2) }, 
        { FName("W_IRR_Headline"), FGuid(0x1CC188EF, 0x780330E0, 0x82E68D47, 0x52E4E74E) }, 
        { FName("W_MissionFactionRelation"), FGuid(0x4D428653, 0x469B3AE5, 0x625A0BA3, 0x454C8835) }, 
        { FName("W_MissionFactionRelation_1"), FGuid(0xC8B6E532, 0x4373DC6F, 0xC2A8538D, 0xFC42EAE0) }, 
        { FName("W_MissionFactionRelation_2"), FGuid(0xDA178095, 0x47B948B4, 0xA93551B6, 0x5D71E135) }, 
        { FName("W_UtilityBar"), FGuid(0xE182C3D6, 0x49AE0DB4, 0x8EA8C690, 0x75F62C94) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool TryToLoadInventory? = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_UtilityBar_C* W_UtilityBar;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_2;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_1;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation;
    class UW_IRR_Headline_C* W_IRR_Headline;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InventoryDropContainer_C* W_InventoryDrop;
    class UBorder* InventoryContainer;
    class UImage* Image_106;
    class UOverlay* Content;
    class UOverlay* BottomOverlay;
    EKronosGameStateType CachedGameMode;

};