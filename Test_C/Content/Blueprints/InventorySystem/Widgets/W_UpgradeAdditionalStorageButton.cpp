class UW_UpgradeAdditionalStorageButton_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_UpgradeAdditionalStorageButton.W_UpgradeAdditionalStorageButton_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/W_UpgradeAdditionalStorageButton.W_UpgradeAdditionalStorageButton_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_UpgradeAdditionalStorageButton.W_UpgradeAdditionalStorageButton_C:ExecuteUbergraph_W_UpgradeAdditionalStorageButton'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ToolTip"), FGuid(0xA33B10CC, 0x4034946A, 0xD33E8CB3, 0x02DE1250) }, 
        { FName("Storage Sub Container Settings"), FGuid(0xF0121B16, 0x4E252291, 0xA2FACAB3, 0x66FEAC2A) }, 
        { FName("Can be Upgraded?"), FGuid(0x335BBF95, 0x4CDCEB2A, 0xEA8D10B5, 0xC7FFE5E3) }, 
        { FName("Faction"), FGuid(0xE77FF603, 0x4020E6D8, 0xFBB3B494, 0x55EA9C43) }, 
        { FName("NeededReputationTier"), FGuid(0x36DEA6C6, 0x490D236D, 0xD363D18C, 0x8E726CC3) }, 
        { FName("Angle"), FGuid(0xF0D02BDE, 0x46DC3955, 0xD4A9AA84, 0xD6E9C66A) }, 
        { FName("Texture"), FGuid(0xA1C65839, 0x437B3478, 0xDB7D64A0, 0x0837E664) }, 
        { FName("OnUpgradeButtonClicked"), FGuid(0xB64CECB2, 0x4E951992, 0x110DF992, 0x3C053FB5) }, 
        { FName("OnHoverToolTip"), FGuid(0x4C98469E, 0x4956E663, 0x94C307AA, 0x2A5684B7) }, 
        { FName("TotalInventoryCash"), FGuid(0xD8E4F0AB, 0x42C4985E, 0x49DF8892, 0xEF1243F2) }, 
        { FName("UpgradePrice"), FGuid(0x64EF09D8, 0x48F6D9E5, 0xF4FA2781, 0x36E2CF99) }, 
        { FName("Match Required Rep?"), FGuid(0x5F060764, 0x4C92F205, 0xB081C4AA, 0x2939BA2C) }, 
        { FName("EnoughMoney?"), FGuid(0x3913F05A, 0x44B77A3A, 0xE578569B, 0xE3197867) }, 
        { FName("W_IRR_Button_Small"), FGuid(0xC5181A34, 0xD0813C43, 0x89EDAE32, 0x3DB39E3D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnUpgradeButtonClicked = ;
    class UTexture2D* Texture = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/T_Plus_256x256.T_Plus_256x256'";
    FText ToolTip = FText("Test", CultureInvariant);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Button_Small_C* W_IRR_Button_Small;
    bool EnoughMoney?;
    bool Match Required Rep?;
    int UpgradePrice;
    int TotalInventoryCash;
    class UW_OnHoverToolTip_C* OnHoverToolTip;
    float Angle;
    int NeededReputationTier;
    FString Faction;
    bool Can be Upgraded?;
    class UInventoryStorageSubContainer* Storage Sub Container Settings;

};