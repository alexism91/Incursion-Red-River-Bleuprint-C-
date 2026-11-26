class AUltra_Dynamic_Weather_C : public AIRREnhancedUltraDynamicWeather
{
public:
    int32 NumReplicatedProperties = 32;
    TArray<class UNiagaraComponent*> ComponentTemplates = {
        "NiagaraComponent'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C:NODE_AddNiagaraComponent-3'",
        "NiagaraComponent'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C:NODE_AddNiagaraComponent-4'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C:ExecuteUbergraph_Ultra_Dynamic_Weather'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Wind Direction = 180;
    double Transition Duration = -1;
    bool Particle Collision Enabled = true;
    double Ceiling Check Height = 8000;
    double Spawn Direction Forward Bias = 0.9;
    double Spawn Box Height = 600;
    double Max Spawn Distance = 2000;
    double Spawn Distance Distribution = 1;
    double Minimum Particle Distance = 45;
    struct FVector World Spawn Offset = FVector(0, 0, 0);
    double Camera Forward Spawn Offset = 50;
    enum ECollisionChannel Weather Particle Collision Channel = ECollisionChannel::ECC_GameTraceChannel2;
    bool Enable Rain Particles = true;
    double Rain Particle Spawn Count = 20000;
    double Rain Drops Scale = 1;
    double Rain Velocity Randomization = 1;
    struct FLinearColor Rain Particle Color Multiplier = FLinearColor(1, 1, 1, 1);
    double Rain Drops Alpha = 1;
    double Rain Refraction Intensity = 1;
    double Rain Ambient Light Intensity = 1;
    float Rain Particles Time Dilation = 1;
    bool Render Raindrop Decals = true;
    double Splash Frequency = 1;
    double Splash Particles Scale = 1;
    double Splash Droplets Scale = 1;
    double Splash Particles Alpha = 1;
    double Raindrop Decal Scale = 1;
    double Max Duplicate Splash Range = 22;
    bool Enable Snow Particles = true;
    double Snow Particle Spawn Count = 20000;
    double Snow Flakes Scale = 1;
    double Snow Velocity Randomization = 1;
    double Snow Flakes Alpha = 1;
    double Snow Ambient Light Intensity = 1;
    double Snow Flakes Surface Stick Duration = 1.5;
    double Snow Particles Time Dilation = 1;
    struct FLinearColor Snow Particle Color Multiplier = FLinearColor(1, 1, 1, 1);
    bool Spawn Lightning Flashes = true;
    double Lightning Flash Frequency = 14;
    double Lightning Flash_Timing_Randomization = 1;
    struct FLinearColor Lightning Effect Color = FLinearColor(1, 1, 1, 1);
    bool Lightning Flash Light Source = true;
    struct FLinearColor Lightning Flash Light Source Color = FLinearColor(0,495, 0,612833, 1, 1);
    double Maximum Lightning Flash Light Intensity = 14;
    bool Lightning Flashes Cast Shadows = true;
    bool Lightning Flashes Cast Light Shaft Bloom = true;
    double Lightning Flash Light Shaft Intensity = 1.2;
    double Lightning Flash Minimum Distance = 155000;
    double Lightning Flash Maximum Distance = 650000;
    bool Enable Obscured Lightning = true;
    double Obscured Lightning Spawn Rate = 5;
    double Max Fog Particle Percentage (Rain) = 3;
    double Fog Particle Intensity (Rain) = 3.5;
    double Max Fog Particle Percentage (Snow) = 3;
    double Fog Particle Intensity (Snow) = 5;
    double Max Fog Particle Percentage (Dust) = 8;
    double Fog Particle Intensity (Dust) = 10;
    double Fog Particles Draw Distance = 2500;
    double Max Material Wetness = 1;
    double Max Material Snow Coverage = 1;
    double Max Dust Coverage = 0.5;
    bool Material Effects Take Time to Change = true;
    double Time for Materials to Get Wet = 60;
    double Time for Materials to Dry Out = 90;
    double Time for Materials to Gather Snow = 40;
    double Time for Snow to Melt = 90;
    double Time for Materials to Gather Dust = 30;
    double Amount of Snow to Turn to Wetness when Melted = 0.75;
    double Wind Force Scale = 2000;
    double Weather Type Change Minimum Interval = 200;
    double Weather Type Change Maximum Interval = 300;
    double Transition Length = 0.3499999940395355;
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Spring) = {
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Blizzard.Snow_Blizzard'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'", 0.7 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Cloudy.Cloudy'", 1.3 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Foggy.Foggy'", 0.35 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Light.Rain_Light'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Light.Snow_Light'", 0.35 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Overcast.Overcast'", 0.8 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Partly_Cloudy.Partly_Cloudy'", 1.4 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain.Rain'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow.Snow'", 0.2 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Thunderstorm.Rain_Thunderstorm'", 0.8 }
    };
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Summer) = {
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Blizzard.Snow_Blizzard'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'", 0.7 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Cloudy.Cloudy'", 1.2 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Foggy.Foggy'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Light.Rain_Light'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Light.Snow_Light'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Overcast.Overcast'", 0.7 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Partly_Cloudy.Partly_Cloudy'", 1.4 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain.Rain'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow.Snow'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Thunderstorm.Rain_Thunderstorm'", 0.8 }
    };
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Autumn) = {
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Blizzard.Snow_Blizzard'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'", 0.3 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Cloudy.Cloudy'", 1.2 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Foggy.Foggy'", 0.5 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Light.Rain_Light'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Light.Snow_Light'", 0.25 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Overcast.Overcast'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Partly_Cloudy.Partly_Cloudy'", 1.4 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain.Rain'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow.Snow'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Thunderstorm.Rain_Thunderstorm'", 0.8 }
    };
    TMap<class UUDS_Weather_Settings_C*, double> Weather Type Probabilities (Winter) = {
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Blizzard.Snow_Blizzard'", 0.8 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'", 0.1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Cloudy.Cloudy'", 1.3 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Foggy.Foggy'", 0.35 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Light.Rain_Light'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow_Light.Snow_Light'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Overcast.Overcast'", 1.2 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Partly_Cloudy.Partly_Cloudy'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain.Rain'", 0 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Snow.Snow'", 1 }, 
        { "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Rain_Thunderstorm.Rain_Thunderstorm'", 0 }
    };
    bool Blend Season Probabilities = true;
    bool Avoid Extreme Cloud Coverage Shifts = true;
    bool Avoid Changing Directly from Snow to Rain (Or Vice Versa) = true;
    double Extreme Cloud Coverage Shift Theshold = 6;
    double Rain Volume = 1;
    double Distant Thunder Volume = 1;
    double Close Thunder Volume = 1;
    double Close Thunder Delay Per KM = 0.15;
    double Wind Volume = 1;
    double Wind Whistling Volume = 1;
    double Wind Directional Source Intensity Scale = 1;
    double Lightning Bolt Length = 75000;
    double Lightning Flash Minimum Length = 1.75;
    double Lightning Flash Maximum Length = 2.200000047683716;
    double Lightning Flash Max Angle from Forward = 100;
    double Lightning Flash Length = 1.5;
    struct FTimerHandle Lightning Flash Timer = {
        "Handle": 0
    };
    class UCurveFloat* Lightning Flash Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/Lightning_Flash_Strength.Lightning_Flash_Strength'";
    struct FVector2D Summer Temperature Min and Max = FVector2D(55, 80);
    struct FVector2D Autumn Temperature Min and Max = FVector2D(40, 70);
    struct FVector2D Winter Temperature Min and Max = FVector2D(20, 55);
    struct FVector2D Spring Temperature Min and Max = FVector2D(30, 65);
    double Daytime Temperature Bias = 0.6;
    double Nighttime Temperature Bias = -0.6;
    double Morning/Evening Temperature Bias = 0.3;
    double Overcast Temperature Bias = -0.3;
    double Raining Temperature Bias = -0.3;
    double Snowing Temperature Bias = -1.5;
    double Foggy Temperature Bias = -0.2;
    double Dusty Temperature Bias = -0.3;
    double Randomize Temperature = 5;
    double Interior Temperature = 72;
    double Interior Insulation = 0.85;
    double Weather Speed = 1;
    int32 Random Seed = -1;
    struct FVector Custom Control Point Location = FVector(0, 0, 0);
    double Render Target Area for Dynamic Snow/Dust = 8000;
    double Render Target Area for Dynamic Puddles = 15000;
    double Snow Depth = 14;
    double Dust Depth = 7;
    bool Apply Dynamic Trails to Snow = true;
    bool Apply Dynamic Trails to Dust = true;
    double Snow Depth WPO Distance = 6000;
    double Snow/Dust Z Normal Cutoff = 0.6;
    double Snow/Dust Z Normal Falloff = 1;
    double Snow/Dust Texture Scale = 350;
    double Snow/Dust Parallax Sample Scale = 1;
    double Snow/Dust Compression Brush Spread = 1.3;
    double Snow/Dust Compression Brush Scatter = 5;
    double Snow/Dust Compression Brush Size Scatter = 0.6;
    double Snow/Dust Compression Fade Speed Idle = 1;
    double Snow/Dust Compression Fade Speed Active = 5;
    double Max Snow/Dust Compression Brush Size = 300;
    double Snow/Dust Compression Normal Map Intensity = 22;
    double Pixel Normal Snow/Dust Buildup = 1.5;
    double DLWE Interactions Update Period = 0.1;
    struct FVector Player Camera Location = FVector(0, 0, 0);
    struct FVector Control Point Location = FVector(0, 0, 0);
    bool Apply Interaction Ripples to Puddles = true;
    double Puddles Z Normal Cutoff = 0.949999988079071;
    double Puddles Z Normal Falloff = 1;
    double Puddle Coverage = 0.26;
    double Base Wetness when Raining = 0.75;
    double Base Wetness when Clear = 0.5;
    double Puddle Sharpness = 40;
    double Water Roughness = 0.02;
    double Ripple Spread = 140;
    double Ripple Fade Speed = 0.75;
    double Puddle Normals Intensity = 2.5;
    double Variation Clouds Scale = 20000;
    double WOV Target Size = 5000000;
    double WOV Target Update Threshold (Inside Volume) = 0.005;
    double WOV Target Update Threshold (Outside Volume) = 0.03;
    enum UDS_DLWE_Mode Fallback DLWE Mode = UDS_DLWE_Mode::NewEnumerator2;
    int32 Mask Target Resolution = 2000;
    double Tiling Ripples Scale = 130;
    struct FVector Custom Lightning Location = FVector(0, 0, 0);
    bool Using Global Weather State = true;
    struct FVector Custom Lightning Target = FVector(0, 0, 0);
    struct FVector Current Lightning Location = FVector(0, 0, 0);
    FSoftObjectPath DLWE_MaskTarget = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Weather/DLWE_MaskTarget.DLWE_MaskTarget");
    struct FVector DLWE_RenderTarget_Center = FVector(0, 0, 0);
    struct FVector DLWE_Recenter_Offset = FVector(0, 0, 0);
    enum UDS_DLWE_Mode Current DLWE Mode = UDS_DLWE_Mode::NewEnumerator2;
    TArray<struct FVector2D> Cloud Reference Array = {
        FVector2D(124, 119),
        FVector2D(156, 127),
        FVector2D(191, 134),
        FVector2D(193, 146),
        FVector2D(183, 143),
        FVector2D(151, 180),
        FVector2D(87, 184),
        FVector2D(88, 169),
        FVector2D(84, 141),
        FVector2D(112, 137),
        FVector2D(144, 131),
        FVector2D(139, 126),
        FVector2D(126, 153),
        FVector2D(120, 150),
        FVector2D(103, 137),
        FVector2D(136, 165),
        FVector2D(170, 186),
        FVector2D(197, 202),
        FVector2D(175, 224),
        FVector2D(164, 199),
        FVector2D(122, 167),
        FVector2D(129, 142),
        FVector2D(116, 136),
        FVector2D(64, 148),
        FVector2D(69, 145),
        FVector2D(95, 133),
        FVector2D(125, 139),
        FVector2D(144, 132),
        FVector2D(140, 119),
        FVector2D(137, 72),
        FVector2D(107, 100),
        FVector2D(111, 114),
        FVector2D(137, 66),
        FVector2D(136, 96),
        FVector2D(150, 155),
        FVector2D(171, 167),
        FVector2D(142, 114),
        FVector2D(139, 135),
        FVector2D(110, 161),
        FVector2D(103, 151),
        FVector2D(114, 150),
        FVector2D(139, 158),
        FVector2D(163, 160),
        FVector2D(134, 135),
        FVector2D(122, 151),
        FVector2D(138, 146),
        FVector2D(143, 138),
        FVector2D(165, 169),
        FVector2D(186, 206),
        FVector2D(183, 208),
        FVector2D(153, 194),
        FVector2D(142, 170),
        FVector2D(106, 149),
        FVector2D(95, 137),
        FVector2D(91, 127),
        FVector2D(54, 121),
        FVector2D(51, 121),
        FVector2D(94, 99),
        FVector2D(139, 90),
        FVector2D(154, 114),
        FVector2D(162, 120),
        FVector2D(155, 100),
        FVector2D(80, 94),
        FVector2D(100, 87),
        FVector2D(136, 122),
        FVector2D(112, 136),
        FVector2D(119, 168),
        FVector2D(134, 183),
        FVector2D(131, 126),
        FVector2D(102, 101),
        FVector2D(120, 141),
        FVector2D(122, 120),
        FVector2D(110, 120),
        FVector2D(111, 122),
        FVector2D(146, 117),
        FVector2D(106, 141),
        FVector2D(99, 144),
        FVector2D(115, 168),
        FVector2D(130, 134),
        FVector2D(155, 143),
        FVector2D(156, 177),
        FVector2D(156, 183),
        FVector2D(147, 183),
        FVector2D(153, 174),
        FVector2D(127, 103),
        FVector2D(130, 66),
        FVector2D(108, 86),
        FVector2D(95, 113),
        FVector2D(94, 133),
        FVector2D(110, 119),
        FVector2D(141, 76),
        FVector2D(140, 56),
        FVector2D(166, 88),
        FVector2D(191, 110),
        FVector2D(148, 115),
        FVector2D(135, 101),
        FVector2D(149, 162),
        FVector2D(165, 179),
        FVector2D(175, 177),
        FVector2D(156, 181),
        FVector2D(126, 116),
        FVector2D(91, 72),
        FVector2D(109, 121),
        FVector2D(172, 94),
        FVector2D(162, 111),
        FVector2D(125, 91),
        FVector2D(123, 80),
        FVector2D(108, 128),
        FVector2D(91, 148),
        FVector2D(79, 151),
        FVector2D(102, 118),
        FVector2D(104, 132),
        FVector2D(94, 137),
        FVector2D(143, 152),
        FVector2D(145, 159),
        FVector2D(189, 145),
        FVector2D(183, 88),
        FVector2D(136, 54),
        FVector2D(100, 82),
        FVector2D(97, 117),
        FVector2D(95, 120),
        FVector2D(101, 131),
        FVector2D(126, 84),
        FVector2D(152, 44),
        FVector2D(143, 79),
        FVector2D(155, 116),
        FVector2D(148, 111),
        FVector2D(151, 101),
        FVector2D(171, 174),
        FVector2D(172, 146),
        FVector2D(180, 131),
        FVector2D(124, 136),
        FVector2D(117, 133),
        FVector2D(105, 96),
        FVector2D(97, 91),
        FVector2D(145, 104),
        FVector2D(155, 121),
        FVector2D(123, 127),
        FVector2D(114, 123),
        FVector2D(133, 136),
        FVector2D(127, 147),
        FVector2D(88, 134),
        FVector2D(85, 104),
        FVector2D(85, 119),
        FVector2D(95, 134),
        FVector2D(140, 119),
        FVector2D(130, 88),
        FVector2D(203, 115),
        FVector2D(177, 125),
        FVector2D(128, 104),
        FVector2D(94, 104),
        FVector2D(82, 122),
        FVector2D(110, 126),
        FVector2D(137, 135),
        FVector2D(152, 128),
        FVector2D(170, 93),
        FVector2D(144, 101),
        FVector2D(117, 99),
        FVector2D(136, 99),
        FVector2D(140, 139),
        FVector2D(132, 156),
        FVector2D(143, 112),
        FVector2D(165, 110),
        FVector2D(139, 119),
        FVector2D(96, 131),
        FVector2D(78, 114),
        FVector2D(110, 129),
        FVector2D(154, 161),
        FVector2D(130, 152),
        FVector2D(119, 145),
        FVector2D(124, 145),
        FVector2D(156, 159),
        FVector2D(113, 170),
        FVector2D(100, 166),
        FVector2D(75, 136),
        FVector2D(93, 127),
        FVector2D(121, 116),
        FVector2D(137, 90),
        FVector2D(151, 105),
        FVector2D(193, 115),
        FVector2D(149, 105),
        FVector2D(119, 116),
        FVector2D(118, 112),
        FVector2D(125, 161),
        FVector2D(130, 165),
        FVector2D(154, 147),
        FVector2D(177, 131),
        FVector2D(161, 113),
        FVector2D(119, 101),
        FVector2D(100, 88),
        FVector2D(122, 129),
        FVector2D(107, 153),
        FVector2D(106, 129),
        FVector2D(120, 116),
        FVector2D(128, 138),
        FVector2D(135, 142),
        FVector2D(126, 138),
        FVector2D(106, 148),
        FVector2D(120, 177),
        FVector2D(154, 173),
        FVector2D(137, 139),
        FVector2D(158, 136),
        FVector2D(147, 132),
        FVector2D(131, 123),
        FVector2D(95, 120),
        FVector2D(88, 161),
        FVector2D(71, 159),
        FVector2D(106, 150),
        FVector2D(143, 150),
        FVector2D(172, 157),
        FVector2D(197, 148),
        FVector2D(187, 108),
        FVector2D(158, 89),
        FVector2D(126, 111),
        FVector2D(137, 103),
        FVector2D(144, 125),
        FVector2D(157, 151),
        FVector2D(154, 153),
        FVector2D(153, 129),
        FVector2D(128, 123),
        FVector2D(89, 100),
        FVector2D(79, 83),
        FVector2D(106, 130),
        FVector2D(97, 147),
        FVector2D(91, 74),
        FVector2D(92, 118),
        FVector2D(125, 152),
        FVector2D(163, 141),
        FVector2D(146, 141),
        FVector2D(116, 149),
        FVector2D(128, 153),
        FVector2D(142, 174),
        FVector2D(160, 123),
        FVector2D(160, 115),
        FVector2D(133, 137),
        FVector2D(103, 136),
        FVector2D(68, 110),
        FVector2D(95, 110),
        FVector2D(124, 107),
        FVector2D(138, 120),
        FVector2D(156, 156),
        FVector2D(172, 167),
        FVector2D(189, 164),
        FVector2D(179, 145),
        FVector2D(147, 124),
        FVector2D(103, 107),
        FVector2D(112, 103),
        FVector2D(133, 123),
        FVector2D(155, 132),
        FVector2D(126, 136),
        FVector2D(137, 140),
        FVector2D(116, 134),
        FVector2D(109, 118),
        FVector2D(116, 85),
        FVector2D(106, 76),
        FVector2D(91, 81),
        FVector2D(72, 97),
        FVector2D(91, 114),
        FVector2D(129, 123),
        FVector2D(156, 111),
        FVector2D(185, 144),
        FVector2D(160, 148),
        FVector2D(156, 134),
        FVector2D(140, 150),
        FVector2D(122, 154),
        FVector2D(157, 151),
        FVector2D(134, 183),
        FVector2D(96, 151),
        FVector2D(67, 109),
        FVector2D(111, 111),
        FVector2D(157, 90),
        FVector2D(135, 99),
        FVector2D(126, 157),
        FVector2D(155, 165),
        FVector2D(135, 154),
        FVector2D(148, 152),
        FVector2D(104, 125),
        FVector2D(97, 99),
        FVector2D(120, 90),
        FVector2D(146, 98),
        FVector2D(167, 113),
        FVector2D(129, 116),
        FVector2D(121, 101),
        FVector2D(139, 95),
        FVector2D(148, 107),
        FVector2D(145, 98),
        FVector2D(138, 79),
        FVector2D(97, 83),
        FVector2D(78, 91),
        FVector2D(124, 105),
        FVector2D(121, 98),
        FVector2D(138, 94),
        FVector2D(136, 113),
        FVector2D(119, 103),
        FVector2D(143, 90),
        FVector2D(141, 95),
        FVector2D(124, 144),
        FVector2D(130, 177),
        FVector2D(122, 183),
        FVector2D(85, 167),
        FVector2D(77, 152),
        FVector2D(101, 157),
        FVector2D(118, 126),
        FVector2D(125, 141),
        FVector2D(129, 158),
        FVector2D(147, 183),
        FVector2D(140, 173),
        FVector2D(144, 143),
        FVector2D(126, 136),
        FVector2D(110, 109),
        FVector2D(106, 75),
        FVector2D(134, 59),
        FVector2D(179, 76),
        FVector2D(160, 102),
        FVector2D(149, 70),
        FVector2D(124, 69),
        FVector2D(120, 98),
        FVector2D(160, 104),
        FVector2D(180, 118),
        FVector2D(121, 107),
        FVector2D(111, 78),
        FVector2D(116, 88),
        FVector2D(112, 104),
        FVector2D(136, 119),
        FVector2D(96, 145),
        FVector2D(75, 119),
        FVector2D(113, 107),
        FVector2D(121, 87),
        FVector2D(102, 118),
        FVector2D(87, 140),
        FVector2D(96, 158),
        FVector2D(113, 165),
        FVector2D(115, 159),
        FVector2D(149, 174),
        FVector2D(135, 141),
        FVector2D(155, 125),
        FVector2D(166, 138),
        FVector2D(144, 164),
        FVector2D(131, 174),
        FVector2D(143, 144),
        FVector2D(117, 94),
        FVector2D(85, 93),
        FVector2D(72, 117),
        FVector2D(109, 109),
        FVector2D(152, 99),
        FVector2D(161, 127),
        FVector2D(152, 103),
        FVector2D(118, 105),
        FVector2D(121, 128),
        FVector2D(108, 132),
        FVector2D(124, 121),
        FVector2D(119, 95),
        FVector2D(122, 94),
        FVector2D(114, 80),
        FVector2D(148, 95),
        FVector2D(121, 129),
        FVector2D(94, 148),
        FVector2D(90, 131),
        FVector2D(131, 115),
        FVector2D(122, 106),
        FVector2D(65, 128),
        FVector2D(55, 110),
        FVector2D(102, 114),
        FVector2D(93, 125),
        FVector2D(89, 104),
        FVector2D(137, 111),
        FVector2D(150, 128),
        FVector2D(157, 131),
        FVector2D(214, 140),
        FVector2D(210, 144),
        FVector2D(206, 162),
        FVector2D(152, 106),
        FVector2D(118, 91),
        FVector2D(78, 105),
        FVector2D(86, 129),
        FVector2D(120, 156),
        FVector2D(170, 157),
        FVector2D(160, 159),
        FVector2D(150, 98),
        FVector2D(139, 112),
        FVector2D(129, 127),
        FVector2D(107, 139),
        FVector2D(119, 145),
        FVector2D(96, 129),
        FVector2D(118, 141),
        FVector2D(115, 109),
        FVector2D(120, 114),
        FVector2D(102, 128),
        FVector2D(110, 125),
        FVector2D(124, 116),
        FVector2D(139, 104),
        FVector2D(124, 108),
        FVector2D(105, 122),
        FVector2D(86, 113),
        FVector2D(137, 114),
        FVector2D(120, 122),
        FVector2D(87, 89),
        FVector2D(106, 82),
        FVector2D(158, 105),
        FVector2D(157, 150),
        FVector2D(192, 161),
        FVector2D(235, 159),
        FVector2D(235, 173),
        FVector2D(187, 131),
        FVector2D(159, 122),
        FVector2D(128, 139),
        FVector2D(94, 164),
        FVector2D(95, 154),
        FVector2D(156, 149),
        FVector2D(139, 118),
        FVector2D(140, 126),
        FVector2D(137, 151),
        FVector2D(127, 163),
        FVector2D(117, 146),
        FVector2D(118, 148),
        FVector2D(116, 146),
        FVector2D(125, 120),
        FVector2D(127, 82),
        FVector2D(139, 93),
        FVector2D(150, 85),
        FVector2D(126, 99),
        FVector2D(130, 124),
        FVector2D(150, 125),
        FVector2D(170, 117),
        FVector2D(155, 104),
        FVector2D(146, 81),
        FVector2D(167, 123),
        FVector2D(174, 133),
        FVector2D(129, 87),
        FVector2D(137, 88),
        FVector2D(155, 121),
        FVector2D(152, 128),
        FVector2D(173, 144),
        FVector2D(190, 143),
        FVector2D(175, 182),
        FVector2D(160, 152),
        FVector2D(146, 153),
        FVector2D(128, 156),
        FVector2D(121, 168),
        FVector2D(136, 165),
        FVector2D(143, 121),
        FVector2D(107, 93),
        FVector2D(115, 105),
        FVector2D(143, 124),
        FVector2D(140, 117),
        FVector2D(125, 115),
        FVector2D(94, 130),
        FVector2D(113, 132),
        FVector2D(107, 107),
        FVector2D(126, 109),
        FVector2D(167, 124),
        FVector2D(193, 131),
        FVector2D(153, 127),
        FVector2D(125, 130),
        FVector2D(141, 135),
        FVector2D(201, 121),
        FVector2D(165, 94),
        FVector2D(145, 97),
        FVector2D(156, 163),
        FVector2D(151, 166),
        FVector2D(114, 98),
        FVector2D(114, 101),
        FVector2D(126, 111),
        FVector2D(129, 79),
        FVector2D(149, 106),
        FVector2D(168, 142),
        FVector2D(194, 140),
        FVector2D(176, 92),
        FVector2D(146, 116),
        FVector2D(103, 138),
        FVector2D(111, 129),
        FVector2D(159, 118),
        FVector2D(118, 119),
        FVector2D(70, 112),
        FVector2D(104, 124),
        FVector2D(163, 110),
        FVector2D(164, 92),
        FVector2D(170, 74),
        FVector2D(137, 60),
        FVector2D(98, 93),
        FVector2D(136, 114),
        FVector2D(139, 148),
        FVector2D(158, 164),
        FVector2D(222, 156),
        FVector2D(180, 157),
        FVector2D(155, 119),
        FVector2D(149, 106),
        FVector2D(164, 77),
        FVector2D(155, 97),
        FVector2D(158, 138),
        FVector2D(152, 186),
        FVector2D(134, 173),
        FVector2D(104, 128),
        FVector2D(119, 129),
        FVector2D(126, 130),
        FVector2D(141, 103),
        FVector2D(122, 95),
        FVector2D(143, 127),
        FVector2D(169, 112),
        FVector2D(152, 86),
        FVector2D(126, 112),
        FVector2D(131, 142),
        FVector2D(127, 168),
        FVector2D(124, 153),
        FVector2D(91, 149),
        FVector2D(65, 157),
        FVector2D(99, 161),
        FVector2D(151, 121),
        FVector2D(147, 107),
        FVector2D(154, 89),
        FVector2D(144, 110),
        FVector2D(136, 136),
        FVector2D(141, 121),
        FVector2D(140, 159),
        FVector2D(153, 147),
        FVector2D(173, 128),
        FVector2D(154, 114),
        FVector2D(140, 115),
        FVector2D(132, 105),
        FVector2D(138, 62),
        FVector2D(163, 97),
        FVector2D(169, 158),
        FVector2D(134, 148),
        FVector2D(133, 163),
        FVector2D(106, 140),
        FVector2D(125, 108),
        FVector2D(144, 126),
        FVector2D(137, 118),
        FVector2D(143, 123),
        FVector2D(138, 136),
        FVector2D(142, 145),
        FVector2D(141, 152),
        FVector2D(136, 137),
        FVector2D(133, 142),
        FVector2D(158, 183),
        FVector2D(148, 202),
        FVector2D(130, 170),
        FVector2D(136, 189),
        FVector2D(127, 147),
        FVector2D(147, 113),
        FVector2D(128, 132),
        FVector2D(160, 130),
        FVector2D(143, 151),
        FVector2D(150, 138),
        FVector2D(126, 127),
        FVector2D(107, 113),
        FVector2D(145, 118),
        FVector2D(150, 104),
        FVector2D(153, 85),
        FVector2D(124, 104),
        FVector2D(90, 92),
        FVector2D(79, 83),
        FVector2D(106, 99),
        FVector2D(124, 166),
        FVector2D(138, 176),
        FVector2D(122, 169),
        FVector2D(103, 168),
        FVector2D(111, 129),
        FVector2D(107, 117),
        FVector2D(115, 96),
        FVector2D(100, 140),
        FVector2D(88, 154),
        FVector2D(84, 150),
        FVector2D(113, 173),
        FVector2D(152, 174),
        FVector2D(164, 146),
        FVector2D(192, 155),
        FVector2D(170, 150),
        FVector2D(145, 150),
        FVector2D(158, 173),
        FVector2D(142, 139),
        FVector2D(158, 117),
        FVector2D(143, 129),
        FVector2D(143, 122),
        FVector2D(148, 136),
        FVector2D(141, 123),
        FVector2D(113, 126),
        FVector2D(108, 108),
        FVector2D(137, 144),
        FVector2D(124, 120),
        FVector2D(125, 86),
        FVector2D(142, 90),
        FVector2D(116, 123),
        FVector2D(70, 118),
        FVector2D(80, 104),
        FVector2D(92, 166),
        FVector2D(127, 191),
        FVector2D(145, 165),
        FVector2D(143, 134),
        FVector2D(143, 86),
        FVector2D(140, 115),
        FVector2D(112, 118),
        FVector2D(101, 122),
        FVector2D(104, 129),
        FVector2D(88, 127),
        FVector2D(93, 159),
        FVector2D(126, 163),
        FVector2D(149, 149),
        FVector2D(159, 143),
        FVector2D(155, 100),
        FVector2D(134, 141),
        FVector2D(115, 174),
        FVector2D(123, 145),
        FVector2D(148, 94),
        FVector2D(111, 131),
        FVector2D(88, 118),
        FVector2D(128, 114),
        FVector2D(134, 142),
        FVector2D(161, 114),
        FVector2D(121, 125),
        FVector2D(125, 153),
        FVector2D(144, 140),
        FVector2D(131, 102),
        FVector2D(156, 79),
        FVector2D(134, 107),
        FVector2D(86, 132),
        FVector2D(120, 102),
        FVector2D(134, 127),
        FVector2D(132, 184),
        FVector2D(192, 184),
        FVector2D(182, 124),
        FVector2D(150, 62),
        FVector2D(135, 104),
        FVector2D(109, 126),
        FVector2D(130, 94),
        FVector2D(150, 95),
        FVector2D(109, 122),
        FVector2D(94, 152),
        FVector2D(106, 135),
        FVector2D(130, 121),
        FVector2D(126, 123),
        FVector2D(90, 93),
        FVector2D(77, 134),
        FVector2D(110, 146),
        FVector2D(120, 131),
        FVector2D(104, 91),
        FVector2D(88, 113),
        FVector2D(84, 102),
        FVector2D(109, 134),
        FVector2D(113, 121),
        FVector2D(155, 109),
        FVector2D(121, 135),
        FVector2D(107, 163),
        FVector2D(160, 175),
        FVector2D(142, 184),
        FVector2D(150, 163),
        FVector2D(131, 120),
        FVector2D(124, 111),
        FVector2D(125, 106),
        FVector2D(140, 122),
        FVector2D(176, 164),
        FVector2D(207, 158),
        FVector2D(189, 148),
        FVector2D(150, 108),
        FVector2D(136, 119),
        FVector2D(121, 86),
        FVector2D(124, 89),
        FVector2D(137, 75),
        FVector2D(143, 120),
        FVector2D(131, 144),
        FVector2D(131, 139),
        FVector2D(107, 109),
        FVector2D(105, 99),
        FVector2D(61, 94),
        FVector2D(119, 117),
        FVector2D(145, 118),
        FVector2D(122, 101),
        FVector2D(67, 120),
        FVector2D(64, 141),
        FVector2D(78, 150),
        FVector2D(102, 149),
        FVector2D(118, 97),
        FVector2D(135, 112),
        FVector2D(124, 119),
        FVector2D(112, 151),
        FVector2D(145, 204),
        FVector2D(150, 211),
        FVector2D(156, 189),
        FVector2D(115, 149),
        FVector2D(119, 133),
        FVector2D(146, 114),
        FVector2D(165, 136),
        FVector2D(178, 135),
        FVector2D(192, 116),
        FVector2D(168, 128),
        FVector2D(162, 138),
        FVector2D(156, 104),
        FVector2D(148, 70),
        FVector2D(149, 65),
        FVector2D(136, 58),
        FVector2D(117, 85),
        FVector2D(118, 106),
        FVector2D(117, 107),
        FVector2D(95, 107),
        FVector2D(87, 127),
        FVector2D(108, 77),
        FVector2D(164, 52),
        FVector2D(133, 83),
        FVector2D(118, 106),
        FVector2D(91, 139),
        FVector2D(109, 174),
        FVector2D(107, 159),
        FVector2D(141, 119),
        FVector2D(127, 101),
        FVector2D(108, 99),
        FVector2D(120, 90),
        FVector2D(123, 132),
        FVector2D(128, 190),
        FVector2D(151, 215),
        FVector2D(144, 186),
        FVector2D(126, 108),
        FVector2D(121, 118),
        FVector2D(142, 97),
        FVector2D(139, 129),
        FVector2D(129, 127),
        FVector2D(149, 104),
        FVector2D(148, 103),
        FVector2D(163, 144),
        FVector2D(169, 152),
        FVector2D(168, 113),
        FVector2D(152, 70),
        FVector2D(108, 54),
        FVector2D(91, 81),
        FVector2D(110, 151),
        FVector2D(114, 128),
        FVector2D(99, 106),
        FVector2D(119, 143),
        FVector2D(142, 110),
        FVector2D(146, 72),
        FVector2D(145, 109),
        FVector2D(125, 146),
        FVector2D(126, 166),
        FVector2D(126, 209),
        FVector2D(125, 168),
        FVector2D(147, 153),
        FVector2D(131, 127),
        FVector2D(118, 88),
        FVector2D(113, 87),
        FVector2D(119, 100),
        FVector2D(123, 153),
        FVector2D(148, 145),
        FVector2D(144, 121),
        FVector2D(162, 117),
        FVector2D(152, 136),
        FVector2D(119, 109),
        FVector2D(123, 99),
        FVector2D(113, 122),
        FVector2D(125, 119),
        FVector2D(137, 130),
        FVector2D(161, 133),
        FVector2D(170, 128),
        FVector2D(165, 146),
        FVector2D(138, 157),
        FVector2D(131, 112),
        FVector2D(121, 134),
        FVector2D(133, 170),
        FVector2D(158, 130),
        FVector2D(152, 107),
        FVector2D(132, 118),
        FVector2D(117, 115),
        FVector2D(120, 82),
        FVector2D(125, 117),
        FVector2D(119, 166),
        FVector2D(124, 187),
        FVector2D(149, 199),
        FVector2D(160, 152),
        FVector2D(145, 111),
        FVector2D(134, 106),
        FVector2D(98, 106),
        FVector2D(105, 128),
        FVector2D(116, 97),
        FVector2D(105, 126),
        FVector2D(136, 147),
        FVector2D(111, 105),
        FVector2D(135, 119),
        FVector2D(150, 143),
        FVector2D(152, 133),
        FVector2D(124, 119),
        FVector2D(97, 121),
        FVector2D(99, 161),
        FVector2D(138, 157),
        FVector2D(167, 167),
        FVector2D(181, 163),
        FVector2D(137, 177),
        FVector2D(147, 172),
        FVector2D(142, 126),
        FVector2D(148, 154),
        FVector2D(152, 149),
        FVector2D(181, 131),
        FVector2D(159, 130),
        FVector2D(153, 135),
        FVector2D(121, 139),
        FVector2D(97, 112),
        FVector2D(119, 113),
        FVector2D(119, 158),
        FVector2D(101, 163),
        FVector2D(157, 132),
        FVector2D(157, 96),
        FVector2D(129, 107),
        FVector2D(102, 135),
        FVector2D(124, 127),
        FVector2D(125, 112),
        FVector2D(144, 115),
        FVector2D(111, 142),
        FVector2D(112, 137),
        FVector2D(119, 99),
        FVector2D(143, 112),
        FVector2D(139, 117),
        FVector2D(164, 108),
        FVector2D(153, 124),
        FVector2D(142, 138),
        FVector2D(120, 172),
        FVector2D(131, 184),
        FVector2D(152, 168),
        FVector2D(177, 160),
        FVector2D(163, 145),
        FVector2D(140, 164),
        FVector2D(166, 169),
        FVector2D(163, 176),
        FVector2D(158, 149),
        FVector2D(136, 144),
        FVector2D(106, 156),
        FVector2D(142, 129),
        FVector2D(140, 142),
        FVector2D(99, 156),
        FVector2D(91, 148),
        FVector2D(83, 163),
        FVector2D(98, 147),
        FVector2D(128, 108),
        FVector2D(123, 95),
        FVector2D(116, 88),
        FVector2D(120, 100),
        FVector2D(144, 107),
        FVector2D(166, 138),
        FVector2D(176, 156),
        FVector2D(127, 176),
        FVector2D(151, 144),
        FVector2D(194, 135),
        FVector2D(174, 147),
        FVector2D(150, 152),
        FVector2D(152, 126),
        FVector2D(133, 122),
        FVector2D(165, 145),
        FVector2D(165, 181),
        FVector2D(150, 209),
        FVector2D(102, 144),
        FVector2D(152, 141),
        FVector2D(154, 148),
        FVector2D(127, 159),
        FVector2D(141, 165),
        FVector2D(148, 164),
        FVector2D(152, 137),
        FVector2D(106, 132),
        FVector2D(105, 139),
        FVector2D(136, 118),
        FVector2D(157, 146),
        FVector2D(140, 158),
        FVector2D(116, 156),
        FVector2D(96, 147),
        FVector2D(88, 99),
        FVector2D(119, 105),
        FVector2D(131, 120),
        FVector2D(122, 88),
        FVector2D(128, 56),
        FVector2D(126, 123),
        FVector2D(152, 151),
        FVector2D(151, 164),
        FVector2D(146, 143),
        FVector2D(165, 141),
        FVector2D(188, 140),
        FVector2D(173, 141),
        FVector2D(169, 158),
        FVector2D(188, 134),
        FVector2D(169, 147),
        FVector2D(176, 158),
        FVector2D(183, 166),
        FVector2D(165, 183),
        FVector2D(114, 167),
        FVector2D(126, 143),
        FVector2D(170, 108),
        FVector2D(161, 140),
        FVector2D(119, 160),
        FVector2D(113, 136),
        FVector2D(108, 142),
        FVector2D(100, 141),
        FVector2D(114, 157),
        FVector2D(150, 152),
        FVector2D(155, 139),
        FVector2D(173, 144),
        FVector2D(146, 124),
        FVector2D(114, 101),
        FVector2D(109, 93),
        FVector2D(132, 110),
        FVector2D(161, 142),
        FVector2D(158, 115),
        FVector2D(121, 81),
        FVector2D(108, 158),
        FVector2D(143, 159),
        FVector2D(143, 178),
        FVector2D(143, 145),
        FVector2D(150, 153),
        FVector2D(160, 169),
        FVector2D(170, 137),
        FVector2D(174, 117),
        FVector2D(178, 134),
        FVector2D(161, 161),
        FVector2D(142, 153),
        FVector2D(129, 152),
        FVector2D(128, 183),
        FVector2D(132, 170),
        FVector2D(144, 132),
        FVector2D(167, 109),
        FVector2D(180, 103),
        FVector2D(117, 121),
        FVector2D(82, 136),
        FVector2D(78, 152),
        FVector2D(93, 159),
        FVector2D(110, 161),
        FVector2D(122, 164),
        FVector2D(142, 145),
        FVector2D(148, 113),
        FVector2D(141, 88),
        FVector2D(111, 90),
        FVector2D(112, 88),
        FVector2D(124, 97),
        FVector2D(160, 119),
        FVector2D(153, 117),
        FVector2D(115, 131),
        FVector2D(138, 157),
        FVector2D(133, 149),
        FVector2D(113, 165),
        FVector2D(111, 157),
        FVector2D(145, 178),
        FVector2D(170, 168),
        FVector2D(142, 148),
        FVector2D(158, 126),
        FVector2D(161, 149),
        FVector2D(124, 181),
        FVector2D(104, 172),
        FVector2D(54, 161),
        FVector2D(81, 158),
        FVector2D(113, 174),
        FVector2D(140, 165),
        FVector2D(143, 120),
        FVector2D(136, 108),
        FVector2D(126, 140),
        FVector2D(114, 151),
        FVector2D(99, 154),
        FVector2D(101, 145),
        FVector2D(140, 161),
        FVector2D(158, 159),
        FVector2D(147, 156),
        FVector2D(148, 115),
        FVector2D(153, 114),
        FVector2D(157, 135),
        FVector2D(138, 107),
        FVector2D(145, 100),
        FVector2D(147, 121),
        FVector2D(139, 140),
        FVector2D(136, 153),
        FVector2D(111, 156),
        FVector2D(91, 159),
        FVector2D(95, 137),
        FVector2D(93, 156),
        FVector2D(110, 173),
        FVector2D(151, 156),
        FVector2D(143, 155),
        FVector2D(125, 122),
        FVector2D(125, 158),
        FVector2D(83, 191),
        FVector2D(95, 165),
        FVector2D(66, 152),
        FVector2D(74, 178),
        FVector2D(120, 196),
        FVector2D(110, 142),
        FVector2D(108, 122),
        FVector2D(115, 112),
        FVector2D(110, 155),
        FVector2D(107, 167),
        FVector2D(83, 142),
        FVector2D(100, 138),
        FVector2D(143, 159),
        FVector2D(165, 160),
        FVector2D(115, 158),
        FVector2D(132, 124),
        FVector2D(143, 165),
        FVector2D(115, 164),
        FVector2D(122, 105),
        FVector2D(141, 121),
        FVector2D(156, 112),
        FVector2D(160, 112),
        FVector2D(139, 138),
        FVector2D(122, 164),
        FVector2D(115, 158),
        FVector2D(124, 140),
        FVector2D(115, 158),
        FVector2D(132, 174),
        FVector2D(110, 159),
        FVector2D(123, 159),
        FVector2D(124, 118),
        FVector2D(76, 128),
        FVector2D(70, 139),
        FVector2D(113, 120),
        FVector2D(116, 131),
        FVector2D(105, 177),
        FVector2D(114, 175),
        FVector2D(98, 144),
        FVector2D(97, 153),
        FVector2D(118, 137),
        FVector2D(146, 182),
        FVector2D(171, 194),
        FVector2D(133, 185),
        FVector2D(136, 129),
        FVector2D(150, 127),
        FVector2D(129, 152),
        FVector2D(94, 168),
        FVector2D(86, 173),
        FVector2D(115, 176),
        FVector2D(126, 155),
        FVector2D(133, 124),
        FVector2D(133, 142),
        FVector2D(130, 113),
        FVector2D(146, 129),
        FVector2D(140, 169)
    };
    bool Use Occlusion to Attenuate Sounds in Interiors = true;
    double Max Attenuation = 0.20000000298023224;
    double Min LPF Frequency = 700;
    class UUDS_OcclusionSettings_C* Occlusion Settings = "UDS_OcclusionSettings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Occlusion/Occlusion_Settings/UDS_Standard_Occlusion_Settings.UDS_Standard_Occlusion_Settings'";
    bool Enable Post Process Wind Fog = true;
    double PPWF Intensity from Fog = 1.4;
    double PPWF Intensity from Rain = 1.4;
    double PPWF Intensity from Snow = 1.4;
    double PPWF Intensity from Dust = 2.5;
    double PPWF Fade Distance = 1000;
    double PPWF Max Sample Distance = 800;
    double PPWF Sample Step Distance = 180;
    double PPWF 3D Noise Scale = 1400;
    struct FVector2D Global Min and Max Temperature = FVector2D(0, 0);
    struct FVector2D Local Min and Max Temperature = FVector2D(0, 0);
    double Time Random Offset = -1;
    double Maximum Wind Direction Variation = 60;
    double Variation Speed = 1;
    TMap<FName, enum UDS_PropertyType> Properties = {
        { FName("Cloud Coverage"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Rain"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wind Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wind Direction"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Snow Particles"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Custom Control Point Location"), UDS_PropertyType::NewEnumerator11 }, 
        { FName("Control Point Location Source"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Enable Rain Particles"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Particle Collision Enabled"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Camera Forward Spawn Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Ceiling Check Height"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Spawn Box Height"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Max Spawn Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Spawn Distance Distribution"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Minimum Particle Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Rain Drops Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow Flakes Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Splash Particles Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Rain Drops Alpha"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow Flakes Alpha"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Rain Particle Color Multiplier"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Snow Particle Color Multiplier"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Weather Particle Collision Channel"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Splash Frequency"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Use Random Weather Variation"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Start With a Random Weather Type"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Season"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Weather Type Change Minimum Interval"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Weather Type Change Maximum Interval"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Transition Length"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Avoid Extreme Cloud Coverage Shifts"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Avoid Repeating Weather Types"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Avoid Changing Directly from Snow to Rain (Or Vice Versa)"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Material Wetness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Material Snow Coverage"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Material Effects Take Time to Change"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Max Material Wetness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Max Material Snow Coverage"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Time for Materials to Get Wet"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Time for Materials to Dry Out"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Time for Materials to Gather Snow"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Time for Snow to Melt"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Amount of Snow to Turn to Wetness when Melted"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wind Force Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Spawn Lightning Flashes"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Lightning Flash_Timing_Randomization"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Flash Light Source"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Lightning Flash Light Source Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Maximum Lightning Flash Light Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Flashes Cast Shadows"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Lightning Flashes Cast Light Shaft Bloom"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Lightning Flash Light Shaft Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Flash Minimum Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Flash Maximum Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Obscured Lightning"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Obscured Lightning Spawn Rate"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Flash Minimum Length"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Flash Maximum Length"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Replicate Lightning Direction"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Rain Volume"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Distant Thunder Volume"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Close Thunder Volume"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wind Volume"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wind Whistling Volume"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Use Occlusion to Attenuate Sounds in Interiors"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Max Attenuation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Min LPF Frequency"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Dynamic Landscape Weather Effects"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Render Target Area for Dynamic Snow/Dust"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Render Target Area for Dynamic Puddles"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Apply Dynamic Trails to Snow"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Snow Depth"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow/Dust Z Normal Cutoff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow/Dust Z Normal Falloff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow/Dust Texture Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow/Dust Compression Brush Spread"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow/Dust Compression Brush Scatter"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow/Dust Compression Brush Size Scatter"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow/Dust Compression Fade Speed Idle"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow/Dust Compression Fade Speed Active"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Max Snow/Dust Compression Brush Size"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow/Dust Compression Normal Map Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Pixel Normal Snow/Dust Buildup"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Apply Interaction Ripples to Puddles"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Puddles Z Normal Cutoff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Puddles Z Normal Falloff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Puddle Coverage"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Base Wetness when Raining"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Base Wetness when Clear"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Puddle Sharpness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Water Roughness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Ripple Spread"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Ripple Fade Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Puddle Normals Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Landscape Object Type"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Enable Wind Direction Variation"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Maximum Wind Direction Variation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Variation Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Fog Particles"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Max Fog Particle Percentage (Rain)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Max Fog Particle Percentage (Snow)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Particle Intensity (Rain)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Particle Intensity (Snow)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Particles Draw Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Particle Camera Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Post Process Wind Fog"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("PPWF Intensity from Fog"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wind Directional Source Intensity Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Temperature Scale"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Summer Temperature Min and Max"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Autumn Temperature Min and Max"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Winter Temperature Min and Max"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Spring Temperature Min and Max"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Nighttime Temperature Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Daytime Temperature Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Morning/Evening Temperature Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Overcast Temperature Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Raining Temperature Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snowing Temperature Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Foggy Temperature Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dusty Temperature Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Occlusion Settings"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Max Duplicate Splash Range"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow Coverage Lights Up Height Fog"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Screen Droplets"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Screen Center Strength"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Screen Edge Strength"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Camera Facing Rain Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Droplet Tiling"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Water Level"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Use Water Level"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Blur Radius"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Wind Debris"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Debris Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Debris Particle Alpha"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wind Debris Atlas"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Weather Mask Target Size"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Weather"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Snow"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Thunder/Lightning"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dust"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Dust Particles"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Dust Particle Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dust Particle Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Dust Particle Alpha"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Render Raindrop Decals"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Max Fog Particle Percentage (Dust)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Particle Intensity (Dust)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Material Dust Coverage"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Time for Materials to Gather Dust"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Max Dust Coverage"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Season Mode"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Enable Rain Sounds"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Enable Distant Thunder Sounds"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Enable Close Thunder Sounds"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Enable Wind Sounds"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Enable Rainbow"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Max Rainbow Strength"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Strength from Rain"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Strength from Fog"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Time to Last After Rain/Fog"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Interior Insulation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Interior Temperature"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Support Virtual Heightfield Mesh"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("VHFM Invalidate Long Range Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("VHFM Invalidate Long Range Threshold"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("VHFM Invalidate Mid Range Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("VHFM Invalidate Mid Range Threshold"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("VHFM Invalidate Short Range Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("VHFM Invalidate Short Range Threshold"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Effect Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Lightning Height Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("PPWF Intensity from Rain"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("PPWF Intensity from Snow"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("PPWF Intensity from Dust"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Close Thunder Delay Per KM"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Mask Rainbow Above Clouds"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Mask Rainbow Below Water"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("PPWF Max Sample Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("PPWF Sample Step Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("PPWF 3D Noise Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("World Spawn Offset"), UDS_PropertyType::NewEnumerator11 }, 
        { FName("Spawn Direction Forward Bias"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Update Season Interval"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable WOV Material Effect Target"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("WOV Target Size"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("WOV Target Update Threshold (Inside Volume)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("WOV Target Update Threshold (Outside Volume)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Max Attenuation for UDS Outdoor Sound"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dust Depth"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Apply Dynamic Trails to Dust"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Snow/Dust Parallax Sample Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Tiling Ripples Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Variation Clouds Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("PPWF Fade Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Weather Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Blend Season Probabilities"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Season Day Offset"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Extreme Cloud Coverage Shift Theshold"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Flash Max Angle from Forward"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Bolt Length"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Strength in any Weather"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow Ambient Light Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Rain Refraction Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Rain Ambient Light Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Particle Sprite Motion Blur with Camera Movement"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Weather Particle Motion Stretch"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dust Particles Time Dilation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Rain Particles Time Dilation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow Particles Time Dilation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Apply Changes Above Volumetric Cloud Layer"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Rain Multiplier Above Clouds"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow Multiplier Above Clouds"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dust Multiplier Above Clouds"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Multiplier Above Clouds"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Thunder/Lightning Multiplier Above Clouds"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wind Multiplier Above Clouds"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Randomize Temperature"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wet Screen When Emerging from Water"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Splash Droplets Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Raindrop Decal Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Splash Particles Rendering Mode"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Splash Particles Alpha"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fallback DLWE Mode"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("DLWE Interactions Update Period"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lightning Flash Frequency"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Rain Velocity Randomization"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow Velocity Randomization"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Random Seed"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Rain Particle Spawn Count"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow Particle Spawn Count"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dust Particle Spawn Count"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Wind Debris Particle Spawn Count"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("CPU Particle Buffer Length"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Distant Particle Range"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Scale Distant Particle Alpha"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Snow Flakes Surface Stick Duration"), UDS_PropertyType::NewEnumerator0 }
    };
    struct FVector Occlusion Location = FVector(0, 0, 0);
    double Snow Coverage Lights Up Height Fog = 0.5;
     Started Raining = ;
     Started Snowing = ;
     Finished Raining = ;
     Finished Snowing = ;
     Getting Cloudy = ;
     Clouds Clearing = ;
    double Screen Edge Strength = 2;
    double Camera Facing Rain Bias = 4;
    double Droplet Tiling = 1;
    double Blur Radius = 0.0020000000949949026;
    bool Wet Screen When Emerging from Water = true;
    FSoftObjectPath Screen Droplets Parent Material = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Weather/PP_Screen_Droplets.PP_Screen_Droplets");
    bool Current Weather State Changed = true;
    bool Current Material State Changed = true;
    bool First Tick = true;
    bool Override with New Changes = true;
    bool Enable Dust Particles = true;
    double Dust Particle Spawn Count = 1000;
    double Dust Particle Scale = 1;
    double Dust Velocity Randomization = 1;
    struct FLinearColor Dust Particle Color = FLinearColor(1, 1, 1, 1);
    double Dust Particle Alpha = 0.6;
    double Wind Debris Particle Spawn Count = 5000;
    double Debris Scale = 1;
    double Debris Particle Alpha = 0.5;
    FSoftObjectPath Wind Debris Atlas = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Weather/Debris_Twigs_and_Leaves.Debris_Twigs_and_Leaves");
    class UTextureRenderTarget2D* Weather Mask Brush Target = "TextureRenderTarget2D'Test_C/Content/ThirdParty/UltraDynamicSky/Textures/Weather/Weather_Mask_Brush_Target.Weather_Mask_Brush_Target'";
    struct FVector2D Weather Brush Target Corner = FVector2D(0, 0);
    int32 Weather Mask Target Size = 50000;
    int32 Weather Mask Brush Target Resolution = 1000;
    struct FVector2D Weather Brush Target Center = FVector2D(0, 0);
    double Weather Mask Projection Value = 1;
    struct FVector Weather Brush Target Root Position = FVector(0, 0, 0);
    class UUDS_Weather_Settings_C* Local Weather State = "UDS_Weather_Settings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Weather_Effects/Weather_Presets/Clear_Skies.Clear_Skies'";
    double Replicated Material Wetness = -1;
    double Replicated Material Snow = -1;
    float Dust Particles Time Dilation = 1;
    double Replicated Material Dust = -1;
    int32 DLWE Snow Mode = -1;
    TArray<double> Individual Seasons = {
        1,
        0,
        0,
        0
    };
    double Old Cloud Coverage = -1;
    double Old Rain = -1;
    double Old Wind Intensity = -1;
    double Old Snow = -1;
    double Old Thunder/Lightning = -1;
    double Old Fog = -1;
    double Old Dust = -1;
    double Old Material Wetness = -1;
    double Old Material Snow Coverage = -1;
    double Old Material Dust Coverage = -1;
    double Old Lerp to Static Settings = -1;
    FSoftObjectPath Wind Cue Sound = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Sound/Wind/Wind_Cue.Wind_Cue");
    FSoftObjectPath Rain Cue Sound = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Sound/Rain/Rain_Cue.Rain_Cue");
    FSoftObjectPath Distant Thunder Cue Sound = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Sound/Distant_Thunder/DistantThunder_Cue.DistantThunder_Cue");
    FSoftObjectPath Wind Whistling Cue Sound = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Sound/Wind/Wind_Whistling_Cue.Wind_Whistling_Cue");
    FSoftObjectPath Clouds Diverse Texture = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Clouds/clouds_diverse.clouds_diverse");
    FSoftObjectPath Rain Particle Niagara System = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Particles/Rain.Rain");
    FSoftObjectPath Snow Particle Niagara System = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Particles/Snow.Snow");
    FSoftObjectPath Dust Particle Niagara System = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Particles/Dust.Dust");
    FSoftObjectPath Wind Debris Niagara System = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Particles/Wind_Debris.Wind_Debris");
    FSoftObjectPath Obscured Lightning Niagara System = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Particles/Obscured_Lightning.Obscured_Lightning");
    FSoftObjectPath Post Process Wind Fog Parent Material = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Weather/Post_Process_Wind_Fog.Post_Process_Wind_Fog");
     Dust/Sand Forming = ;
     Dust/Sand Clearing = ;
    double Max Rainbow Strength = 0.2;
    double Strength from Rain = 0.5;
    double Strength from Fog = 0.5;
    double Time to Last After Rain/Fog = 100;
    double Mask Rainbow Above Clouds = 1;
    double Mask Rainbow Below Water = 1;
     Weather Display Name Changed = ;
    double VHFM Invalidate Long Range Distance = 7000;
    double VHFM Invalidate Long Range Threshold = 0.2;
    double VHFM Invalidate Mid Range Distance = 2000;
    double VHFM Invalidate Mid Range Threshold = 0.02;
    double VHFM Invalidate Short Range Distance = 300;
    double VHFM Invalidate Short Range Threshold = 0.004;
    struct FVector VHFM Invalidate Long Range Buffer = FVector(-1, -1, -1);
    struct FVector VHFM Invalidate Mid Range Buffer = FVector(-1, -1, -1);
    struct FVector VHFM Invalidate Short Range Buffer = FVector(-1, -1, -1);
    struct FVector Last Sparse Movement Update Location = FVector(0, 0, 0);
    double Max Attenuation for UDS Outdoor Sound = 0.1;
    double Update Season Interval = 5;
    struct FUDS_and_UDW_State State Being Applied = {
        "TimeofDay_2_2DF54613424D82C28D8AF38B5CCC017E": 0,
        "SimulationDate_6_6AAFF3384452285DB969FABE6CC7502E": FDateTime("lundi 1 janvier 0001 00:00:00"),
        "TotalDaysElapsed_10_85A4D6E54B4BA738A5AAD08B278168AC": 0,
        "UDS_CloudCoverage_14_5BE3DD95403439E0DC4FC7B950B72734": 0,
        "MoonPhase_16_00C2557E44B4CE73A824F2977842EF06": 0,
        "IncludesUDWState_19_4B877A784EE94D12717D3998B8494AC4": false,
        "UDWRandomWeatherState_27_74741D5149E4365461FC87BA73842B8C": {
            "TargetRandomWeatherType_22_BBFDBC5E46C25F1DFB0037A44AB6D268": nullptr,
            "CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85": 0,
            "CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF": 0,
            "LastRandomWeatherType_24_4367B1AC4E64A2564E3960B3ED6E25D8": nullptr
        },
        "WeatherOverrideVolumeStates_87_56B54B4D46756590EAD0B08CF93C14E3": {},
        "Rain_77_C55FBB284F0FA74378B1C39AC4A25456": 0,
        "CloudCoverage_71_02CFC88541ECA075F65C67BAD5B8203D": 0,
        "Snow_78_9681DBA0451D944F00450C8885948EAA": 0,
        "WindIntensity_73_8CA9E58B4FAD1966869DACA837B2A72D": 0,
        "GlobalMaterialSnow_60_DCFC3F844EF772ED4960F19588F2CD65": 0,
        "GlobalMaterialWetness_62_EF1D972F47EF0C4206D6D1B6BB645291": 0,
        "WeatherType_76_08B587F84A8CD9310B9F92A3DA6F0430": nullptr,
        "Fog_81_AB014F324CE4705268C835AA3B28780F": 0,
        "Dust_83_C8EF6CC546A4F7465C50638A87E6A9DF": 0,
        "ThunderLightning_85_D0D5D684439450DDEB610BB9887DFA49": 0,
        "OldCloudCoverage_90_9DA4B7F2482756F255C9F3ACEA84CEB6": 0,
        "OldRain_92_2D7B3F404B01E98C1B62FC823CF05DF0": 0,
        "OldWindIntensity_94_7BC1A37A41701A2B8E6C209D587237E7": 0,
        "OldSnow_96_426BC726469C3D0110892CB349FCEB42": 0,
        "OldThunderLightning_98_E14B8AC9466340F5002D58ACB121FF69": 0,
        "OldFog_100_AA682BF94677D2B24155EFA05CAF9554": 0,
        "OldDust_102_44BDD5874F97511F1FFA7C956D9A3761": 0,
        "OldMaterialWetness_104_D03595C246E3BDFC836DC7863893F348": 0,
        "OldMaterialSnowCoverage_106_3517C89C408AFCDFC97F98A3701F4AD1": 0,
        "OldMaterialDustCoverage_108_DFEDC41542E57030BBCC1C9BA56F5327": 0,
        "TransitionActive_114_AE2D125A4177F2FD4892A385DDEF54AB": false,
        "TransitionDuration_117_CF9B374541BEC8C677AEFCB617441BA4": 0,
        "RandomWeatherStateActive_124_B872637842476117723367B593706C32": false,
        "TransitionTimer_123_DAAD4AC5419A0EEFAF04898E92A84CA3": 0
    };
    FSoftObjectPath Weather Volume Target = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Weather/WOV_Material_State_Target.WOV_Material_State_Target");
    struct FVector2D WOV Target Corner Position = FVector2D(-250000, -250000);
    struct FVector Weather Override Volume Target Location = FVector(0, 0, 0);
    class UUDS_VersionInfo_C* UDS Version Info = "UDS_VersionInfo_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/System/Editor_UI/UDS_CurrentVersion.UDS_CurrentVersion'";
    struct FVector Editor WOV Target Root = FVector(0, 0, 0);
    struct FVector Editor Mask Target Root = FVector(0, 0, 0);
    struct FVector2D WOV Wind Direction = FVector2D(0, 0);
    struct FVector Current Lightning Target Offset = FVector(0, 0, 0);
    FSoftObjectPath Splash Material Decal = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Weather/Splash_ParticleMat.Splash_ParticleMat");
    FSoftObjectPath Splash Material Translucent = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Weather/Splash_ParticleMat_Translucent.Splash_ParticleMat_Translucent");
    double Last Construction Script Time = -10;
    double Current Rainbow Strength = -1;
    FSoftObjectPath Rainbow Material 2D = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Weather/Rainbow_Mat.Rainbow_Mat");
    FSoftObjectPath Rainbow Material Volumetric = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Weather/Rainbow_Mat_Volumetric.Rainbow_Mat_Volumetric");
    double Weather Particle Motion Stretch = 1;
    double Particle Sprite Motion Blur with Camera Movement = 0.5;
    byte Previous Temperature Scale = 2;
    bool Apply Changes Above Volumetric Cloud Layer = true;
    double Wind Multiplier Above Clouds = 0.5;
     Season Changed = ;
    int32 ED_Season = -1;
    double Transition Alpha = 1;
    bool Rain Update Needed = true;
    bool Snow Update Needed = true;
    bool Thunder/Lightning Update Needed = true;
    bool Wind Intensity Update Needed = true;
    bool Fog Update Needed = true;
    bool Dust Update Needed = true;
    bool Material Wetness Update Needed = true;
    bool Material Snow Update Needed = true;
    bool Material Dust Update Needed = true;
    bool Wind Direction Update Needed = true;
    struct FVector Applied Rain Velocity = FVector(0, 0, 0);
    TArray<struct FVector> Sound Cache Old = {
        FVector(-1, 0, 0),
        FVector(-1, 0, 0),
        FVector(-1, 0, 0),
        FVector(-1, 0, 0),
        FVector(-1, 0, 0),
        FVector(-1, 0, 0),
        FVector(-1, 0, 0),
        FVector(-1, 0, 0),
        FVector(-1, 0, 0),
        FVector(-1, 0, 0)
    };
    TArray<struct FVector> Sound Cache New = {
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0)
    };
    struct FTimerHandle Sound Effects Cache Timer = {
        "Handle": 0
    };
    TArray<bool> Sound Cache Changing = {
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false
    };
    FSoftObjectPath Splash Droplet Material Decal = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Weather/Splash_Droplet_Particle.Splash_Droplet_Particle");
    FSoftObjectPath Splash Droplet Material Translucent = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Weather/Splash_Droplet_Particle_Translucent.Splash_Droplet_Particle_Translucent");
     DLWE Mode Changed = ;
    struct FTimerHandle Lightning Spawn Timer = {
        "Handle": 0
    };
    double Lightning Timing Random Multiplier = 1;
    int32 Periodic Update Step = -1;
    struct FRandomStream Random Stream = {
        "InitialSeed": 0,
        "Seed": 0
    };
    double CPU Particle Buffer Length = 1;
    double Scale Distant Particle Alpha = 3;
    double Distant Particle Range = 3000;
    double Lightning Bolt Thickness Scale = 1;
    FSoftObjectPath LightningStrike = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Particles/Lightning_Strike.Lightning_Strike");
    struct FActorTickFunction PrimaryActorTick = {
        "TickGroup": ETickingGroup::TG_PostPhysics
    };
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    float NetUpdateFrequency = 10;
    float NetPriority = 100;
    class USceneCaptureComponent2D* ProjectionBox_SceneCapture;
    class UUDW_Lightning_Spawn_Manager_C* Lightning_Spawn_Manager;
    class UStaticMeshComponent* Rainbow;
    class UUDS_PlayerOcclusion_C* Player Occlusion;
    class UNiagaraComponent* Dust_Particles;
    class UNiagaraComponent* Wind_Debris_Particles;
    class UNiagaraComponent* Snow_Particles;
    class UPostProcessComponent* ScreenDroplets;
    class UAudioComponent* Wind_X+;
    class UAudioComponent* Rain_Y-;
    class UAudioComponent* Rain_Y+;
    class UAudioComponent* Rain_X-;
    class UAudioComponent* Rain_X+;
    class UAudioComponent* Wind_Y-;
    class UAudioComponent* Wind_Y+;
    class UAudioComponent* Wind_X-;
    class USceneComponent* SpatializedAudioRoot;
    class UPostProcessComponent* Post_Process_Wind_Fog;
    class URandom_Weather_Variation_C* Random_Weather_Variation;
    class UAudioComponent* Wind_Whistling;
    class UAudioComponent* DistantThunder_Cue;
    class UNiagaraComponent* Obscured_Lightning;
    class UDirectionalLightComponent* Lightning Light;
    class UBillboardComponent* Root;
    class UNiagaraComponent* Rain_Particles;
    class AUltra_Dynamic_Sky_C* UltraDynamicSky;
    class UUDS_Weather_Settings_C* Weather;
    double Cloud Coverage;
    double Fog;
    double Wind Intensity;
    double Rain;
    double Snow;
    double Thunder/Lightning;
    double Dust;
    double Material Wetness;
    double Material Snow Coverage;
    double Transition Timer;
    bool Use Water Level;
    double Water Level;
    UDS_Rain_Splash_RenderMode Splash Particles Rendering Mode;
    double Lightning Height Offset;
    bool Enable Fog Particles;
    class AWindDirectionalSource* Wind Directional Source Actor (for SpeedTree);
    double Snow Delta;
    bool Use Random Weather Variation;
    bool Start With a Random Weather Type;
    class UUDS_Climate_Preset_C* Apply Climate Preset;
    bool Avoid Repeating Weather Types;
    bool Enable Rain Sounds;
    bool Enable Distant Thunder Sounds;
    bool Enable Close Thunder Sounds;
    bool Enable Wind Sounds;
    double Intended Cloud Wind Speed;
    double Intended Cloud Coverage;
    double Intended Cloud Direction;
    bool Runtime;
    double Fog Particle Camera Offset;
    bool Replicate Lightning Direction;
    bool Flashing Lightning;
    UDS_TemperatureType Temperature Scale;
    bool Enable Dynamic Landscape Weather Effects;
    UDS_ControlPointMode Control Point Location Source;
    bool Increasing Material Snow Coverage;
    TArray<class UPhysicalMaterial*> Physical Materials which enable DLWE Interactions on non-Landscapes;
    byte Landscape Object Type;
    TArray<class UPhysicalMaterial*> Physical Materials which disable Snow/Dust Sounds and Particles;
    TArray<class UPhysicalMaterial*> Physical Materials which disable Puddle Sounds and Particles;
    bool Enable WOV Material Effect Target;
    TArray<class AWeather_Override_Volume_C*> Weather Override Volumes;
    bool Use Custom Lightning Location;
    double Current Lightning Intensity;
    double Current Lightning Angle;
    class AWeather_Override_Volume_C* Current Weather Override Volume;
    int WOV Target Resolution;
    bool Currently in a Weather Override Volume;
    TArray<double> DLWE Brush Size Buffer;
    TArray<class UTextureRenderTarget2D*> Render Targets to Release Next Frame;
    TArray<struct FVector> DLWE_Brush_Locations_Buffer;
    TArray<double> DLWE Brush Strength Buffer;
    TArray<class UAudioComponent*>* Rain Sound Components;
    TArray<class UAudioComponent*>* Wind Sound Components;
    class UMaterialInstanceDynamic* Post Process Wind Fog MID;
    bool Enable Wind Direction Variation;
    double Current Wind Direction;
    bool Run by Counterpart;
    bool ED_Raining;
    bool ED_Snowy;
    bool ED_Cloudy;
    bool Enable Screen Droplets;
    double Screen Center Strength;
    class UMaterialInstanceDynamic* Screen Droplets MID;
    double Drips Intensity;
    double Drops Intensity;
    double Drops Time;
    bool Rain System Spawning;
    bool Obscured Lightning System Spawning;
    TArray<class UAudioComponent*>* All Weather Sound Components;
    bool Enable Wind Debris;
    bool Weather Mask Target Initialized;
    bool Weather Mask Target in Use;
    double Weather Mask Target Half Size;
    bool Triggered Starting Dispatchers;
    class UUDS_Weather_Settings_C* Old Weather State;
    class UUDS_Weather_Settings_C* Global Weather State;
    class UUDS_Weather_Settings_C* Last Frame Buffer;
    class UUDS_Weather_Settings_C* Update Buffer;
    double Intended Fog;
    bool Snow System Spawning;
    bool Wind Debris System Spawning;
    double Intended Dust;
    bool Dust System Spawning;
    double Material Dust Coverage;
    UDS_SeasonMode Season Mode;
    double Season;
    class UUDS_Weather_Settings_C* Manual Weather State;
    bool ED_Dusty;
    bool Enable Rainbow;
    double Strength in any Weather;
    UDS_Weather_Display_Names ED_CurrentWeather;
    bool Support Virtual Heightfield Mesh;
    class ARuntimeVirtualTextureVolume* VHFM Runtime Virtual Texture Volume;
    bool Fog Particles Active;
    double Current Local Weather Change Speed;
    class USoundMix* Outdoor Sound Mix Modifier;
    class UMaterialInstanceDynamic* WOV_Target_Brush_MID;
    bool WOV Material Effect Target Active;
    bool Shutting Down;
    class UTextureRenderTarget2D* Mask Buffer Target;
    FString UDS Version;
    int Anti Aliasing Method;
    int Season Day Offset;
    UDS_Project_Mode Project Mode;
    bool Not Limiting Construction;
    class UMaterialInstanceDynamic* Rainbow MID;
    double Target Rainbow Strength;
    double Rain Multiplier Above Clouds;
    double Snow Multiplier Above Clouds;
    double Dust Multiplier Above Clouds;
    double Fog Multiplier Above Clouds;
    double Thunder/Lightning Multiplier Above Clouds;
    bool Random Weather State Active;
    bool Transition Active;
    double Wind Direction Update Buffer;
    double Wind Direction Last Frame Buffer;
    TArray<class AWeather_Override_Volume_C*> Nearby Weather Override Volumes;
    double Wetness Change Speed;
    double Dust Coverage Change Speed;
    double Snow Coverage Change Speed;
    double Current PPWF Intensity;
    double Target PPWF Intensity;
    bool Screen Droplets Active;
    double Screen Droplets Target Drips Intensity;
    double Screen Droplets Camera Exposure;
    bool Player Camera Underwater;
    TArray<double> Cached Sound Directional Occlusion;
    double Cached Wind LPF;
    double Cached Wind Sound Intensity;
    double Shared Material Parameter Snowy;
    double Shared Material Parameter Dusty;
    TArray<class UWeather_Mask_Projection_Box_Component_C*>* Last Update Projection Box Components;
    double Periodic Updates Timer;
    TArray<class UPrimitiveComponent*>* Last Update Mask Components;
    bool Mobile;
    class UNiagaraComponent* Lightning Flash 1;
    class UNiagaraComponent* Lightning Flash 2;
    bool Lightning System Toggle;
    class UNiagaraComponent* Lightning Niagara System;
    class UMaterialInstanceDynamic* Lightning Flash Bloom MID;
    bool Lightning Flash Active;
    double Lightning Flash Time Elapsed;
    int Custom Lightning Seed;
    double Current Lightning Intensity Scale;

};