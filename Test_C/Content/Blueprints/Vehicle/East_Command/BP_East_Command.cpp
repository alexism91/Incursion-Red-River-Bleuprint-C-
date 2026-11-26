class ABP_East_Command_C : public ABP_BaseVehicle_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Vehicle/East_Command/BP_East_Command.BP_East_Command_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/Vehicle/East_Command/BP_East_Command.BP_East_Command_C:InheritableComponentHandler'";
    class UVehicleNavObstacleComponent* NavObstacle = "VehicleNavObstacleComponent'Test_C/Content/Blueprints/Vehicle/East_Command/BP_East_Command.Default__BP_East_Command_C:NavObstacle'";
    class UVehicleCrowdObstacleComponent* CrowdObstacle = "VehicleCrowdObstacleComponent'Test_C/Content/Blueprints/Vehicle/East_Command/BP_East_Command.Default__BP_East_Command_C:CrowdObstacle'";
    class UIRRSignificanceComponent* Significance = "IRRSignificanceComponent'Test_C/Content/Blueprints/Vehicle/East_Command/BP_East_Command.Default__BP_East_Command_C:Significance'";
    class UNiagaraSystem* WreckEffect = "NiagaraSystem'Test_C/Content/Particles/Vehicles/ConvoyWreckFire/NS_ConvoyWreckFire_V2.NS_ConvoyWreckFire_V2'";
    TArray<struct FVehicleWreckFireVariant> WreckFireMainVariants = {
        {
            "System": "NiagaraSystem'Test_C/Content/ThirdParty/M5VFXVOL2/Niagara/Fire/NFire_15.NFire_15'",
            "Weight": 3,
            "ScaleRange": FVector2D(0,9, 1,1),
            "ScaleParameter": FName("None"),
            "ScorchRadius": 0,
            "Sink": 0
        },
        {
            "System": "NiagaraSystem'Test_C/Content/ThirdParty/M5VFXVOL2/Niagara/Fire/NFire_10.NFire_10'",
            "Weight": 1,
            "ScaleRange": FVector2D(1, 1,2),
            "ScaleParameter": FName("None"),
            "ScorchRadius": 0,
            "Sink": 0
        }
    };
    TArray<struct FVehicleWreckFireVariant> WreckFireVariants = {
        {
            "System": "NiagaraSystem'Test_C/Content/ThirdParty/M5VFXVOL2/Niagara/Fire/NFire_08.NFire_08'",
            "Weight": 2,
            "ScaleRange": FVector2D(0,7, 0,9),
            "ScaleParameter": FName("None"),
            "ScorchRadius": 0,
            "Sink": 0
        },
        {
            "System": "NiagaraSystem'Test_C/Content/ThirdParty/M5VFXVOL2/Niagara/Fire/NFire_12.NFire_12'",
            "Weight": 1,
            "ScaleRange": FVector2D(0,7, 0,9),
            "ScaleParameter": FName("None"),
            "ScorchRadius": 0,
            "Sink": 0
        },
        {
            "System": "NiagaraSystem'Test_C/Content/ThirdParty/M5VFXVOL2/Niagara/Fire/NFire_02.NFire_02'",
            "Weight": 3,
            "ScaleRange": FVector2D(0,9, 1,2),
            "ScaleParameter": FName("None"),
            "ScorchRadius": 0,
            "Sink": 0
        },
        {
            "System": "NiagaraSystem'Test_C/Content/ThirdParty/M5VFXVOL2/Niagara/Fire/NFire_00.NFire_00'",
            "Weight": 2,
            "ScaleRange": FVector2D(1, 1,4),
            "ScaleParameter": FName("None"),
            "ScorchRadius": 0,
            "Sink": 0
        }
    };
    TArray<struct FVehicleWreckFireVariant> WreckGroundFireVariants = {
        {
            "System": "NiagaraSystem'Test_C/Content/ThirdParty/M5VFXVOL2/Niagara/Fire/NFire_Grd_00.NFire_Grd_00'",
            "Weight": 1,
            "ScaleRange": FVector2D(0,8, 1,1),
            "ScaleParameter": FName("None"),
            "ScorchRadius": 0,
            "Sink": 0
        },
        {
            "System": "NiagaraSystem'Test_C/Content/ThirdParty/M5VFXVOL2/Niagara/Fire/NFire_Grd_01.NFire_Grd_01'",
            "Weight": 1,
            "ScaleRange": FVector2D(0,8, 1,1),
            "ScaleParameter": FName("None"),
            "ScorchRadius": 0,
            "Sink": 0
        },
        {
            "System": "NiagaraSystem'Test_C/Content/ThirdParty/M5VFXVOL2/Niagara/Fire/NFire_Grd_02.NFire_Grd_02'",
            "Weight": 1,
            "ScaleRange": FVector2D(0,8, 1,1),
            "ScaleParameter": FName("None"),
            "ScorchRadius": 0,
            "Sink": 0
        }
    };
    class UMaterial* WreckFireScorchDecal = "Material'Test_C/Content/ThirdParty/EvolveStudio/MasterAssets/VFX/Materials/M_ScorchMark_01.M_ScorchMark_01'";
    bool bWreckFireLight = false;
    class UVehicleAudioData* AudioData = "VehicleAudioData'Test_C/Content/Blueprints/Vehicle/Tiger_Tank/DA_Tiger_Tank.DA_Tiger_Tank'";
    class UVehicleWheelComponent* Wheel_RR1;
    class UVehicleWheelComponent* Wheel_RL1;

};