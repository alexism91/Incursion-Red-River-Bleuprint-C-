class UIA_PlayInteraction_C : public UInteractionAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_PlayInteraction.IA_PlayInteraction_C:ExecuteUbergraph_IA_PlayInteraction'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FCharacterMontageSet Character Montage = {
        "TP_Animation": nullptr,
        "FP_Animation": nullptr,
        "Weapon_Animation": nullptr
    };
    bool Un Equip Weapon = true;

};