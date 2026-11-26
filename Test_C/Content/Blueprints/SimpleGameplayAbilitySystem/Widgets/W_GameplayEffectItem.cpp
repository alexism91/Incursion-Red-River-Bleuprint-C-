class UW_GameplayEffectItem_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Widgets/W_GameplayEffectItem.W_GameplayEffectItem_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Widgets/W_GameplayEffectItem.W_GameplayEffectItem_C:ExecuteUbergraph_W_GameplayEffectItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("GameplayEffect"), FGuid(0x4BDF220D, 0x4CB7AA47, 0xFD4916A1, 0x894A9033) }, 
        { FName("WB_Base_Icon"), FGuid(0x39D10976, 0x18573495, 0x8EAB32F4, 0x038AE592) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_Base_Icon_C* WB_Base_Icon;
    class USimpleGameplayEffect* GameplayEffect;

};