class UWB_SingleDirection_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_SingleDirection.WB_SingleDirection_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_SingleDirection.WB_SingleDirection_C:ExecuteUbergraph_WB_SingleDirection'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("LetterFont"), FGuid(0x59D9CA4E, 0x499405B3, 0xBC1B1B9F, 0x36541492) }, 
        { FName("DirectionInfo"), FGuid(0xC3227553, 0x418BC37C, 0xD2DC4E93, 0x4D75E085) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_DirectionInfo DirectionInfo = {
        "Name_2_84928310497D1F4C4D4E318893A96AA9": FName("None"),
        "WorldRotation_5_515BD93B4BE15D745F1E7799428C7D80": 0
    };
    struct FSlateFontInfo LetterFont = {
        "FontObject": nullptr,
        "FontMaterial": nullptr,
        "OutlineSettings": {
            "OutlineSize": 0,
            "bMiteredCorners": false,
            "bSeparateFillAlpha": false,
            "bApplyOutlineToDropShadows": false,
            "OutlineMaterial": nullptr,
            "OutlineColor": FLinearColor(0, 0, 0, 1)
        },
        "TypefaceFontName": FName("None"),
        "Size": 24,
        "LetterSpacing": 0,
        "SkewAmount": 0,
        "bForceMonospaced": false,
        "bMaterialIsStencil": false,
        "MonospacedWidth": 1
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* DirectionName;

};