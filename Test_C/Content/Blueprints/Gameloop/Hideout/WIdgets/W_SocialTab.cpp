class UW_SocialTab_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/Gameloop/Hideout/WIdgets/W_SocialTab.W_SocialTab_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Gameloop/Hideout/WIdgets/W_SocialTab.W_SocialTab_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Hideout/WIdgets/W_SocialTab.W_SocialTab_C:ExecuteUbergraph_W_SocialTab'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Background"), FGuid(0xF931F717, 0x9C9E32E0, 0xA5B293CC, 0xE6CFFAF2) }, 
        { FName("Border"), FGuid(0xF3B52E3B, 0xFDCC3DC4, 0xA9725B96, 0xD96AD9D9) }, 
        { FName("CreatePartyButton"), FGuid(0xC06EE2BA, 0xAB5738A5, 0xA6B6449A, 0x7DEC9F29) }, 
        { FName("NicknameBackground"), FGuid(0x90E66E00, 0xDF143C9C, 0xA3762443, 0xB07FC8A0) }, 
        { FName("NicknameText"), FGuid(0x2ADB7F0B, 0x97293C9E, 0x8EE4C4CA, 0x9B208AC7) }, 
        { FName("WBP_ExampleKronosParty"), FGuid(0xC01A20E6, 0x01B43A6E, 0xA57FE317, 0xDB265B5B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWBP_KronosExampleParty_C* WBP_ExampleKronosParty;
    class UTextBlock* NicknameText;
    class UBorder* NicknameBackground;
    class UW_LaptopButton_C* CreatePartyButton;
    class UBorder* Border;
    class UBorder* Background;

};