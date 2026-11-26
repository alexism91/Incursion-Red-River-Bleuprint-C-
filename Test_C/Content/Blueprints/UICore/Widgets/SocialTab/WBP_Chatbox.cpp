class UWBP_Chatbox_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/WBP_Chatbox.WBP_Chatbox_C:WidgetTree'";
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "ChatTextBox",
            "PropertyName": FName("bIsEnabled"),
            "FunctionName": FName("CanUseChatbox"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("CanUseChatbox"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/WBP_Chatbox.WBP_Chatbox_C:FadeInOut_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/WBP_Chatbox.WBP_Chatbox_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/WBP_Chatbox.WBP_Chatbox_C:ExecuteUbergraph_WBP_Chatbox'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FadeOutTimer"), FGuid(0x969A5370, 0x4D186C00, 0xB48D3D82, 0x8C8CC5D8) }, 
        { FName("AlwaysVisible?"), FGuid(0x1BD3CB64, 0x41160B1C, 0x57AB8387, 0xA43E2782) }, 
        { FName("bWantShow?"), FGuid(0x65DA60DD, 0x40778FB5, 0xE0FA9A94, 0x8AF31836) }, 
        { FName("OnMessageCommitted"), FGuid(0x17C5C45C, 0x4CF7997E, 0xCC0D2C99, 0xBC604876) }, 
        { FName("FadeInOut"), FGuid(0x27EDB303, 0x987B3744, 0x9AF613EC, 0x994820C5) }, 
        { FName("ChatBackground"), FGuid(0xD44BE71C, 0x94BA3379, 0xA38AADAD, 0xBA3BE3B4) }, 
        { FName("ChatBoxContainer"), FGuid(0x5A478779, 0x30993BB3, 0xA948980F, 0x921F7B8A) }, 
        { FName("ChatEntryBox"), FGuid(0xE13D2CEC, 0x756331A5, 0xB5209911, 0x1A1DC57E) }, 
        { FName("ChatScrollBox"), FGuid(0x12711307, 0x198B3AA3, 0xA4D86B84, 0x79D56797) }, 
        { FName("ChatTextBox"), FGuid(0x79FE5566, 0xAC983BA5, 0xA84AE2D1, 0xF45DB382) }, 
        { FName("W_IRR_Menu_Button_Medium"), FGuid(0x74FC0A29, 0x7E7E37FD, 0x96D6AC0D, 0xC4619A93) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnMessageCommitted = ;
    struct FTimerHandle FadeOutTimer = {
        "Handle": 0
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    struct FWidgetChild DesiredFocusWidget = {
        "WidgetName": FName("ChatTextBox")
    };
    class UW_IRR_Menu_Button_Medium_C* W_IRR_Menu_Button_Medium;
    class UEditableTextBox* ChatTextBox;
    class UScrollBox* ChatScrollBox;
    class UDynamicEntryBox* ChatEntryBox;
    class UOverlay* ChatBoxContainer;
    class UImage* ChatBackground;
    class UWidgetAnimation* FadeInOut;
    bool bWantShow?;
    bool AlwaysVisible?;

};