class UW_LaptopButton_C : public UIRRBaseButtonWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/General/W_LaptopButton.W_LaptopButton_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/General/W_LaptopButton.W_LaptopButton_C:ExecuteUbergraph_W_LaptopButton'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Image"), FGuid(0xA8C08883, 0x482BE6F9, 0x8BF9A397, 0x976A56BA) }, 
        { FName("ContentIndex"), FGuid(0x913BD8E7, 0x4F027DC6, 0xAC37E491, 0x3BCEEF1B) }, 
        { FName("Hover"), FGuid(0x8107720D, 0x4A35609C, 0xE05FD8BF, 0xA2F464AF) }, 
        { FName("Default"), FGuid(0xE759F8B5, 0x47BFC56B, 0x787C3FA3, 0xA767E877) }, 
        { FName("UseOuterBorder?"), FGuid(0xF7867908, 0x4F516FA1, 0xC6DF0FBC, 0x516A3E17) }, 
        { FName("UseHoverText?"), FGuid(0x57240A16, 0x4C4BFF7F, 0x1B10F2AB, 0x9E573C87) }, 
        { FName("Inverted?"), FGuid(0xC01165BD, 0x49757C68, 0xB422889E, 0xDDB7CF13) }, 
        { FName("Enabled?"), FGuid(0xCB1A4F20, 0x436D5A88, 0xB51B8BB5, 0x9616DB20) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Enabled? = true;
    bool UseOuterBorder? = true;
    int32 ContentIndex = 1;
    class UTexture2D* Image = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/T_Dollar_256x256.T_Dollar_256x256'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* OuterBorder;
    class UBorder* InnerBorder;
    class UTextBlock* HoverText;
    class UTextBlock* DefaultText;
    class UWidgetSwitcher* ContentSwitcher;
    class UWidgetSwitcher* ButtonSwitcher;
    class UImage* ButtonImage;
    bool Inverted?;
    bool UseHoverText?;
    FText Default;
    FText Hover;

};