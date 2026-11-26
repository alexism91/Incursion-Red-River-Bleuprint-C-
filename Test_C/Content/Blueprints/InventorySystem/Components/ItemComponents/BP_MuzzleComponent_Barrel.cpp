class UBP_MuzzleComponent_Barrel_C : public UMuzzleComponent
{
public:
    class UNiagaraSystem* FP_NiagaraMuzzleEffect = "NiagaraSystem'Test_C/Content/ThirdParty/MuzzleFlash3D/FX/Modern/NS_IRR_MuzzleFlash_FP.NS_IRR_MuzzleFlash_FP'";
    class UNiagaraSystem* TP_NiagaraMuzzleEffect = "NiagaraSystem'Test_C/Content/ThirdParty/MuzzleFlash3D/FX/Modern/NS_IRR_MuzzleFlash_TP.NS_IRR_MuzzleFlash_TP'";
    float OverheatThreshold = 0.25;
    class UNiagaraSystem* NiagaraOverheatEffect = "NiagaraSystem'Test_C/Content/ThirdParty/MuzzleFlash3D/FX/Modern/NS_Fumes.NS_Fumes'";
    class UNiagaraComponent* MuzzleFlashNiagaraComponent = "NiagaraComponent'Test_C/Content/Blueprints/InventorySystem/Components/ItemComponents/BP_MuzzleComponent_Barrel.Default__BP_MuzzleComponent_Barrel_C:MuzzleFlash'";
    class UNiagaraComponent* FumesNiagaraComponent = "NiagaraComponent'Test_C/Content/Blueprints/InventorySystem/Components/ItemComponents/BP_MuzzleComponent_Barrel.Default__BP_MuzzleComponent_Barrel_C:Fumes'";
    bool bAutoActivate = true;
};