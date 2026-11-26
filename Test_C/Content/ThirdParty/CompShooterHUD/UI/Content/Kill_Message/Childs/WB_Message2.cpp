class UWB_Message2_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message2.WB_Message2_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message2.WB_Message2_C:FadeInAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message2.WB_Message2_C:FadeOutAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message2.WB_Message2_C:FadeHighlight2_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/Childs/WB_Message2.WB_Message2_C:ExecuteUbergraph_WB_Message2'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("bHasArmor"), FGuid(0xF1E8E498, 0x492FF797, 0x116FBEA2, 0xDA1DEB86) }, 
        { FName("bHasShield"), FGuid(0xD9B1BA1E, 0x4BC2C422, 0xE81F09A9, 0x3589AF20) }, 
        { FName("bHasHealth"), FGuid(0xF08D7F56, 0x40318C29, 0xAAF492AE, 0x192A457F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedPaint = false;
    class UWB_Base_Icon_C* WB_Base_Icon_C_204;
    class UWB_Base_Icon_C* WB_Base_Icon_C_203;
    class UWB_Base_Icon_C* WB_Base_Icon;
    class UTextBlock* Text_Shield;
    class UTextBlock* Text_Health;
    class UTextBlock* Text_Armor;
    class UScaleBox* Scale_Icon;
    class USizeBox* SB_Icon;
    class USizeBox* SB_Highlight1;
    class USizeBox* SB_Blur;
    class UImage* Img_Line;
    class UImage* Img_Highlight2;
    class UImage* Img_Highlight;
    class UImage* Img_Blur;
    class UImage* Icon;
    class UTextBlock* Head2;
    class UTextBlock* Head1;
    class UHorizontalBox* HB_Head;
    class UTextBlock* Child2;
    class UBorder* B_Stackleft;
    class UBorder* b_Stack;
    class UBorder* b_Shield;
    class UBorder* b_Icon;
    class UBorder* b_HighlightAnim;
    class UBorder* b_Highlight2Color;
    class UBorder* b_Highlight2;
    class UBorder* b_Highlight;
    class UBorder* b_Health;
    class UBorder* b_Head;
    class UBorder* b_Content;
    class UBorder* b_BlurAnim;
    class UBorder* b_Blur;
    class UBorder* b_Armor;
    class UWidgetAnimation* FadeInAnim;
    class UWidgetAnimation* FadeOutAnim;
    class UWidgetAnimation* FadeHighlight2;
    bool bHasHealth;
    bool bHasShield;
    bool bHasArmor;

};