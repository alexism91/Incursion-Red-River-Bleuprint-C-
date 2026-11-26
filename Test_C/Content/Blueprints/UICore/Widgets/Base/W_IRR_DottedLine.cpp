class UW_IRR_DottedLine_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_DottedLine.W_IRR_DottedLine_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Tint"), FGuid(0xEC8C5C3B, 0x48298FEE, 0x933AC3B3, 0x935AF1C7) }, 
        { FName("Brush"), FGuid(0xD4954256, 0x492CDA49, 0x20F0F5A6, 0x3ECDA8A2) }, 
        { FName("EndPoint"), FGuid(0x9AE7EA52, 0x485BC971, 0x42EE3EA6, 0xDEF4F4F1) }, 
        { FName("StartPoint"), FGuid(0xCF29C360, 0x4F2E023C, 0xA2958289, 0xE0B224E4) }, 
        { FName("Spacing"), FGuid(0x204898DF, 0x43D7E9F4, 0xAC347B85, 0x904707C0) }, 
        { FName("DotSize"), FGuid(0x07917F91, 0x4BD977FF, 0x53B108BE, 0x203C69A9) }
    };
    double DotSize = 3;
    double Spacing = 10;
    struct FVector2D StartPoint = FVector2D(0, 0);
    struct FVector2D EndPoint = FVector2D(0, 0);
    class USlateBrushAsset* Brush = "SlateBrushAsset'Test_C/Content/Blueprints/UICore/Materials/WS_IRR_Dot.WS_IRR_Dot'";
    struct FLinearColor Tint = FLinearColor(0,114435, 0,109462, 0,093059, 1);
    bool bHasScriptImplementedTick = false;

};