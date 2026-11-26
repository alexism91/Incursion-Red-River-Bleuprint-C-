class UWB_SingleEmailReward_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/EmailStyle/WB_SingleEmailReward.WB_SingleEmailReward_C:WidgetTree'";
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "EmailSubject",
            "PropertyName": FName("Text"),
            "FunctionName": FName("Get_EmailSubject_Text_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_EmailSubject_Text_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "EmailShortDescription",
            "PropertyName": FName("Text"),
            "FunctionName": FName("Get_EmailShortDescription_Text_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_EmailShortDescription_Text_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "Icon",
            "PropertyName": FName("Background"),
            "FunctionName": FName("Get_Icon_Background_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_Icon_Background_0"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnQuestSelected"), FGuid(0x78E3E501, 0x428F8651, 0x003CD197, 0x1540D5F7) }, 
        { FName("Reward"), FGuid(0xE7A08E54, 0x483AC158, 0x2FB411A6, 0x728920CA) }, 
        { FName("BG"), FGuid(0x3EE4EB86, 0x4CFE3500, 0x8FD72D3F, 0xD550EEC4) }, 
        { FName("Dummy"), FGuid(0x18BD5B42, 0x9CDB39BD, 0xA077A35A, 0x25AE4495) }, 
        { FName("EmailShortDescription"), FGuid(0x3DB9FFB5, 0x87E13B57, 0xB57576D2, 0xD523284C) }, 
        { FName("EmailSubject"), FGuid(0x2C5D77BF, 0xF542379F, 0xAA439BDE, 0x0AFC4449) }, 
        { FName("HoverBG"), FGuid(0xCF323634, 0x8DD63E8C, 0xA38F243C, 0x905E0FC9) }, 
        { FName("Icon"), FGuid(0x9AE92B79, 0x38AD3235, 0x915F4244, 0x33BB1FA3) }, 
        { FName("WB_FrameBuilder"), FGuid(0x88B4DF26, 0xC96F3821, 0x86F84F46, 0x06A4D2BB) }
    };
    struct FS_Reward Reward = {
        "RewardType_16_0CFD20454E04D7648FBEE6BC5302996D": E_RewardType::NewEnumerator0,
        "Value_5_4EA4281A43C5574034B37AABDAF74F80": 0,
        "Text_11_5746A83A423C5683D077388C209478A5": FText(""),
        "Icon_20_AC98B73949C923F88A1315990B5428FC": nullptr,
        "BackgroundColor_12_B78C39724DF6C59CE877D2B434361C25": FLinearColor(0, 0, 0, 0)
    };
     OnQuestSelected = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_FrameBuilder_C* WB_FrameBuilder;
    class UBorder* Icon;
    class UBorder* HoverBG;
    class UTextBlock* EmailSubject;
    class UTextBlock* EmailShortDescription;
    class UButton* Dummy;
    class UBorder* BG;

};