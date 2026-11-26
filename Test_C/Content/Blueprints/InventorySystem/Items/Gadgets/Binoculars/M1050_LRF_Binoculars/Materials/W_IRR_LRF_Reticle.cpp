class UW_IRR_LRF_Reticle_C : public UIRROpticDisplayWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/Binoculars/M1050_LRF_Binoculars/Materials/W_IRR_LRF_Reticle.W_IRR_LRF_Reticle_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/Binoculars/M1050_LRF_Binoculars/Materials/W_IRR_LRF_Reticle.W_IRR_LRF_Reticle_C:ExecuteUbergraph_W_IRR_LRF_Reticle'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MagnificationLevel"), FGuid(0x99D643D9, 0x4819A097, 0xAF2338AD, 0x97595B5E) }, 
        { FName("Reticle"), FGuid(0x0535B534, 0x4B51C1A8, 0xDE32E992, 0xA3F6E1E4) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Reticle;
    class UTextBlock* MagnificationLevel;

};