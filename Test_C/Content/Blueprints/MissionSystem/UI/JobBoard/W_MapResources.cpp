class UW_MapResources_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MapResources.W_MapResources_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MapResources.W_MapResources_C:ExecuteUbergraph_W_MapResources'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Debug Resources"), FGuid(0x68EC0B9A, 0x4538A06A, 0x2A0EF89E, 0x90F1A18B) }, 
        { FName("HorizontalBox_34"), FGuid(0x16FD7D77, 0x0F143951, 0x9B4154FD, 0x0C5567AC) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer Debug Resources = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Resource.Oil"))
    });
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UHorizontalBox* HorizontalBox_34;

};