class UWBP_KronosExampleInGamePlayer_C : public UIRRInRaidPlayerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/Gameloop/InGame/WBP_KronosExampleInGamePlayer.WBP_KronosExampleInGamePlayer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/InGame/WBP_KronosExampleInGamePlayer.WBP_KronosExampleInGamePlayer_C:ExecuteUbergraph_WBP_KronosExampleInGamePlayer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Character"), FGuid(0xA1C3B066, 0x433E8B9C, 0x2E31ABB6, 0x18927538) }, 
        { FName("AudioBox"), FGuid(0x9B3A4DA1, 0x4DF0C37D, 0x511B78A6, 0x44783AB1) }, 
        { FName("PlayerNameText"), FGuid(0x2C370C21, 0x7A023217, 0xA468683E, 0x21FC76FA) }, 
        { FName("W_IRR_BaseIcon"), FGuid(0xB666B587, 0x416DFFFD, 0x61AFCBAD, 0x3FB6B167) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UTextBlock* PlayerNameText;
    class UHorizontalBox* AudioBox;
    class ACharacter* Character;

};