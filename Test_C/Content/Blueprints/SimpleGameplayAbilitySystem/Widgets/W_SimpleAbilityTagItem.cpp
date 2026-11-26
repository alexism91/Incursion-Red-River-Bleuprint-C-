class UW_SimpleAbilityTagItem_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Widgets/W_SimpleAbilityTagItem.W_SimpleAbilityTagItem_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Widgets/W_SimpleAbilityTagItem.W_SimpleAbilityTagItem_C:ExecuteUbergraph_W_SimpleAbilityTagItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Tag"), FGuid(0x04EBF6D7, 0x436943FB, 0x0D132883, 0xC08B5759) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Tag = {
        "TagName": FName("None")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* TextBlock_122;

};