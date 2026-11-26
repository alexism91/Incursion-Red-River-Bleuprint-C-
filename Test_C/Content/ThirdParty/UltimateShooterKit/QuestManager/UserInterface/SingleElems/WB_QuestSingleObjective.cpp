class UWB_QuestSingleObjective_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestSingleObjective.WB_QuestSingleObjective_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestSingleObjective.WB_QuestSingleObjective_C:ExecuteUbergraph_WB_QuestSingleObjective'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("HintFont"), FGuid(0xB145743E, 0x404E34EF, 0x24BD21A2, 0x6091D852) }, 
        { FName("ObjectiveInfo"), FGuid(0xA238E211, 0x4DAB6CF9, 0x1A4B98A9, 0xBCEC4F3C) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_ObjectiveMaster ObjectiveInfo = {
        "ObjectiveTag_23_5C4A1C1646769A8EC257DE9DF30F3013": FName("None"),
        "DisplayName_2_6CA52827462D21DCF2C9D49FC3D86115": FText(""),
        "Hints_40_AD8205D346255273601DA1850851075E": {},
        "TargetsToInteract_34_5C5A587D4F903662661C72AF962545FF": {},
        "ObjectiveCustomData_26_99E0AB714A76B0FE5B81D0897D7CB303": {
            "ObjectiveType_3_B1589EAB4F718204BAAC6F9247B25686": Enum_QbjectiveType::NewEnumerator0
        }
    };
    struct FSlateFontInfo HintFont = {
        "FontObject": "Font'Engine/Content/EngineFonts/Roboto.Roboto'",
        "FontMaterial": nullptr,
        "OutlineSettings": {
            "OutlineSize": 0,
            "bMiteredCorners": false,
            "bSeparateFillAlpha": false,
            "bApplyOutlineToDropShadows": false,
            "OutlineMaterial": nullptr,
            "OutlineColor": FLinearColor(0, 0, 0, 1)
        },
        "TypefaceFontName": FName("Regular"),
        "Size": 8,
        "LetterSpacing": 0,
        "SkewAmount": 0,
        "bForceMonospaced": false,
        "bMaterialIsStencil": false,
        "MonospacedWidth": 1
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* ObjectiveName;
    class UVerticalBox* HintBox;

};