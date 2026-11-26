class UW_GCPS_MissionList_Item_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionList_Item.W_GCPS_MissionList_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionList_Item.W_GCPS_MissionList_Item_C:FadeIn_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionList_Item.W_GCPS_MissionList_Item_C:NewAnimation_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionList_Item.W_GCPS_MissionList_Item_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionList_Item.W_GCPS_MissionList_Item_C:ExecuteUbergraph_W_GCPS_MissionList_Item'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Selected?"), FGuid(0x2BC37557, 0x48481970, 0xEAF554A0, 0xF09B417B) }, 
        { FName("OnHovered"), FGuid(0x383FF01E, 0x40BAB9BC, 0x7803E98D, 0x355442AF) }, 
        { FName("OnSelected"), FGuid(0x212E7928, 0x4FD9124A, 0x9EB82589, 0xA9B9CEB0) }, 
        { FName("BaseColor"), FGuid(0x20DDE803, 0x4181DC16, 0xF84866A0, 0x06DFAE31) }, 
        { FName("Track?"), FGuid(0x66DF7812, 0x4CAA0B80, 0x981AEAB1, 0xCF14F953) }, 
        { FName("Mission Data"), FGuid(0x101B4965, 0x4F9D86A2, 0x00477F99, 0x66071E6D) }, 
        { FName("ItemRef"), FGuid(0x507A7E6F, 0x49148647, 0x9B9AF6A3, 0x93867371) }, 
        { FName("Target"), FGuid(0x6A366EFC, 0x41B3A598, 0xA93F8BB8, 0x6338C59E) }, 
        { FName("NewAnimation"), FGuid(0x81C54EA8, 0x464C7EFE, 0xA71CEFBE, 0xDC701824) }, 
        { FName("FadeIn"), FGuid(0xB6A90505, 0x4A4F2AE6, 0x579DAD82, 0x03C98AD1) }, 
        { FName("Arrow"), FGuid(0x78C57951, 0x4C50A644, 0x7E475483, 0x1FE9DC38) }, 
        { FName("BackgroundInfo"), FGuid(0xB31C5DE5, 0x3B8034B0, 0xA9426998, 0x553FC0E4) }, 
        { FName("Button"), FGuid(0x5B31C312, 0xA9973099, 0xA7455ECA, 0x6751DCF3) }, 
        { FName("FactionIcon"), FGuid(0x00D55512, 0x4D1B3674, 0x7E727787, 0x4A6FE8EE) }, 
        { FName("MissionInfo"), FGuid(0xD7ACD685, 0xCFB73DA3, 0xBE6BE0AD, 0x1B34C86A) }, 
        { FName("MissionState"), FGuid(0x7421B380, 0x403D9357, 0x02F17D84, 0x25925336) }, 
        { FName("MissionState_1"), FGuid(0x32AB3303, 0x453227FF, 0xA30394BD, 0x2DF68A78) }, 
        { FName("MissionState_2"), FGuid(0x0DC1067F, 0x4584E7AA, 0x59E24882, 0xB2101576) }, 
        { FName("MissionTitle"), FGuid(0x36E8EDC9, 0x4BFB3126, 0xADA0C9F5, 0x5932D1F6) }, 
        { FName("ProgressSwitcher"), FGuid(0x57CF93D6, 0x4582A963, 0x31B34D9F, 0x3F568F36) }, 
        { FName("SequenceBorder"), FGuid(0x87879EB0, 0x42E5B6B2, 0x2E598B84, 0xA1A1AF18) }, 
        { FName("W_GCPS_MissionRewardsContainer"), FGuid(0xDA91E0E5, 0x4418C4A1, 0x1810909C, 0x5008732F) }, 
        { FName("W_GCPS_MissionSequenceContainer"), FGuid(0xD7D95C89, 0x4481FEA1, 0x3428079D, 0xBA3B6DFD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Track? = true;
     OnSelected = ;
     OnHovered = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_GCPS_MissionSequenceContainer_C* W_GCPS_MissionSequenceContainer;
    class UW_GCPS_MissionRewardsContainer_C* W_GCPS_MissionRewardsContainer;
    class UBorder* SequenceBorder;
    class UWidgetSwitcher* ProgressSwitcher;
    class UIRRTextBlock* MissionTitle;
    class UIRRTextBlock* MissionState_2;
    class UIRRTextBlock* MissionState_1;
    class UIRRTextBlock* MissionState;
    class USizeBox* MissionInfo;
    class UImage* FactionIcon;
    class UW_IRR_BaseButton_C* Button;
    class UBorder* BackgroundInfo;
    class UImage* Arrow;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* NewAnimation;
    class UWidgetSwitcher* Target;
    class UW_InventoryItem_C* ItemRef;
    class UIRRMissionData* Mission Data;
    class UMaterialInstance* BaseColor;
    bool Selected?;

};