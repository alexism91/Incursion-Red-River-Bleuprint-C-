class ABP_DeadBody_VLF_C : public ABP_DeadBody_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/DeadBody/BP_DeadBody_VLF.BP_DeadBody_VLF_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/DeadBody/BP_DeadBody_VLF.BP_DeadBody_VLF_C:InheritableComponentHandler'";
    class UIRRAppearanceSetup* Appearance Setup = "IRRAppearanceSetup'Test_C/Content/Blueprints/InventorySystem/Clothing/Data/AI/DA_VLF_Appearance.DA_VLF_Appearance'";
    bool bAlwaysRelevant = false;
    bool bNetLoadOnClient = true;
    bool bReplicates = false;
    enum RemoteRole = ENetRole::ROLE_None;
    enum NetDormancy = ENetDormancy::DORM_Awake;
};