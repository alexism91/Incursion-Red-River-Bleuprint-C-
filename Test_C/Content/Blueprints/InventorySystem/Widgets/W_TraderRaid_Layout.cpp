class UW_TraderRaid_Layout_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_TraderRaid_Layout.W_TraderRaid_Layout_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_TraderRaid_Layout.W_TraderRaid_Layout_C:ExecuteUbergraph_W_TraderRaid_Layout'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Content"), FGuid(0xD03AB4F6, 0xB0D6373C, 0xB48A2C27, 0x045F2DBC) }, 
        { FName("Image_106"), FGuid(0xB8EDF228, 0x274F3083, 0xBDEA0719, 0x04971C2D) }, 
        { FName("InventoryContainer"), FGuid(0x16D81F5C, 0x90FA3B51, 0x8DBBC705, 0x2916DEB4) }, 
        { FName("VerticalBox_0"), FGuid(0xF9145AB2, 0xB2363D23, 0x95C222F5, 0xC5BE440D) }, 
        { FName("W_InventoryDrop"), FGuid(0xC88B6A70, 0x60743CC3, 0xAA720D6A, 0xD1F13EDE) }, 
        { FName("W_IRR_Background"), FGuid(0xF31DCD19, 0xC9513F5D, 0x8D94A06A, 0x3199D8E8) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0x0238CD6C, 0x67C83BBF, 0xAA801187, 0x8052B172) }, 
        { FName("W_IRR_Headline"), FGuid(0xCF4A82EC, 0x28393B0E, 0x8909AC36, 0x7C55CCDE) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Headline_C* W_IRR_Headline;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InventoryDropContainer_C* W_InventoryDrop;
    class UVerticalBox* VerticalBox_0;
    class UBorder* InventoryContainer;
    class UImage* Image_106;
    class UOverlay* Content;

};