class UWB_PatreonCreditItem_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/WB_PatreonCreditItem.WB_PatreonCreditItem_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/WB_PatreonCreditItem.WB_PatreonCreditItem_C:ExecuteUbergraph_WB_PatreonCreditItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SecondNameText"), FGuid(0x2D1971E9, 0x4840E8FA, 0x68372EA5, 0x7401F4B2) }, 
        { FName("FirstNameText"), FGuid(0x2ADE5FB5, 0x47A487AD, 0xE747629A, 0x1438B1F5) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* SecondName;
    class UTextBlock* FirstName;
    FName FirstNameText;
    FName SecondNameText;

};