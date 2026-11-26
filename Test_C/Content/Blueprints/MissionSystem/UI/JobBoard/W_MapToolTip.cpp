class UW_MapToolTip_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MapToolTip.W_MapToolTip_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MapToolTip.W_MapToolTip_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MapToolTip.W_MapToolTip_C:ExecuteUbergraph_W_MapToolTip'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Travel Time"), FGuid(0xA20810DD, 0x4DC09315, 0xAC1740BB, 0xF7168C1D) }, 
        { FName("MapTag"), FGuid(0x7F7682D0, 0x46F3A3D2, 0x20B95CBC, 0x20D6DA97) }, 
        { FName("Fade"), FGuid(0x19EA1ACC, 0x9032365B, 0xB9C6F013, 0x78E4BC65) }, 
        { FName("Description"), FGuid(0xF8B321A0, 0xF026330F, 0x807B2C12, 0x27C15373) }, 
        { FName("Difficulty"), FGuid(0x1145E3EB, 0x630333B3, 0x93CCFF43, 0xA92DCC88) }, 
        { FName("Difficulty_1"), FGuid(0x76318106, 0x4F596627, 0x8EC5878F, 0x265F17EB) }, 
        { FName("Faction"), FGuid(0xFFA330DA, 0xC01A3437, 0xAA669847, 0x07BD8350) }, 
        { FName("Image_MapIcon"), FGuid(0x72E85AC1, 0x239A37DA, 0x8B1E3AF2, 0xB00CC20F) }, 
        { FName("MapName"), FGuid(0xFE4FD583, 0x1DBE3FCE, 0x96C48FCB, 0xF2A0EBA8) }, 
        { FName("Time"), FGuid(0x704335D7, 0x9DD130C4, 0xA1954D76, 0x05A2E20D) }, 
        { FName("Time_1"), FGuid(0x29F5E498, 0x894C3F53, 0xBAFB55B5, 0xA57AEDC1) }, 
        { FName("W_IRR_Background"), FGuid(0x4AACD5AF, 0x0B1438BA, 0xABBD5617, 0x277D0E4A) }, 
        { FName("W_MapDifficulty"), FGuid(0xE430D03B, 0x0D643BA9, 0x8C3F0951, 0xDB9FF4C3) }, 
        { FName("W_MapResources"), FGuid(0x9B44410B, 0x4F3A96F0, 0x0AB85595, 0x18042A70) }, 
        { FName("WeatherIcon"), FGuid(0x032A6C9E, 0x67EF3BC5, 0xBA0E3306, 0xA31F9FF8) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x21BB4778, 0xC89B3222, 0x9BBE5D7A, 0xF3B4F971) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag MapTag = {
        "TagName": FName("None")
    };
    struct FIRRDayTime Travel Time = {
        "Hours": 0,
        "Minutes": 0,
        "Seconds": 0
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UImage* WeatherIcon;
    class UW_MapResources_C* W_MapResources;
    class UW_MapDifficulty_C* W_MapDifficulty;
    class UW_IRR_Background_C* W_IRR_Background;
    class UIRRTextBlock* Time_1;
    class UIRRTextBlock* Time;
    class UIRRTextBlock* MapName;
    class UImage* Image_MapIcon;
    class UIRRTextBlock* Faction;
    class UIRRTextBlock* Difficulty_1;
    class UIRRTextBlock* Difficulty;
    class UIRRTextBlock* Description;
    class UWidgetAnimation* Fade;

};