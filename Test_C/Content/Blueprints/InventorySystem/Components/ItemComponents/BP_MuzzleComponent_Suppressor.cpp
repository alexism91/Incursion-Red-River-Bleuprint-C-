class UBP_MuzzleComponent_Suppressor_C : public UMuzzleComponent
{
public:
    bool bUseSuppressedAudio = true;
    class UNiagaraSystem* FP_NiagaraMuzzleEffect = "NiagaraSystem'Test_C/Content/ThirdParty/MuzzleFlash3D/FX/Modern/NS_IRR_MuzzleFlash_FP_NoFlash.NS_IRR_MuzzleFlash_FP_NoFlash'";
    class UNiagaraSystem* TP_NiagaraMuzzleEffect = "NiagaraSystem'Test_C/Content/ThirdParty/MuzzleFlash3D/FX/Modern/NS_IRR_MuzzleFlash_TP_NoFlash.NS_IRR_MuzzleFlash_TP_NoFlash'";
    float OverheatEmissiveExtension = 12;
    float OverheatThreshold = 0.25;
    class UNiagaraSystem* NiagaraOverheatEffect = "NiagaraSystem'Test_C/Content/ThirdParty/MuzzleFlash3D/FX/Modern/NS_Fumes.NS_Fumes'";
    class UNiagaraComponent* MuzzleFlashNiagaraComponent = "NiagaraComponent'Test_C/Content/Blueprints/InventorySystem/Components/ItemComponents/BP_MuzzleComponent_Suppressor.Default__BP_MuzzleComponent_Suppressor_C:MuzzleFlash'";
    class UNiagaraComponent* FumesNiagaraComponent = "NiagaraComponent'Test_C/Content/Blueprints/InventorySystem/Components/ItemComponents/BP_MuzzleComponent_Suppressor.Default__BP_MuzzleComponent_Suppressor_C:Fumes'";
};