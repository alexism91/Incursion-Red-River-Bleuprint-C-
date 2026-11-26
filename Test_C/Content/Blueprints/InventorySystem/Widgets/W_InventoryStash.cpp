class UW_InventoryStash_C : public UInventoryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryStash.W_InventoryStash_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryStash.W_InventoryStash_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryStash.W_InventoryStash_C:ExecuteUbergraph_W_InventoryStash'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Selected"), FGuid(0x3BD049AE, 0x4EA03D30, 0x6EFDD38B, 0x1102F795) }, 
        { FName("CurrentIndex"), FGuid(0xA3F9CF6E, 0x47DC4882, 0x75CEBCB3, 0x8BA2BE78) }, 
        { FName("ButtonWidgets"), FGuid(0x1E899149, 0x42677A16, 0xDB954E88, 0x7E18F89F) }, 
        { FName("Index"), FGuid(0x7F676937, 0x41D115D5, 0x1E6BE3BE, 0x08103CFC) }, 
        { FName("Containers"), FGuid(0x955126C8, 0x4B939578, 0x0E7E7AAC, 0x01A58660) }, 
        { FName("AdditionalStorageTab"), FGuid(0xBD12958B, 0x7F2B341A, 0xB35C49FE, 0x68FB13F2) }, 
        { FName("AmmoBox"), FGuid(0x6B1C3331, 0x032B3098, 0xAEB58745, 0x6BC07FC4) }, 
        { FName("GearBox"), FGuid(0x9B54680D, 0x363D37CA, 0x88F840C6, 0x7F63BCA3) }, 
        { FName("MedicalBox"), FGuid(0xEFCE049F, 0x606C3304, 0x8E920774, 0x05047100) }, 
        { FName("Sort"), FGuid(0xF95F0A3E, 0xD76A300D, 0x98183FC1, 0xBA4A894A) }, 
        { FName("SortAdditionalStorage"), FGuid(0xB7AA7344, 0x4DA87D45, 0xD8B4DC9A, 0x524BA845) }, 
        { FName("Stash"), FGuid(0xB0645AE4, 0x700E39A1, 0x8BD301A3, 0x5A701CB1) }, 
        { FName("StashFilterTab"), FGuid(0xE35A2A26, 0x4CC7336D, 0x9BF2FBDD, 0x96F40596) }, 
        { FName("SubCategorySwitcher"), FGuid(0xD52F8CE1, 0x4FB235CA, 0xAB984C64, 0xD4BE5914) }, 
        { FName("W_InventoryAdditionalStorageHeader"), FGuid(0x164A5754, 0x4AE034FC, 0xB144EB8B, 0x1FCD30EB) }, 
        { FName("W_IRR_Background"), FGuid(0x5DF714CD, 0xF4F53C68, 0x806BC12C, 0xAB6CD037) }, 
        { FName("W_IRR_Background_1"), FGuid(0x46242801, 0x73E73FD7, 0x909EA8DC, 0x6C7685AB) }, 
        { FName("W_IRR_Line"), FGuid(0xD992DE6F, 0x8FB338DF, 0xB91601F7, 0xD4B7BF97) }, 
        { FName("W_IRR_Line_1"), FGuid(0xE265A795, 0x8E1E36C9, 0x8E615A14, 0xE6841C59) }, 
        { FName("W_IRR_ResourceItem"), FGuid(0xAB1A5227, 0x4DFE81A6, 0x7CF4689C, 0xE696370E) }, 
        { FName("W_IRR_ResourceItem_1"), FGuid(0xB0A16E27, 0x4BA7B085, 0x69CEF083, 0x8B3C46D8) }, 
        { FName("W_IRR_ResourceItem_2"), FGuid(0xD000096F, 0x435DD392, 0x32C3F088, 0x0279352F) }, 
        { FName("W_IRR_ResourceItem_3"), FGuid(0x20EB5BE8, 0x47239B93, 0xB7D338AC, 0xDA427843) }, 
        { FName("W_IRR_SearchBox_100"), FGuid(0x86664D17, 0x43930C47, 0x049D47B1, 0xB1AC20B7) }, 
        { FName("W_StashSection"), FGuid(0x583B3AA4, 0x4B0A3C88, 0xB9EEF863, 0x0D0046AC) }, 
        { FName("W_StashSection_1"), FGuid(0x8D5F9A17, 0xC0E93A8F, 0xB85DC746, 0x56E55628) }, 
        { FName("WeaponsBox"), FGuid(0x9AE74BF8, 0xC1883C50, 0x9A21F193, 0x76E19388) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_ScrollBox_C* WeaponsBox;
    class UW_InventorySection_C* W_StashSection_1;
    class UW_InventorySection_C* W_StashSection;
    class UW_IRR_SearchBox_C* W_IRR_SearchBox_100;
    class UW_IRR_ResourceItem_C* W_IRR_ResourceItem_3;
    class UW_IRR_ResourceItem_C* W_IRR_ResourceItem_2;
    class UW_IRR_ResourceItem_C* W_IRR_ResourceItem_1;
    class UW_IRR_ResourceItem_C* W_IRR_ResourceItem;
    class UW_IRR_Line_C* W_IRR_Line_1;
    class UW_IRR_Line_C* W_IRR_Line;
    class UW_IRR_Background_C* W_IRR_Background_1;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InventoryAdditionalStorageHeader_C* W_InventoryAdditionalStorageHeader;
    class UWidgetSwitcher* SubCategorySwitcher;
    class UW_IRR_HorizontalTabList_C* StashFilterTab;
    class UW_SpatialContainer_C* Stash;
    class UW_IRR_Button_Small_C* SortAdditionalStorage;
    class UW_IRR_Button_Small_C* Sort;
    class UW_IRR_ScrollBox_C* MedicalBox;
    class UW_IRR_ScrollBox_C* GearBox;
    class UW_IRR_ScrollBox_C* AmmoBox;
    class UW_IRR_HorizontalTabList_C* AdditionalStorageTab;
    TArray<class UContainerElementWidget*>* Containers;
    int Index;
    TArray<class UWB_SingleButton_C*>* ButtonWidgets;
    int CurrentIndex;
    class UWB_SingleButton_C* Selected;

};