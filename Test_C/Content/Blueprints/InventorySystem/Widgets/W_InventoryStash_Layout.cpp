class UW_InventoryStash_Layout_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryStash_Layout.W_InventoryStash_Layout_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryStash_Layout.W_InventoryStash_Layout_C:ExecuteUbergraph_W_InventoryStash_Layout'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("BulkSale?"), FGuid(0x993E24B4, 0x401086FD, 0xF062DEBB, 0xED72C29C) }, 
        { FName("Traveling?"), FGuid(0x1C0F9D5A, 0x4C0F2E3F, 0x815630B8, 0x82F1990C) }, 
        { FName("BulkSaleSwitcher"), FGuid(0x570989FC, 0x44216122, 0x30124C9A, 0xF4EFC6B6) }, 
        { FName("Content"), FGuid(0xD03AB4F6, 0xB0D6373C, 0xB48A2C27, 0x045F2DBC) }, 
        { FName("Image_106"), FGuid(0xB8EDF228, 0x274F3083, 0xBDEA0719, 0x04971C2D) }, 
        { FName("InventoryContainer"), FGuid(0x16D81F5C, 0x90FA3B51, 0x8DBBC705, 0x2916DEB4) }, 
        { FName("PartyContainer"), FGuid(0x7524DDEE, 0x5B9839F7, 0x9B067695, 0x452B766C) }, 
        { FName("VerticalBox_0"), FGuid(0xF9145AB2, 0xB2363D23, 0x95C222F5, 0xC5BE440D) }, 
        { FName("W_InventoryDrop"), FGuid(0xC88B6A70, 0x60743CC3, 0xAA720D6A, 0xD1F13EDE) }, 
        { FName("W_IRR_Background"), FGuid(0xF31DCD19, 0xC9513F5D, 0x8D94A06A, 0x3199D8E8) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0x0238CD6C, 0x67C83BBF, 0xAA801187, 0x8052B172) }, 
        { FName("W_IRR_CurrencyText"), FGuid(0xC39E3597, 0x440A064A, 0x3361FE90, 0x557E1F53) }, 
        { FName("W_IRR_Headline"), FGuid(0xCF4A82EC, 0x28393B0E, 0x8909AC36, 0x7C55CCDE) }, 
        { FName("W_IRR_PartyData"), FGuid(0x67ED6F5B, 0x3DD133A5, 0x9FDC3499, 0x8A600C56) }, 
        { FName("W_MissionFactionRelation"), FGuid(0xEFFBCE30, 0x499EF335, 0x59BC6B9C, 0xE69D22A2) }, 
        { FName("W_MissionFactionRelation_1"), FGuid(0x638855F3, 0x4564091E, 0xBB9ED68B, 0x390D45A7) }, 
        { FName("W_MissionFactionRelation_2"), FGuid(0x14176E02, 0x49206ACB, 0x749DF482, 0x4A65A59D) }, 
        { FName("W_UtilityBar"), FGuid(0x4C6FE13F, 0x2AB43811, 0xB90F95FA, 0x035188C4) }, 
        { FName("W_UtilityBar_1"), FGuid(0x822C3A58, 0x435F5D09, 0x1E07658B, 0xF4D46D52) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Traveling? = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_UtilityBar_C* W_UtilityBar_1;
    class UW_UtilityBar_C* W_UtilityBar;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_2;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation_1;
    class UW_MissionFactionRelation_C* W_MissionFactionRelation;
    class UW_IRR_PartyData_C* W_IRR_PartyData;
    class UW_IRR_Headline_C* W_IRR_Headline;
    class UW_IRR_CurrencyText_C* W_IRR_CurrencyText;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InventoryDropContainer_C* W_InventoryDrop;
    class UVerticalBox* VerticalBox_0;
    class UOverlay* PartyContainer;
    class UBorder* InventoryContainer;
    class UImage* Image_106;
    class UOverlay* Content;
    class UWidgetSwitcher* BulkSaleSwitcher;
    bool BulkSale?;

};