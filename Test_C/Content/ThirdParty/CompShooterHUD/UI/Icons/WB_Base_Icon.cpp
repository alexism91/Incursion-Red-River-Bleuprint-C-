class UWB_Base_Icon_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Icons/WB_Base_Icon.WB_Base_Icon_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Icons/WB_Base_Icon.WB_Base_Icon_C:ShineAnim_Square_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Icons/WB_Base_Icon.WB_Base_Icon_C:ShineAnim_Square45_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Icons/WB_Base_Icon.WB_Base_Icon_C:ShineAnim_Ellipse_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Icons/WB_Base_Icon.WB_Base_Icon_C:ShineAnim_Hexagon_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Icons/WB_Base_Icon.WB_Base_Icon_C:ExecuteUbergraph_WB_Base_Icon'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("HighlightAnimColor"), FGuid(0x1C6BC21F, 0x4EACF672, 0xB5871497, 0x0541FA23) }, 
        { FName("Highlight_Anim?"), FGuid(0x8D5961B2, 0x40DCC5F8, 0x5CA5B29B, 0x2D4997EE) }, 
        { FName("IconTextFont"), FGuid(0xAC780C4D, 0x4D3DFEF9, 0x4AE2C4BD, 0x9038466B) }, 
        { FName("IconText_Color"), FGuid(0x76D8EDE1, 0x4E0FF1C7, 0xE9C34B8F, 0xB5F20D37) }, 
        { FName("IconText_Transform"), FGuid(0xF83500E0, 0x405B9FD4, 0xB754C388, 0x558E0A1C) }, 
        { FName("IconText"), FGuid(0xD3857390, 0x4654723D, 0xCE11E287, 0x6079C4E3) }, 
        { FName("bUseIconText"), FGuid(0x71BEE106, 0x4A8DA1E7, 0xC92B349D, 0xD83CE107) }, 
        { FName("Icon_Translation_Y"), FGuid(0x2F747635, 0x42AB7599, 0xE7E04A9A, 0x615EFE96) }, 
        { FName("Icon_Translation_X"), FGuid(0xB31D34C6, 0x40699B8C, 0x55322BB7, 0x973203FC) }, 
        { FName("Custom_Outline2"), FGuid(0xFD93EAAE, 0x4EB27C2C, 0x3DA95B87, 0x51852639) }, 
        { FName("Custom_Outline1"), FGuid(0xF760B1D3, 0x4D4055C8, 0x7FBD4A93, 0xE980B0AC) }, 
        { FName("Custom_Mask2"), FGuid(0xB947AF48, 0x4EB45A06, 0x062007A2, 0x5885E307) }, 
        { FName("Custom_Mask1"), FGuid(0x8DAC013B, 0x4A607BE9, 0x3DBDD189, 0xE5D27934) }, 
        { FName("Custom_BaseIcon"), FGuid(0xDF930A97, 0x4638BF66, 0xB177879B, 0xA87C8D5C) }, 
        { FName("IconBaseSize"), FGuid(0xBF24F781, 0x4653838E, 0xD1281EA5, 0x302583CD) }, 
        { FName("IconBaseTypes"), FGuid(0x677D04D6, 0x451EAA61, 0x5D56CEA9, 0x176342E2) }, 
        { FName("Overall_Angle"), FGuid(0x233987D1, 0x486C8FE2, 0xA02C579B, 0x9ACB6541) }, 
        { FName("IconScale"), FGuid(0x1C31A3A7, 0x4B8582D3, 0x1D98B6B1, 0x6DE6C7E8) }, 
        { FName("IconColor"), FGuid(0xD1D18A7D, 0x45FF7A64, 0x019B43B7, 0xD287C34B) }, 
        { FName("GlassMask Types"), FGuid(0x3BB1F5D9, 0x4411DE20, 0xF3E563BC, 0xAACA7950) }, 
        { FName("GlassMask_Color"), FGuid(0x96E8298D, 0x4E5FF0EE, 0x470CA7BB, 0xDF897835) }, 
        { FName("bGlassMask"), FGuid(0xFEAC601F, 0x4A72F497, 0x9CA8C6A9, 0xD22D2B7C) }, 
        { FName("Contour_Color"), FGuid(0xB8505F69, 0x4CA0B063, 0x11626C86, 0xF980FA1C) }, 
        { FName("bContour"), FGuid(0xA5127B9B, 0x4A2AE72A, 0xCBD99D8E, 0x691A7E8E) }, 
        { FName("Outline1_Color"), FGuid(0x42A4995E, 0x4A4BB6BC, 0xC23581BE, 0x23023CDD) }, 
        { FName("bOutline1"), FGuid(0xAC3EEDFB, 0x4D33AEE9, 0x374587BD, 0xF1BD06F1) }, 
        { FName("BaseMaskColor"), FGuid(0x0043BF07, 0x45861C8C, 0xC9C9BC85, 0x3CB58315) }, 
        { FName("bBaseMask"), FGuid(0x1EDEB005, 0x420C0235, 0x56CD1B8F, 0x1F487AA5) }, 
        { FName("BaseColor"), FGuid(0x1F714FD3, 0x42B6F916, 0xC1A86D8A, 0x5D699857) }, 
        { FName("bBaseColor"), FGuid(0xD47A7DFD, 0x42282F9F, 0x78A3FBB9, 0xFA096990) }, 
        { FName("Icon"), FGuid(0x6459B7C8, 0x470FBB65, 0x0C06B18B, 0x2B5A9B79) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UTexture2D* Icon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Generic_Icons/64x64/T_ExclamationMark_64x64.T_ExclamationMark_64x64'";
    bool bBaseColor = true;
    struct FLinearColor BaseColor = FLinearColor(0,245, 0,245, 0,245, 1);
    bool bBaseMask = true;
    struct FLinearColor BaseMaskColor = FLinearColor(0, 0, 0, 1);
    bool bOutline1 = true;
    struct FLinearColor Outline1_Color = FLinearColor(1, 1, 1, 1);
    bool bContour = true;
    struct FLinearColor Contour_Color = FLinearColor(1, 1, 1, 1);
    bool bGlassMask = true;
    struct FLinearColor GlassMask_Color = FLinearColor(1, 1, 1, 0,7);
    struct FLinearColor IconColor = FLinearColor(1, 1, 1, 1);
    double IconScale = 1;
    FText IconText = FText("!", Immutable);
    struct FWidgetTransform IconText_Transform = {
        "Translation": FVector2D(0, 0),
        "Scale": FVector2D(1, 1),
        "Shear": FVector2D(0, 0),
        "Angle": 0
    };
    struct FSlateColor IconText_Color = {
        "SpecifiedColor": FLinearColor(1, 1, 1, 1),
        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
    };
    struct FSlateFontInfo IconTextFont = {
        "FontObject": "Font'Engine/Content/EngineFonts/Roboto.Roboto'",
        "FontMaterial": nullptr,
        "OutlineSettings": {
            "OutlineSize": 0,
            "bMiteredCorners": false,
            "bSeparateFillAlpha": false,
            "bApplyOutlineToDropShadows": true,
            "OutlineMaterial": nullptr,
            "OutlineColor": FLinearColor(0, 0, 0, 1)
        },
        "TypefaceFontName": FName("Regular"),
        "Size": 20,
        "LetterSpacing": 0,
        "SkewAmount": 0,
        "bForceMonospaced": false,
        "bMaterialIsStencil": false,
        "MonospacedWidth": 1
    };
    struct FLinearColor HighlightAnimColor = FLinearColor(1, 1, 1, 1);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* Text_IconText;
    class UImage* Img_Shine;
    class UImage* img_Icon_Outline2;
    class UImage* img_Icon_Outline1;
    class UImage* img_Icon_Mask2;
    class UImage* img_Icon_Mask1;
    class UImage* img_Icon_Base;
    class UImage* img_Icon;
    class UWidgetAnimation* ShineAnim_Square;
    class UWidgetAnimation* ShineAnim_Square45;
    class UWidgetAnimation* ShineAnim_Ellipse;
    class UWidgetAnimation* ShineAnim_Hexagon;
    E_MaskTypes GlassMask Types;
    double Overall_Angle;
    E_IconTypes IconBaseTypes;
    E_IconSizes IconBaseSize;
    class UTexture2D* Custom_BaseIcon;
    class UTexture2D* Custom_Mask1;
    class UTexture2D* Custom_Mask2;
    class UTexture2D* Custom_Outline1;
    class UTexture2D* Custom_Outline2;
    double Icon_Translation_X;
    double Icon_Translation_Y;
    bool bUseIconText;
    bool Highlight_Anim?;

};