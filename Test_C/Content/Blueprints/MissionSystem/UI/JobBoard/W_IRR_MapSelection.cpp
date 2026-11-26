class UW_IRR_MapSelection_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_MapSelection.W_IRR_MapSelection_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_MapSelection.W_IRR_MapSelection_C:ExecuteUbergraph_W_IRR_MapSelection'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Spacing"), FGuid(0xF53645E2, 0x44B6DF40, 0x2C9F0BB6, 0x2715EA09) }, 
        { FName("DotSize"), FGuid(0xBAFFCFEA, 0x4E2DE140, 0x7F2461AE, 0xBDB16AB8) }, 
        { FName("ZoomStep"), FGuid(0xD748E793, 0x445BB977, 0x069AEE80, 0xFA380562) }, 
        { FName("ZoomMax"), FGuid(0x36BC3302, 0x4064D51B, 0x3FCA8782, 0x1ACB2051) }, 
        { FName("ZoomMin"), FGuid(0xA2C1E323, 0x4C015EB9, 0x960D75BE, 0x8DEBB672) }, 
        { FName("OldZoom"), FGuid(0x92111763, 0x42A0081F, 0x4C07789D, 0x1798D0C6) }, 
        { FName("Mouse Position"), FGuid(0xF7E1398B, 0x499AD03C, 0x2E1BF3BD, 0x1BCBAA5A) }, 
        { FName("Zoom"), FGuid(0xE5D1745C, 0x4E3C065F, 0xF4FE038A, 0x92DA8DA7) }, 
        { FName("MapMargin"), FGuid(0x0FB4C6DC, 0x41E2EA11, 0x8AFA5B96, 0xC94E911C) }, 
        { FName("Dragging Map"), FGuid(0x7452C740, 0x451164DD, 0x25ED2EBA, 0x5CC09B10) }, 
        { FName("LineOffset"), FGuid(0x8301E5C2, 0x478D6D91, 0x08069EAF, 0x0DCAF4C6) }, 
        { FName("MapSelectors"), FGuid(0x84F5511F, 0x4E4871DF, 0xF750BE9F, 0x769A0700) }, 
        { FName("Lines"), FGuid(0x6607F8CE, 0x49618476, 0xEA0E6085, 0x0B00C4BA) }, 
        { FName("OnMapSelected"), FGuid(0x276238AC, 0x43AD94FE, 0xEEF7C18E, 0xEE4DE6CC) }, 
        { FName("BaseOverlay"), FGuid(0xFC312557, 0x46323CD9, 0x7B8AD8B3, 0xF964A3EC) }, 
        { FName("CanvasPanel_68"), FGuid(0x142D51FE, 0x4BAF75FC, 0xCD4DABA1, 0x6DAFB179) }, 
        { FName("FrameBorderNew"), FGuid(0xD772658C, 0x4F29D822, 0xE8B5B991, 0x91A84BEE) }, 
        { FName("Image_61"), FGuid(0xDB8A4D33, 0x4CCDE034, 0xD9050E95, 0xA71B910E) }, 
        { FName("LinesContainer"), FGuid(0x988A9C1D, 0x03E93979, 0xBE3FFCFC, 0x129463EB) }, 
        { FName("MapSelectorOverlay"), FGuid(0x7E7C2C8E, 0xE28F3A51, 0xA5A162D4, 0xC00BE723) }, 
        { FName("W_BunkerSelector"), FGuid(0xF8B94341, 0xE1053B75, 0xABEB12D0, 0x084DCB82) }, 
        { FName("W_HardlandsSelector"), FGuid(0x9252D2D0, 0xF0EA3E54, 0xB75B84BA, 0xD1300B5B) }, 
        { FName("W_HardlandsSelector_1"), FGuid(0x563FC395, 0xDE9C3580, 0xB2E64D7B, 0xE804AA4B) }, 
        { FName("W_IRR_Map_Base"), FGuid(0xA03B0B2C, 0x4EE2D3DF, 0xA417F688, 0xD194781A) }, 
        { FName("W_IRR_Map_FANG"), FGuid(0xE74EF1EE, 0x4895EB2F, 0x0337D8A8, 0xF677AA69) }, 
        { FName("W_IRR_Map_IGC"), FGuid(0xC159C2A3, 0x498B1AD2, 0x578A3795, 0x6A384586) }, 
        { FName("W_IRR_Map_UICS"), FGuid(0xF7166177, 0x4145E45A, 0x76E30B98, 0x1D0E5C74) }, 
        { FName("W_IRR_Map_VLF"), FGuid(0x6A261C37, 0x441202CE, 0xF9F951B5, 0x474A083D) }, 
        { FName("W_OutskirtsSelector"), FGuid(0x5B722BCA, 0x38E33A28, 0x92CBE10D, 0xEE4CAC48) }, 
        { FName("W_QuarrySelector"), FGuid(0x1101AA67, 0xD2703E64, 0x94ED890D, 0x1B865DBE) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnMapSelected = ;
    struct FVector2D LineOffset = FVector2D(0, 0);
    struct FVector2D MapMargin = FVector2D(600, 200);
    double Zoom = 1;
    struct FVector2D Mouse Position = FVector2D(0, 0);
    double ZoomMin = 0.6;
    double ZoomMax = 1.6;
    double ZoomStep = 0.1;
    double DotSize = 3;
    double Spacing = 10;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_MapSelection_Item_C* W_QuarrySelector;
    class UW_IRR_MapSelection_Item_C* W_OutskirtsSelector;
    class UImage* W_IRR_Map_VLF;
    class UImage* W_IRR_Map_UICS;
    class UImage* W_IRR_Map_IGC;
    class UImage* W_IRR_Map_FANG;
    class UW_IRR_Background_Gradient_C* W_IRR_Map_Base;
    class UW_IRR_MapSelection_Item_C* W_HardlandsSelector_1;
    class UW_IRR_MapSelection_Item_C* W_HardlandsSelector;
    class UW_IRR_MapSelection_Item_C* W_BunkerSelector;
    class UCanvasPanel* MapSelectorOverlay;
    class UOverlay* LinesContainer;
    class UImage* Image_61;
    class UBorder* FrameBorderNew;
    class UCanvasPanel* CanvasPanel_68;
    class UOverlay* BaseOverlay;
    TArray<class UW_IRR_DottedLine_C*>* Lines;
    TArray<class UW_IRR_MapSelection_Item_C*>* MapSelectors;
    bool Dragging Map;
    double OldZoom;

};