class UW_GameplayEffectsBar_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Widgets/W_GameplayEffectsBar.W_GameplayEffectsBar_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Widgets/W_GameplayEffectsBar.W_GameplayEffectsBar_C:ExecuteUbergraph_W_GameplayEffectsBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnUpdated"), FGuid(0x91F062B8, 0x4B085908, 0x001E03BB, 0xE2A0DD85) }, 
        { FName("Vertical Alignment"), FGuid(0x506F75D0, 0x4B6F4714, 0x85CF0A9C, 0xF2F09B9E) }, 
        { FName("Horizontal Alignment"), FGuid(0x700CA736, 0x4359C5FB, 0x2DA79896, 0xFF9CEEC5) }, 
        { FName("Effects"), FGuid(0xBB212DE8, 0x42EF490E, 0xBB210AB8, 0x42EE069E) }, 
        { FName("EffectsBox"), FGuid(0x2ECE8D62, 0xB2993332, 0x90BD3AE5, 0x87F2CE08) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum EHorizontalAlignment Horizontal Alignment = EHorizontalAlignment::HAlign_Center;
    enum EVerticalAlignment Vertical Alignment = EVerticalAlignment::VAlign_Center;
     OnUpdated = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UHorizontalBox* EffectsBox;
    TArray<class UW_GameplayEffectItem_C*>* Effects;

};