class UUMG_SimpleInputWidget_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/GenericRadialMenus/Templates/UMG_SimpleInputWidget.UMG_SimpleInputWidget_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/GenericRadialMenus/Templates/UMG_SimpleInputWidget.UMG_SimpleInputWidget_C:ExecuteUbergraph_UMG_SimpleInputWidget'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Cancel"), FGuid(0xA22A16E3, 0x4B7AEF0A, 0x8BB67988, 0x9FF1C169) }, 
        { FName("BackKeys"), FGuid(0x85617BF8, 0x4DF6B63B, 0xE50B87A6, 0x40C3FFB6) }, 
        { FName("SubmitKeys"), FGuid(0x67647E85, 0x4E5A9FE6, 0x70FF8281, 0x99023BEB) }, 
        { FName("SubmenuCommit"), FGuid(0xEF8558DA, 0x4273D58A, 0x9E12918D, 0x41E13F0A) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     SubmenuCommit = ;
    TArray<struct FKey> SubmitKeys = {
        {
            "KeyName": FName("Gamepad_FaceButton_Bottom")
        },
        {
            "KeyName": FName("Enter")
        }
    };
    TArray<struct FKey> BackKeys = {
        {
            "KeyName": FName("Gamepad_FaceButton_Right")
        },
        {
            "KeyName": FName("Escape")
        }
    };
     Cancel = ;
    bool bIsFocusable = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;

};