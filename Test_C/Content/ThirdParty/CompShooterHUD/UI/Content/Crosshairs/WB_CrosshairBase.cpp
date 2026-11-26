class UWB_CrosshairBase_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/WB_CrosshairBase.WB_CrosshairBase_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/WB_CrosshairBase.WB_CrosshairBase_C:FadeScope_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/WB_CrosshairBase.WB_CrosshairBase_C:ExecuteUbergraph_WB_CrosshairBase'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CrosshairScale"), FGuid(0x80A0FDAB, 0x4C1B790A, 0x6EAAFA83, 0xFDAF7097) }, 
        { FName("DeltaTime"), FGuid(0x0F1C2988, 0x4C02A885, 0x2B02C08F, 0xA298C59A) }, 
        { FName("CharacterMovementComponent"), FGuid(0x300800E4, 0x4EE81225, 0x1A5B22A8, 0xD0D51629) }, 
        { FName("UseMovementSensitivity"), FGuid(0xABDA98CC, 0x4636294B, 0xFB32439E, 0x68CE1C2F) }, 
        { FName("CrosshairMap"), FGuid(0xD93FBAA7, 0x45E9E0F6, 0x7D00D591, 0x319942D8) }, 
        { FName("OnCrosshairRemoved"), FGuid(0x96AF3A4B, 0x424919C5, 0x89DE2296, 0x00FBDCA1) }, 
        { FName("CrosshairType"), FGuid(0xD04EA882, 0x476795AC, 0x044BE4B6, 0x555560ED) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnCrosshairRemoved = ;
    struct FVector2D CrosshairScale = FVector2D(0, 0);
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UImage* ScopeMask;
    class UOverlay* OV_ScopeLayer;
    class UOverlay* OV_Scope;
    class UOverlay* OV_ProgressBar;
    class UOverlay* OV_HitIndicator;
    class UOverlay* OV_Crosshair;
    class UBorder* b_ScopeColor;
    class UBorder* B_ProgressBar;
    class UBorder* B_HitIndicator;
    class UBorder* B_Crosshair;
    class UWidgetAnimation* FadeScope;
    E_CrosshairType CrosshairType;
    TMap<E_CrosshairType, class UUserWidget*>* CrosshairMap;
    bool UseMovementSensitivity;
    class UCharacterMovementComponent* CharacterMovementComponent;
    double DeltaTime;

};