class UW_InspectWindow_C : public UInventoryWindowWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InspectWindow.W_InspectWindow_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "ItemImage",
            "PropertyName": FName("OnMouseButtonDownEvent"),
            "FunctionName": FName("On_ItemImage_MouseButtonDown"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("On_ItemImage_MouseButtonDown"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InspectWindow.W_InspectWindow_C:ExecuteUbergraph_W_InspectWindow'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("WeightStat"), FGuid(0xD24638CF, 0x41EB8EC8, 0x6D1EC28F, 0xFC5DC66F) }, 
        { FName("PriceStat"), FGuid(0x7CB71909, 0x4E53A506, 0x39F97791, 0xB4F07EC4) }, 
        { FName("CurrentMousePositionDelta"), FGuid(0x5540921F, 0x4DCB9622, 0xF4DF45B9, 0x962EE8B5) }, 
        { FName("LocAttachments"), FGuid(0xAFB2BC4D, 0x442318E9, 0x745F9E9A, 0xBED1D9BE) }, 
        { FName("NewVar"), FGuid(0xC72958DA, 0x4A8EF792, 0xD0F8329D, 0x8273C29C) }, 
        { FName("Compare Type"), FGuid(0x72783CAE, 0x42301FF5, 0x8CA1749C, 0xE967AD55) }, 
        { FName("OnAddComparison"), FGuid(0x58E6AFEB, 0x4DAF3A10, 0x6F4BF1A7, 0x83E6F29D) }, 
        { FName("InspectWindowClosed"), FGuid(0xB267BA13, 0x4D4B16DF, 0x0671DFA5, 0x02B17D86) }, 
        { FName("ItemInspectorActor"), FGuid(0x1EDA020E, 0x46FDC397, 0x403355BF, 0x49D3B9B8) }, 
        { FName("InspectMouseDownd"), FGuid(0xCC979EE2, 0x4F2941DD, 0x09082AA4, 0x47417328) }, 
        { FName("CurrentMousePos"), FGuid(0xBEC441C6, 0x42DA5EEE, 0x442F6BA3, 0xD9274623) }, 
        { FName("AttachmentContainer"), FGuid(0x06FE98AC, 0xF17A3C5C, 0xBAA3036A, 0x9111FF05) }, 
        { FName("AttachmentsContainer"), FGuid(0x1B83D2C9, 0xE4B433AC, 0xBE2F67DB, 0xA5D326C4) }, 
        { FName("ImageBorder"), FGuid(0xD0F7DE40, 0x582937EF, 0x811CF050, 0xFAB9A2D6) }, 
        { FName("IRRScaledSizeBox"), FGuid(0xEC4A951C, 0x6BC83E58, 0x9157C1FB, 0x62FDBBD1) }, 
        { FName("ItemBranch"), FGuid(0x45A0972D, 0x409E3282, 0x811B4EF6, 0x420179A7) }, 
        { FName("ItemDescriptionBox"), FGuid(0x7E501C5C, 0xF6CC32CC, 0x8AB8502C, 0x6BEA2B74) }, 
        { FName("ItemDescriptionText"), FGuid(0x6F947E48, 0xF62E33C7, 0x88BFA28B, 0x44196EFA) }, 
        { FName("ItemImage"), FGuid(0x52C85F53, 0x58A531BE, 0x81BC2B33, 0xB0B7887C) }, 
        { FName("PriceBox"), FGuid(0xBCD2CE86, 0x139B37B4, 0xB7309ECB, 0xB0E89BC0) }, 
        { FName("StatsContainer"), FGuid(0xE206B70C, 0x261435DE, 0x8D5368EC, 0x6EDE174E) }, 
        { FName("W_IRR_Background"), FGuid(0xEA1EA239, 0x39233255, 0xA287C8EE, 0x610EA3CF) }, 
        { FName("W_StatContainer"), FGuid(0xB75653D6, 0xF30631D3, 0xA90799CA, 0x024D85E9) }, 
        { FName("W_WindowHeader"), FGuid(0xD6E87CD5, 0xF9853F6A, 0xA8511722, 0x487E7121) }, 
        { FName("WeightBox"), FGuid(0x3F21439F, 0xE4DC393D, 0xB2D0ED49, 0xBE26C227) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D CurrentMousePos = FVector2D(0, 0);
     InspectWindowClosed = ;
    struct FVector2D CurrentMousePositionDelta = FVector2D(0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* WeightBox;
    class UW_WindowHeader_C* W_WindowHeader;
    class UW_StatContainer_C* W_StatContainer;
    class UW_IRR_Background_C* W_IRR_Background;
    class UBorder* StatsContainer;
    class UBorder* PriceBox;
    class UImage* ItemImage;
    class UIRRTextBlock* ItemDescriptionText;
    class UBorder* ItemDescriptionBox;
    class UIRRTextBlock* ItemBranch;
    class UIRRScaledSizeBox* IRRScaledSizeBox;
    class UBorder* ImageBorder;
    class UBorder* AttachmentsContainer;
    class UOverlay* AttachmentContainer;
    bool InspectMouseDownd;
    class ABP_ItemInspectActor_C* ItemInspectorActor;
    bool OnAddComparison;
    EItemCompareType Compare Type;
    TArray<FString> NewVar;
    TArray<struct FContainerItem*>* LocAttachments;
    class UW_StatPrice_C* PriceStat;
    class UW_StatWeight_C* WeightStat;

};