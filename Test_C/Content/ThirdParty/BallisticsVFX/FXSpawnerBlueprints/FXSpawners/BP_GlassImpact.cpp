class ABP_GlassImpact_C : public AStaticMeshActor
{
public:
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/ThirdParty/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BP_GlassImpact.BP_GlassImpact_C:FadeOut_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BP_GlassImpact.BP_GlassImpact_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BP_GlassImpact.BP_GlassImpact_C:ExecuteUbergraph_BP_GlassImpact'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<class UMaterial*> GlassDecals = {
        "Material'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Bulletproof_01.M_BulletDecal_Glass_Bulletproof_01'",
        "Material'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Bulletproof_02.M_BulletDecal_Glass_Bulletproof_02'",
        "Material'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Bulletproof_03.M_BulletDecal_Glass_Bulletproof_03'",
        "Material'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Common_01.M_BulletDecal_Glass_Common_01'",
        "Material'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Common_02.M_BulletDecal_Glass_Common_02'",
        "Material'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Common_04.M_BulletDecal_Glass_Common_04'",
        "Material'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Common_05.M_BulletDecal_Glass_Common_05'",
        "Material'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Common_03.M_BulletDecal_Glass_Common_03'"
    };
    TArray<class UMaterialInstanceConstant*> GlassDecals_Variant_B = {
        "MaterialInstanceConstant'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Windshield_01.M_BulletDecal_Glass_Windshield_01'",
        "MaterialInstanceConstant'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Windshield_06.M_BulletDecal_Glass_Windshield_06'",
        "MaterialInstanceConstant'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Windshield_07.M_BulletDecal_Glass_Windshield_07'",
        "MaterialInstanceConstant'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Windshield_08.M_BulletDecal_Glass_Windshield_08'",
        "MaterialInstanceConstant'Test_C/Content/ThirdParty/BulletImpactVFX/BulletHoleDecals/Materials/M_BulletDecal_Glass_Windshield_09.M_BulletDecal_Glass_Windshield_09'"
    };
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'Test_C/Content/ThirdParty/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BP_GlassImpact.Default__BP_GlassImpact_C:StaticMeshComponent0'";
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'Test_C/Content/ThirdParty/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BP_GlassImpact.Default__BP_GlassImpact_C:StaticMeshComponent0'";
    class UTimelineComponent* FadeOut;
    class UMaterialInstanceDynamic* DynamicMat;
private:
    float FadeOut_NewTrack_0_37FA80134DE18ED0B69FED8A7919401D;
    byte FadeOut__Direction_37FA80134DE18ED0B69FED8A7919401D;

};