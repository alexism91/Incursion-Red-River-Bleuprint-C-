class UW_ItemSearchLoop_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ItemSearchLoop.W_ItemSearchLoop_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ItemSearchLoop.W_ItemSearchLoop_C:ExecuteUbergraph_W_ItemSearchLoop'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Phase"), FGuid(0x2E65DB75, 0x45F0C05E, 0xFF440886, 0x58B396B3) }, 
        { FName("Radius"), FGuid(0x58E7C2D3, 0x434F6E23, 0x8679A385, 0x9D136A42) }, 
        { FName("Speed"), FGuid(0xDB83EEC3, 0x4E26BAA8, 0x272931B4, 0x726B18C0) }, 
        { FName("Loupe"), FGuid(0x66A18B40, 0x40A079E1, 0xEE4DDEB8, 0xC7F76B7D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedPaint = false;
    class UImage* Loupe;
    double Speed;
    double Radius;
    double Phase;

};