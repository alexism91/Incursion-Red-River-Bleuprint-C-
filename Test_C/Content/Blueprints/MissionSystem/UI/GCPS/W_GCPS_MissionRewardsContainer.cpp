class UW_GCPS_MissionRewardsContainer_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionRewardsContainer.W_GCPS_MissionRewardsContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionRewardsContainer.W_GCPS_MissionRewardsContainer_C:ExecuteUbergraph_W_GCPS_MissionRewardsContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Mission Data"), FGuid(0x354C5BA4, 0x4C572A17, 0x37385DB7, 0xB7A2B59C) }, 
        { FName("BackgroundBorder"), FGuid(0x0F0C050D, 0x4628DA09, 0x364AD78C, 0x40B21676) }, 
        { FName("Border"), FGuid(0x49DCA78C, 0x4CD9423D, 0x4F307CBF, 0x6B16F0E8) }, 
        { FName("ObjectiveBorder"), FGuid(0x6530B62B, 0x4C0B6887, 0x468056A9, 0x88A993C8) }, 
        { FName("RewardBox"), FGuid(0xEEC21D1B, 0xB63E36E5, 0xA8437183, 0x14DCB691) }, 
        { FName("SequenceNumber"), FGuid(0x592B6B08, 0x44C13ADD, 0x7008D29A, 0x17D0A46C) }, 
        { FName("SizeBox_7"), FGuid(0x55997486, 0x4FE1FDC3, 0xA7655BA5, 0x811F19A6) }, 
        { FName("W_IRR_BaseButton"), FGuid(0x35E06D25, 0x4E7E2E0D, 0xF0A43FBC, 0x601944E0) }, 
        { FName("W_RewardBox"), FGuid(0xAC512818, 0x4B7AD7DE, 0xC2ED348A, 0xC451C58A) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_RewardBox_C* W_RewardBox;
    class USizeBox* SizeBox_7;
    class UIRRTextBlock* SequenceNumber;
    class UVerticalBox* RewardBox;
    class UBorder* ObjectiveBorder;
    class UImage* Image_161;
    class UBorder* Border;
    class UBorder* BackgroundBorder;
    class UIRRMissionData* Mission Data;

};