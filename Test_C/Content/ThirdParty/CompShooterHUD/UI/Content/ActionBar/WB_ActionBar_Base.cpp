class UWB_ActionBar_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ActionBar/WB_ActionBar_Base.WB_ActionBar_Base_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ActionBar/WB_ActionBar_Base.WB_ActionBar_Base_C:ExecuteUbergraph_WB_ActionBar_Base'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SlotMapping"), FGuid(0x586A3185, 0x4B75BD0F, 0x56C1E495, 0xF9C726A4) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_Slot5;
    class UOverlay* OV_Slot4;
    class UOverlay* OV_Slot3;
    class UOverlay* OV_Slot2;
    class UOverlay* OV_Slot1;
    TMap<class UWB_Action_Slot_C*, E_ActionSlots>* SlotMapping;

};