class UW_IRR_Gunsmith_WeaponOverview_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_WeaponOverview.W_IRR_Gunsmith_WeaponOverview_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_WeaponOverview.W_IRR_Gunsmith_WeaponOverview_C:FadeInOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_WeaponOverview.W_IRR_Gunsmith_WeaponOverview_C:ExecuteUbergraph_W_IRR_Gunsmith_WeaponOverview'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("bNeedRebuiltAttachments"), FGuid(0x75406772, 0x45830FF1, 0xE469D18B, 0xC85F89EA) }, 
        { FName("Attachment Filter"), FGuid(0x36332CD0, 0x48043C12, 0x4A073794, 0xC53C1D69) }, 
        { FName("Attachment Slots"), FGuid(0x4E3EDF15, 0x48897076, 0x7FB5A2B3, 0x94F89C08) }, 
        { FName("KeyUp"), FGuid(0xB6F12616, 0x44584D2D, 0xFA4C3986, 0x15595303) }, 
        { FName("KeyDown"), FGuid(0xE4FFCA39, 0x4859A46E, 0x2F18D784, 0x74928E1A) }, 
        { FName("GunsmithWidgetRef"), FGuid(0xF16D805B, 0x4B3AA28C, 0x2C560491, 0xA6CC5CC6) }, 
        { FName("OnGunsmithOverview_AttachmentClicked"), FGuid(0x9BA7F46D, 0x49A9386E, 0x96265588, 0x290EDBB0) }, 
        { FName("Y Offset"), FGuid(0xE47B921F, 0x4186F391, 0x0028A382, 0x789B6FC9) }, 
        { FName("IsTransition?"), FGuid(0x095973C4, 0x4A8AF177, 0x6D341A9B, 0xA2FC6311) }, 
        { FName("Slots"), FGuid(0x3F1FDF2D, 0x46362C78, 0xD5FDB2AB, 0x34E0994A) }, 
        { FName("Minor Axis"), FGuid(0x9EF98DBD, 0x4B04CB96, 0x935C6290, 0xD6F5364A) }, 
        { FName("Major Axis"), FGuid(0xEA182B04, 0x4D2C43D3, 0x0251A382, 0x15FE3EF8) }, 
        { FName("Attempts"), FGuid(0xC48BF525, 0x42BC82AC, 0x98628B84, 0x507C9092) }, 
        { FName("Spacing"), FGuid(0x7942EA71, 0x4213775C, 0xDAB389A8, 0x8383E94B) }, 
        { FName("IsWeaponPreview?"), FGuid(0x5BF3011A, 0x4D6180DE, 0xBA1DC3B6, 0x45D8EA7B) }, 
        { FName("Preview Ref"), FGuid(0x5AACCD59, 0x43CEE788, 0xD18225B3, 0x5B941181) }, 
        { FName("CurrentMousePos"), FGuid(0x16977925, 0x42E692EE, 0x0CEF6CBD, 0xAC1F7884) }, 
        { FName("InspectMouseDownd"), FGuid(0xF50C90F4, 0x4E833073, 0x01823EA3, 0x888EFF25) }, 
        { FName("FadeInOut"), FGuid(0x50BDD928, 0x629A370E, 0xACC8FDF5, 0xB1A2F4CC) }, 
        { FName("Content"), FGuid(0xE74FFCF0, 0x1ADA3178, 0xB4760C10, 0xA1B5E876) }, 
        { FName("OverviewPanel"), FGuid(0xF4430846, 0xFB9C38B4, 0xBD5CDB24, 0xB6F5904E) }, 
        { FName("W_IRR_WeaponOverview_Lines"), FGuid(0x6A5D1CAB, 0xBA7636A9, 0x8F5F078C, 0x4B797229) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D CurrentMousePos = FVector2D(0, 0);
    float Spacing = 80;
    int32 Attempts = 5;
    float Major Axis = 600;
    float Minor Axis = 300;
    bool IsTransition? = true;
    float Y Offset = 0.25;
     OnGunsmithOverview_AttachmentClicked = ;
     KeyDown = ;
     KeyUp = ;
    struct FGameplayTagContainer Attachment Filter = FGameplayTagContainer({});
    bool bIsFocusable = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Gunsmith_WeaponOverview_Lines_C* W_IRR_WeaponOverview_Lines;
    class UCanvasPanel* OverviewPanel;
    class UOverlay* Content;
    class UWidgetAnimation* FadeInOut;
    bool InspectMouseDownd;
    class ABP_ItemInspectActor_Gunsmith_C* Preview Ref;
    bool IsWeaponPreview?;
    TArray<struct FGunsmithAttachmentSlot*>* Slots;
    class UW_IRR_Gunsmith_C* GunsmithWidgetRef;
    TArray<class UW_IRR_Gunsmith_AttachmentSlot_C*>* Attachment Slots;
    bool bNeedRebuiltAttachments;

};