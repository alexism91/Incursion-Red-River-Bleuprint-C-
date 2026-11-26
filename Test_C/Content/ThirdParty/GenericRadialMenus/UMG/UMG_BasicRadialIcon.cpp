class UUMG_BasicRadialIcon_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/GenericRadialMenus/UMG/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/GenericRadialMenus/UMG/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C:Grow_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/GenericRadialMenus/UMG/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C:Shake_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/GenericRadialMenus/UMG/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C:ExecuteUbergraph_UMG_BasicRadialIcon'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("alpha"), FGuid(0x861D4F51, 0x46BB80F1, 0x80B88298, 0xFDF1AB0B) }, 
        { FName("highlighted"), FGuid(0x1C40A498, 0x451D3C47, 0x2B2CB4A5, 0x47E420C9) }, 
        { FName("CurrentColor"), FGuid(0x57FEFBD6, 0x45BA64F7, 0x935757AF, 0x9DB12A0C) }, 
        { FName("Settings"), FGuid(0xAC04B5AC, 0x4749E4C8, 0xC4264794, 0xD2D2C836) }, 
        { FName("Action"), FGuid(0x1FC30B13, 0x42504A1E, 0xD9F20388, 0x46DF3CB2) }, 
        { FName("Item"), FGuid(0x9F512EB8, 0x40D183A0, 0x33E4C986, 0x79E1B9AE) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FContainerItem Item = {
        "ItemInventoryComp": nullptr,
        "ItemDefinition": nullptr,
        "SoftItemDefinition": FSoftObjectPath(""),
        "ItemUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "MotherUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "ContainerIndex": -1,
        "SlotIndex": -1,
        "CurrentState": FGameplayTagContainer({}),
        "CurrentStats": {},
        "RequiredByItemUIDs": {},
        "ItemDimensions": {
            "X": FVector2D(-0,5, 0,5),
            "Y": FVector2D(-0,5, 0,5)
        },
        "CanStack": false,
        "MaxStack": 1,
        "Count": 1,
        "bRotated": false,
        "bIsVitalPart": false,
        "bQuestItem": false,
        "bLoot": false,
        "bDiscovered": true
    };
    struct FFBasicIconSettings Settings = {
        "AnimationStyle_2_C5857E2F4AC7D5363326C8B5363D9ADD": EIconAnimationStyles::NewEnumerator0,
        "HighlightColor_7_FCF133C849CA59F3A456E984F1122433": FLinearColor(0,401042, 0,401042, 0,401042, 0,8),
        "UnhighlightColor_9_20CEE6F940EC3C0A462D609528F7D138": FLinearColor(0,2, 0,2, 0,2, 0,8),
        "ColorTransitionSpeed_12_2636B2604C9B6A366DD018A588954C28": 0.3
    };
    struct FLinearColor CurrentColor = FLinearColor(1, 1, 1, 1);
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class USizeBox* Sizer;
    class UImage* ItemImage;
    class UImage* Image_26;
    class UBorder* Border;
    class UIRRTextBlock* ActionText;
    class UWidgetAnimation* Grow;
    class UWidgetAnimation* Shake;
    class UItemAction* Action;
    bool highlighted;
    double alpha;

};