class UW_FireModeElement_C : public UShowMagCapacityWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_FireModeElement.W_FireModeElement_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/WeaponUI/W_FireModeElement.W_FireModeElement_C:ExecuteUbergraph_W_FireModeElement'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SelectedFont"), FGuid(0xAFF8B6B4, 0x4E16D352, 0xFFDB7F98, 0xFA9EFF6B) }, 
        { FName("NonSelectedFont"), FGuid(0x15CCE04E, 0x42B88C5E, 0xA83AFBBB, 0xEC8F72BA) }, 
        { FName("BulletsPerTag"), FGuid(0x20D02D62, 0x40D5B0C5, 0xF578B0AB, 0x1E30D7F0) }, 
        { FName("FireModeTag"), FGuid(0xF47A7896, 0x4205D5E6, 0x8ACC19AD, 0x7F07E6D3) }, 
        { FName("Background"), FGuid(0xCF087056, 0x52813728, 0xA66F6510, 0x11B1C12B) }, 
        { FName("Bullet"), FGuid(0x4690D281, 0x42113E97, 0x93AC72D1, 0x9A698ED9) }, 
        { FName("Bullet_1"), FGuid(0x96753C3C, 0xC18F3877, 0xA93FB074, 0x6965F414) }, 
        { FName("Bullet_2"), FGuid(0x357488A3, 0xEC15312B, 0x84FBE32E, 0x846FBFD8) }, 
        { FName("Bullet_3"), FGuid(0x78F96FC7, 0xB29538B8, 0x992EF136, 0x194E33A7) }, 
        { FName("Bullet_4"), FGuid(0x404AC3AA, 0xB0873FC9, 0xB80BC96B, 0xAEA50111) }, 
        { FName("BulletBorder"), FGuid(0xD665D03A, 0x487ED15C, 0x8B499693, 0xBC3DA559) }, 
        { FName("BulletBox"), FGuid(0x44D266D3, 0x280938CE, 0x994A7D01, 0x362D370E) }, 
        { FName("FireModeNameText"), FGuid(0xC809B748, 0xB3AA30D4, 0xA144E343, 0x2773C55F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag FireModeTag = {
        "TagName": FName("None")
    };
    TMap<struct FGameplayTag, int32> BulletsPerTag = {
        { {
            "TagName": FName("Weapon.FireMode.Semi")
        }, 1 }, 
        { {
            "TagName": FName("Weapon.FireMode.Burst")
        }, 3 }, 
        { {
            "TagName": FName("Weapon.FireMode.Auto")
        }, 5 }
    };
    struct FDataTableRowHandle NonSelectedFont = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("ReadabilityDetailExtra_Bold")
    };
    struct FDataTableRowHandle SelectedFont = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("ReadabilityDetailTitle_Bold")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* FireModeNameText;
    class UHorizontalBox* BulletBox;
    class UBorder* BulletBorder;
    class UImage* Bullet_4;
    class UImage* Bullet_3;
    class UImage* Bullet_2;
    class UImage* Bullet_1;
    class UImage* Bullet;
    class UBorder* Background;

};