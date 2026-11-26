class UWB_ColorPicker_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_ColorPicker.WB_ColorPicker_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_ColorPicker.WB_ColorPicker_C:ToggleColors_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_ColorPicker.WB_ColorPicker_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_ColorPicker.WB_ColorPicker_C:ExecuteUbergraph_WB_ColorPicker'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ActiveSlider"), FGuid(0xEB31C112, 0x4E564DCC, 0x491D949A, 0xC4EFC857) }, 
        { FName("DefaultColor"), FGuid(0xF7FD0F64, 0x4F90C324, 0xBEE54EA6, 0x87D85753) }, 
        { FName("IsOpened"), FGuid(0x9980528E, 0x4BA8A543, 0x3A4D0280, 0x1A5A94FF) }, 
        { FName("OnColorChanged"), FGuid(0x94D973BB, 0x43AB65C3, 0x4AEA438B, 0xD004F851) }, 
        { FName("CurrentColor"), FGuid(0x93F637EE, 0x49A4F021, 0x9B92B6B1, 0xD2F4169D) }, 
        { FName("SDynamicMaterial"), FGuid(0x1E242A72, 0x45AD8F76, 0xE54086B9, 0xC2E1FCD5) }, 
        { FName("VDynamicMaterial"), FGuid(0x9089E978, 0x4B5DDC0C, 0x135EB384, 0x74870914) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor CurrentColor = FLinearColor(0, 0, 0, 0);
     OnColorChanged = ;
    struct FLinearColor DefaultColor = FLinearColor(1, 1, 1, 1);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USlider* VSlider;
    class USizeBox* VArrow;
    class USlider* SSlider;
    class USizeBox* SArrow;
    class UButton* Dummy3;
    class UButton* Dummy2;
    class UButton* Dummy1;
    class USlider* ColorSlider;
    class UButton* ColorButton;
    class UBorder* ColorBorder;
    class USizeBox* ColorArrow;
    class UWidgetAnimation* ToggleColors;
    class UMaterialInstanceDynamic* VDynamicMaterial;
    class UMaterialInstanceDynamic* SDynamicMaterial;
    bool IsOpened;
    class USlider* ActiveSlider;

};