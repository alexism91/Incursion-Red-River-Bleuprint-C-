class UW_Interact_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/W_Interact.W_Interact_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_Interact.W_Interact_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/W_Interact.W_Interact_C:ExecuteUbergraph_W_Interact'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Constructed?"), FGuid(0xCEAAC872, 0x4A23B4A4, 0xE767E7B2, 0x854DC514) }, 
        { FName("TargetPosition"), FGuid(0x03DF49F3, 0x4AA63344, 0x26DB07B1, 0xF6C5D725) }, 
        { FName("CurrentProgress"), FGuid(0x40DB8442, 0x47BDDA28, 0x5F571A85, 0xD156471B) }, 
        { FName("InteractionSettings"), FGuid(0x52A3D12A, 0x49721990, 0x837760B3, 0x4A891318) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FS_InteractionSettings InteractionSettings = {
        "InteractionText_2_41B011174B73D78C895D92BE9A4E48D5": FText(""),
        "InteractionTime_5_06E9357A47683B0B56619C84075C8315": 0,
        "InteractionMontage_11_E700E656460E72D029BCD7B34D5C5517": nullptr,
        "MoveTo?_13_2D4863A8456D59A592E7799009B8097C": false
    };
    struct FVector TargetPosition = FVector(0, 0, 0);
    bool bHasScriptImplementedPaint = false;
    class UW_ProgressButton_C* W_ProgressButton;
    class UTextBlock* InteractionText;
    class UHorizontalBox* ContentBox;
    class UWidgetAnimation* Fade;
    double CurrentProgress;
    bool Constructed?;

};