class AUltra_Dynamic_Sky_C : public AIRREnhancedUltraDynamicSky
{
public:
    int32 NumReplicatedProperties = 15;
    TArray<class UStaticMeshComponent*> ComponentTemplates = {
        "PostProcessComponent'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C:NODE_AddPostProcessComponent-0'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C:NODE_AddStaticMeshComponent-0'",
        "SceneComponent'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C:NODE_AddSceneComponent-1'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C:NODE_AddStaticMeshComponent-12'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C:SimpleConstructionScript_1'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C:ExecuteUbergraph_Ultra_Dynamic_Sky'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Cloud Speed = 0.35;
    double Time of Day = 960;
    double Cloud Coverage = 1.1399999856948853;
    double Fog = 1;
    double Overall Intensity = 1;
    bool Render Moon = true;
    double Moon Light Intensity = 0.25;
    enum EComponentMobility Moon Mobility = EComponentMobility::Movable;
    double Moon Angle = 15;
    double Moon Inclination = 35;
    double Moon Vertical Offset = 0.03999999910593033;
    bool Moon Casts Shadows = true;
    double Moon Scale = 0.699999988079071;
    double Moon Phase = 24.50008036388019;
    double Dark Side Brightness = 0.015;
    double Moon Texture Intensity (Night) = 0.2;
    double Sun Light Intensity = 5;
    enum EComponentMobility Sun Mobility = EComponentMobility::Movable;
    double Sun Angle = 1;
    double Contrast = 0.1;
    double Sun Inclination = 30;
    bool Sun Casts Shadows = true;
    struct FLinearColor Sun Light Color = FLinearColor(1, 1, 1, 1);
    double Moon Texture Intensity (Day) = 0.6000000238418579;
    struct FLinearColor Moon Light Color = FLinearColor(0,254313, 0,360106, 0,651042, 1);
    double Stars Intensity = 0.75;
    struct FLinearColor Stars Color = FLinearColor(0,484375, 0,639062, 1, 1);
    struct FLinearColor Moon Material Color = FLinearColor(0,486328, 0,574971, 0,864583, 1);
    double Sun Radius = 1;
    bool Use Cloud Shadows = true;
    double Stars Speed = 0.03;
    double New Moon Light Brightness = 0.015;
    class UCurveFloat* Night Filter Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/Night_Filter.Night_Filter'";
    double Moon Glow Intensity = 0.1;
    double Aurora Intensity = 0.11999999731779099;
    double Aurora Speed = 0.15;
    double Cloud Shadows Intensity When Overcast = 1;
    double Cloud Shadows Softness When Sunny = 0.10000000149011612;
    double Cloud Shadows Softness When Overcast = 0.20000000298023224;
    double Cloud Tiling Layer 1 = 4;
    double Cloud Tiling Layer 2 = 3;
    double Soften Horizon = 2;
    double Cloud Height Layer 1 = 0.699999988079071;
    double Cloud Height Layer 2 = 0.15000000596046448;
    double Overcast Swirling Texture = 2;
    double Saturation = 1;
    double Directional Balance = 1;
    double Dawn Time = 600;
    double Dusk Time = 1800;
    double Night Brightness = 1;
    double Sun Softness = 4;
    double Aurora Phase = 1;
    class UCurveFloat* Exposure Compensation Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/Exposure_Compensation_Curve.Exposure_Compensation_Curve'";
    double Day Length = 30;
    double Night Length = 15;
    bool Move_Static/Stationary_Lights = true;
    double Base Fog Density = 0.0075;
    double Foggy Density Contribution = 0.7;
    double Cloudy Density Contribution = 0.02;
    double Dust Density Contribution = 0.5;
    double Scale Total Fog Density = 1;
    double Stars Tiling = 2.5;
    double Twinkle Amount = 0.3;
    double Twinkle Speed = 1;
    FSoftObjectPath Tiling Stars Texture = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Sky/Tiling_Stars.Tiling_Stars");
    FSoftObjectPath Real Stars Texture = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Sky/Real_Stars.Real_Stars");
    class UCurveFloat* Stars Intensity Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/Stars_Intensity.Stars_Intensity'";
    double Sky Light Intensity = 1;
    double Sky Light Intensity_Lumen = 1;
    enum EComponentMobility Sky Light_Mobility = EComponentMobility::Movable;
    struct FLinearColor Sky Light Color Multiplier (Day) = FLinearColor(1, 1, 1, 1);
    struct FLinearColor Sky Light Color Multiplier (Day) Lumen = FLinearColor(1, 1, 1, 1);
    struct FLinearColor Sky Light Color Multiplier (Dawn/Dusk) = FLinearColor(1, 1, 1, 1);
    struct FLinearColor Sky Light Color Multiplier (Night) = FLinearColor(1, 1, 1, 1);
    bool Static/Stationary Sky Light Casts Shadows = true;
    bool Movable Sky Light Casts Shadows (Enable DFAO) = true;
    FSoftObjectPath Flat Cubemap = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Sky/FlatCubemap.FlatCubemap");
    FSoftObjectPath Custom Cubemap = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Sky/FlatCubemap.FlatCubemap");
    struct FLinearColor Tinted Sky Light Lower Hemisphere Color = FLinearColor(0, 0, 0, 0,75);
    bool Real Time Capture = true;
    struct FLinearColor Captured Sky Light Lower Hemisphere Tint = FLinearColor(0,260417, 0,229905, 0,202094, 1);
    double Sky Light Recapture Period (Seconds) = 10;
    double Lights Update Degree Threshold = 0.03;
     Sunset = ;
     Sunrise = ;
    double Cloud Wisps Opacity (Cloudy) = 0.5;
    class UTexture2D* Cloud Wisps Texture = "Texture2D'Test_C/Content/ThirdParty/UltraDynamicSky/Textures/Sky/Cloud_Wisps.Cloud_Wisps'";
    enum UDS_NoiseType Cloud Noise Type = UDS_NoiseType::NewEnumerator4;
    double Sun Shader Intensity = 0.3499999940395355;
    double Directional Lighting Intensity = 3;
    double Sun Highlight Radius = 0.04500000178813934;
    double Cloud Opacity = 1;
    double Horizon Density Multiplier = 1.100000023841858;
    double Zenith Density Multiplier = 0.8999999761581421;
    double Latitude Gradient Position = 0.25;
    double Latitude Gradient Width = 50;
    double Around Sun Density Multiplier = 1;
    double Around Sun Density Exponent = 25;
    double Around Moon Density Multiplier = 1;
    double Around Moon Density Exponent = 45;
    double 2D Clouds Shading Offset = 1;
    class UCurveFloat* Shine Intensity Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/Shine_Intensity.Shine_Intensity'";
    class UCurveFloat* Sun Highlight Intensity Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/Sun_Highlight_Intensity.Sun_Highlight_Intensity'";
    class UCurveFloat* Sun Highlight Radius Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/Sun_Highlight_Radius.Sun_Highlight_Radius'";
    double Directional Lights Absent Brightness = 1;
    double Bottom Altitude = 0.6;
    double Volumetric Clouds Scale = 1;
    double Layer Height Scale = 1;
    double Base Clouds Scale = 1;
    double 3D Noise Scale = 1;
    double 3D Erosion Intensity = 1;
    double High Frequency Noise Amount = 0.2;
    int32 High Frequency Levels = 1;
    double Distort High Frequency Noise = 0.21;
    double Extinction Scale = 0.5;
    double Base Floor Variation = 0.1;
    double Overcast Floor Variation = 0.7;
    double Floor Luminance Scale = 1;
    double View Sample Scale (Day) = 2;
    double View Sample Scale (Night) = 1.6;
    double Shadow Sample Scale = 0.4;
    double Shadow Tracing Distance = 0.5;
    struct FLinearColor Volumetric Cloud Color = FLinearColor(1, 1, 1, 1);
    FSoftObjectPath Cloud Profile LUT = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Volumetric_Clouds/Cloud_Profile.Cloud_Profile");
    enum UDS_NoiseType Volumetric Cloud Noise Type = UDS_NoiseType::NewEnumerator4;
    double Distance to Sample MaxCount = 3;
    double Base Clouds Mip Level = 3;
    double Reflection Sample Count Scale = 1;
    double Reflection Shadow Sample Count Scale = 0.4;
    double Volumetric Cloud Ambient Light Intensity = 1;
    struct FLinearColor Volumetric Cloud Ambient Light (Day) = FLinearColor(0,354899, 0,463542, 0,443624, 1);
    struct FLinearColor Volumetric Cloud Ambient Light (Dawn/Dusk) = FLinearColor(0,53125, 0,313991, 0,296061, 1);
    struct FLinearColor Volumetric Cloud Ambient Light (Night) = FLinearColor(0,368548, 0,376632, 0,5, 1);
    double Volumetric Cloud Ambient Light Saturation = 0.45;
    double Multiscattering Light Intensity = 0.8;
    double Multiscattering Light Occlusion = 0.5;
    double Fog Start Distance when Clear = 7500;
    double Fog Density where Start Distance Reaches Zero = 0.08;
    bool Randomize Cloud Formation on Run = true;
    double 3D Noise Vertical Movement = 0.15;
    float Formation Change Speed = 0.7;
    double Macro Variation = 0.23;
    double Macro Scale = 1.3;
    double Multiscattering Phase 1 = 0.85;
    double Multiscattering Phase 2 = 0.4;
    double Multiscattering Eccentricity = 0.4;
    double Time Speed = 1;
    double Internal Time of Day = 860;
    double Tracing Max Start Distance = 100;
    double Aurora Shape Change Speed = 2;
    double Aurora Texture Scale = 1;
    struct FLinearColor Aurora Color 1 = FLinearColor(0,619792, 0,091135, 0,341744, 1);
    struct FLinearColor Aurora Color 2 = FLinearColor(0,189217, 1, 0,050196, 1);
    struct FLinearColor Aurora Color 3 = FLinearColor(0,070031, 0,347007, 0,65625, 1);
    TMap<int32, enum UDS_SkyMode> Sky Mode Scalability Map = {
        { 0, UDS_SkyMode::NewEnumerator6 }, 
        { 1, UDS_SkyMode::NewEnumerator1 }, 
        { 2, UDS_SkyMode::NewEnumerator0 }, 
        { 3, UDS_SkyMode::NewEnumerator0 }, 
        { 4, UDS_SkyMode::NewEnumerator0 }
    };
    double Sun Disk Intensity = 1;
    class UCurveLinearColor* Sun Disk Color Curve = "CurveLinearColor'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Color_Curves/Sun_Disk_Color.Sun_Disk_Color'";
    class UCurveFloat* Aurora Intensity Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/Stars_Intensity.Stars_Intensity'";
    double Tracing Max Distance (Inside Cloud Layer) = 6;
    double Tracing Max Distance (Outside Cloud Layer) = 20;
    FSoftObjectPath Aurora Texture = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Clouds/Aurora_Clouds.Aurora_Clouds");
    double 2D Aurora Max Samples = 14;
    double 2D Aurora Sample Step Size = 0.025;
    double 2D Aurora Line Exponent = 15;
    double 2D Aurora Mask Exponent = 3.5;
    double Volumetric Aurora Sample Count Scale = 3;
    double Volumetric Aurora Layer Height = 1.2000000476837158;
    double Volumetric Aurora Bottom Altitude = 0.5;
    double Fog Density Daytime Mutliplier = 1;
    double Fog Density Nighttime Multiplier = 0.7;
    double Base Height Fog Falloff = -0.1;
    double Cloudy Height Fog Falloff = 0.08;
    double Foggy Height Fog Falloff = 0.39;
    double Inside Cloud Fog Strength = 1;
    struct FLinearColor Inside Cloud Fog Color = FLinearColor(1, 1, 1, 1);
    double 2D Overcast Turbulence = 0.8;
    double Close Fade Distance = 100000;
    double Close Fade Offset = 5000;
    double Layer 2 Coverage Scale = 1;
    double Layer 2 Extinction Scale = 0.05000000074505806;
    struct FVector2D Layer 2 Cloud Scale = FVector2D(0,6, 1,4);
    double Layer 2 Mip Offset = 2;
    struct FVector2D Sun Light Shaft Bloom Scale = FVector2D(0,3, 0,225);
    struct FVector2D Sun Light Shaft Max Brightness = FVector2D(0,35, 0,25);
    struct FVector2D Sun Light Shaft Bloom Threshold = FVector2D(1,3, 0,35);
    struct FLinearColor Sun Light Shaft Tint Color = FLinearColor(1, 1, 1, 1);
    struct FVector2D Moon Light Shaft Bloom Scale = FVector2D(0,6, 0,3);
    struct FVector2D Moon Light Shaft Max Brightness = FVector2D(0,15, 0,1);
    struct FVector2D Moon Light Shaft Bloom Threshold = FVector2D(0,15, 0,15);
    struct FLinearColor Moon Light Shaft Tint Color = FLinearColor(1, 1, 1, 1);
    bool Factor Absent Directional Lights Brightness = true;
    bool Real Time Capture Uses Time Slicing = true;
    bool Use Mobile Overrides = true;
    enum UDS_SkyMode Volumetric Clouds Replacement = UDS_SkyMode::NewEnumerator6;
    enum UDS_SkyLightMode Real Time Capture Sky Light Replacement = UDS_SkyLightMode::NewEnumerator2;
    bool Adjust For Mobile Renderer = true;
    TArray<FString> Mobile Platforms = {
        "Android",
        "IOS"
    };
    bool Simulate Real Sun = true;
    bool Simulate Real Moon = true;
    bool Simulate Real Stars = true;
    double Latitude = 21.02;
    double Longitude = 105.85;
    double Time Zone = 7;
    int32 Year = 2018;
    int32 Month = 6;
    int32 Day = 26;
    double Simulation Speed = 6;
    bool Apply Daylight Savings Time = true;
    class UUDS_Calendar_C* Calendar = "UDS_Calendar_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/System/Calendars/Gregorian_Calendar.Gregorian_Calendar'";
    int32 DST Start Month = 3;
    int32 DST Start Day = 14;
    int32 DST End Month = 11;
    int32 DST End Day = 7;
    int32 DST Change Hour = 2;
    TArray<int32> Month Lengths = {
        31,
        28,
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30,
        31
    };
    double Lunar Orbit Calibration = 0.358599990606308;
    double Lunar Inclination Calibration = 0.6420000195503235;
    bool Daylight Savings Time = true;
    double Time of Day Movement Multiplier = 1;
    TMap<FString, FSoftObjectPath> Sky MID Parent Instances = {
        { "", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_B.UDS_B") }, 
        { "A", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_A.UDS_A") }, 
        { "AD", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_AD.UDS_AD") }, 
        { "ADO", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_ADO.UDS_ADO") }, 
        { "CA", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_CA.UDS_CA") }, 
        { "CAD", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_CAD.UDS_CAD") }, 
        { "CADO", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_CADO.UDS_CADO") }, 
        { "CD", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_CD.UDS_CD") }, 
        { "CDO", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_CDO.UDS_CDO") }, 
        { "CS", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_CS.UDS_CS") }, 
        { "D", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_D.UDS_D") }, 
        { "DO", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_DO.UDS_DO") }, 
        { "K", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_K.UDS_K") }, 
        { "KA", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KA.UDS_KA") }, 
        { "KAD", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KAD.UDS_KAD") }, 
        { "KADO", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KADO.UDS_KADO") }, 
        { "KCA", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KCA.UDS_KCA") }, 
        { "KCAD", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KCAD.UDS_KCAD") }, 
        { "KCADO", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KCADO.UDS_KCADO") }, 
        { "KCD", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KCD.UDS_KCD") }, 
        { "KCDO", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KCDO.UDS_KCDO") }, 
        { "KCS", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KCS.UDS_KCS") }, 
        { "KD", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KD.UDS_KD") }, 
        { "KDO", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KDO.UDS_KDO") }, 
        { "KS", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KS.UDS_KS") }, 
        { "P", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_P.UDS_P") }, 
        { "PC", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_PC.UDS_PC") }, 
        { "S", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_S.UDS_S") }, 
        { "C", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_C.UDS_C") }, 
        { "KC", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KC.UDS_KC") }, 
        { "KAS", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KAS.UDS_KAS") }, 
        { "KCAS", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_KCAS.UDS_KCAS") }, 
        { "AS", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_AS.UDS_AS") }, 
        { "CAS", FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/UDS_CAS.UDS_CAS") }
    };
    double Fog Shadows = 0.8;
    double Dust Shadows = 1;
    double 2D Cloud Shadows Speed = 1;
    double 2D Cloud Shadows Scale = 450000;
    bool Force Light Functions On = true;
    double Time of Day Replication Period = 1;
    double Replicated Time of Day = -1;
    double Replicated Moon Phase = -1;
    bool Affects World = true;
    bool Distance Field Shadows = true;
    double Scale Sun Radius as it Nears Horizon = 1;
    double Sun Specular Scale = 1.5;
    double Scale Moon Radius as it Nears Horizon = 1;
    double Dusty Height Fog Falloff = 0.03;
    double Moon Specular Scale = 0.5;
    double Replicated Day Length = -1;
    double Replicated Night Length = -1;
    double Replicated Time Speed = -1;
    double Replicated Simulation Speed = -1;
    double High Frequency Disable Distance = 600000;
    bool Change to Simplified Material when Overcast = true;
    double Simplified Material Cloud Coverage Threshold = 2.1;
    double Simplified Material Fade Length = 0.20000000298023224;
    double Scale View Samples when Overcast = 0.7;
    struct FVector Clouds Position = FVector(0, 0, 0);
    struct FVector Starting Cloud Texture Velocity = FVector(0,02, -0,003, -0,003);
    bool Control Sky Atmosphere Settings = true;
    struct FLinearColor Rayleigh Scattering Color (Day) = FLinearColor(0,168627, 0,407843, 1, 1);
    struct FLinearColor Rayleigh Scattering Color (Dawn/Dusk) = FLinearColor(0,17, 0,409234, 1, 1);
    struct FLinearColor Rayleigh Scattering Color (Night) = FLinearColor(0,241211, 0,347328, 0,609375, 1);
    double Desaturate Rayleigh Scattering when Cloudy = 0.4;
    double Brighten Rayleigh Scattering When Cloudy = 0.1;
    double Fog Change Speed = 2;
    double Last Frame Cloud Coverage = -1;
    TMap<FName, enum UDS_PropertyType> Properties = {
        { FName("Time of Day"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sky Mode"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Cloud Coverage"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Overall Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Saturation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Contrast"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dawn Time"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dusk Time"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Night Brightness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Directional Lights Absent Brightness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Use Sky Mode Scalability Map"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Dim Directional Lights with Cloud Coverage"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Animate Time of Day"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Day Length"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Night Length"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lights Update Period"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sunrise Event Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sunset Event Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Time Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Volumetric Cloud Rendering Mode"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Layer Height Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Bottom Altitude"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Base Clouds Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("3D Noise Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("High Frequency Noise Amount"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Extinction Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Minimum Erosion"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Shadow Sample Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Shadow Tracing Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Reflection Sample Count Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Reflection Shadow Sample Count Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Volumetric Cloud Noise Type"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Volumetric Custom Noise Texture"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Base Clouds Mip Level"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Multiscattering Light Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Multiscattering Light Occlusion"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("3D Erosion Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Macro Variation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Macro Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Multiscattering Phase 1"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Multiscattering Phase 2"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Multiscattering Eccentricity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Distance to Sample MaxCount"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Volumetric Clouds Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Volumetric Cloud Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Tracing Max Start Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Tracing Max Distance (Inside Cloud Layer)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Fog Inside Clouds"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Two Layers"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Layer 2 Coverage Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Layer 2 Extinction Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Layer 2 Cloud Scale"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Layer 2 Mip Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Distance Between Layers"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Change to Simplified Material when Overcast"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Simplified Material Cloud Coverage Threshold"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Simplified Material Fade Length"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Soften Cloud Layer 1"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Soften Cloud Layer 2"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sharpen Outer Edge"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Tiling Layer 1"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Tiling Layer 2"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Soften Horizon"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("One Cloud Layer"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Cloud Height Layer 1"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Height Layer 2"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Overcast Swirling Texture"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Noise Type"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Custom Noise Texture"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Sun Shader Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Directional Lighting Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Highlight Radius"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Highlight Radius Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Sun Highlight Intensity Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Shine Intensity Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Cloud Opacity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Horizon Density Multiplier"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Zenith Density Multiplier"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Latitude Gradient Position"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Latitude Gradient Width"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Around Sun Density Multiplier"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Around Sun Density Exponent"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Around Moon Density Multiplier"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Around Moon Density Exponent"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Direction"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Phase"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Randomize Cloud Formation on Run"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Clouds Move with Time of Day"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Time of Day Movement Multiplier"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Use Cloud Shadows"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("2D Cloud Shadows Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("2D Cloud Shadows Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Shadows Intensity When Sunny"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Shadows Intensity When Overcast"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Shadows Softness When Sunny"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Shadows Softness When Overcast"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Custom Light Function Material"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Force Light Functions On"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Cloud Wisps Opacity (Clear)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Wisps Texture"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Simulate Real Sun"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Simulate Real Moon"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Simulate Real Stars"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Latitude"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Longitude"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Time Zone"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Year"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Month"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Day"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("North Yaw"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Simulation Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Use System Time"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Apply Daylight Savings Time"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("DST Start Month"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("DST Start Day"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("DST End Month"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("DST End Day"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("DST Change Hour"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Sun Angle"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Inclination"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Vertical Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Casts Shadows"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Sun Light Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Sun Light Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Radius"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Volumetric Scattering Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Extend Dawn and Dusk"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Disk Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Disk Color Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Scale Sun Radius as it Nears Horizon"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Angle"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Inclination"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Vertical Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Orbit Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Casts Shadows"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Moon Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Phase"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Phase Changes Over Time"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Dark Side Brightness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Texture Intensity (Night)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Texture Intensity (Day)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Light Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Moon Material Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Moon Light Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("New Moon Light Brightness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Texture Rotation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Custom Moon Texture"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Moon Glow Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Volumetric Scattering Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Scale Moon Radius as it Nears Horizon"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Specular Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sky Light Mode"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Sky Light Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sky Light Temperature"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Real Time Capture"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Recapture Sky light Periodically"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Sky Light Recapture Period (Seconds)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Factor Absent Directional Lights Brightness"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Real Time Capture Uses Time Slicing"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Custom Cubemap"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Flat Cubemap"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Tinted Sky Light Lower Hemisphere Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("All Fog Colors Multiplier"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Use Volumetric Fog"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Fog Start Distance when Clear"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Base Height Fog Falloff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloudy Height Fog Falloff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Sun Light Shaft Bloom"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Sun Light Shaft Max Brightness"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Sun Light Shaft Bloom Threshold"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Sun Light Shaft Bloom Scale"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Sun Light Shaft Tint Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Enable Moon Light Shaft Bloom"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Moon Light Shaft Max Brightness"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Moon Light Shaft Bloom Threshold"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Moon Light Shaft Bloom Scale"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Moon Light Shaft Tint Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Stars Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Stars Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Stars Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Stars Tiling"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Stars Daytime Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Tiling Stars Texture"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Real Stars Texture"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Night Sky Glow"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Night Sky Glow Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Stars Phase"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Stars Intensity Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Use Auroras"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Aurora Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Aurora Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Aurora Phase"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Aurora Color 1"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Aurora Color 2"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Aurora Color 3"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Aurora Intensity Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Volumetric Aurora Sample Count Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Volumetric Aurora Layer Height"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Volumetric Aurora Bottom Altitude"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Mobility"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Moon Mobility"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Sky Light_Mobility"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Apply Exposure Settings"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Use Mobile Overrides"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Volumetric Clouds Replacement"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Real Time Capture Sky Light Replacement"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Adjust For Mobile Renderer"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Control Sky Atmosphere Settings"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Rayleigh Scattering Color (Day)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Desaturate Rayleigh Scattering when Cloudy"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Brighten Rayleigh Scattering When Cloudy"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Directional Intensity Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Sun Light"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Moon Light"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Sky Light"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Height Fog"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Light Pollution Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Light Pollution Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Base Sky Color (Day)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Custom Sky Sphere Material"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Sun Softness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Directional Balance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sunset/Sunrise Color (Absorption)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Sunset/Sunrise Color Intensity (Absorption Scale)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Inside Cloud Fog Strength"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Captured Sky Light Lower Hemisphere Tint"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Sun Specular Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Enable Sun Lens Flare"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Lens Flare Type"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Lens Flare Strength"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Scale Flare Elements"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Custom Lens Flare Parent Instance"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Lens Flare Tint"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Dimming Range Lower Bound"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dimming Range Upper Bound"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dimming Range Exponent"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Inside Cloud Fog Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("2D Overcast Turbulence"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Target"), UDS_PropertyType::NewEnumerator11 }, 
        { FName("Manually Position Sun Target"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Manually Position Moon Target"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Moon Target"), UDS_PropertyType::NewEnumerator11 }, 
        { FName("Low Material Quality Sample Count Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Medium Material Quality Sample Count Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Epic Material Quality Sample Count Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Keep Planet Top at Camera XY Location"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Sky Atmosphere Fog Influence Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Base Sky Color (Dawn/Dusk)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Base Sky Color (Night)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Cloud Light Color (Day)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Cloud Light Color (Dawn/Dusk)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Cloud Light Color (Night)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Cloud Dark Color (Day)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Cloud Dark Color (Dawn/Dusk)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Cloud Dark Color (Night)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Directional Light Scattering Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Atmospheric Scattering LUT Texture"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Fog Scattering Color Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Fog Inscattering Sun"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Fog Inscattering Moon"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Fog Directional Scattering Color Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Fog Directional Inscattering"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Foggy Desaturation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Overcast Desaturation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Overcast Brightness Day"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Overcast Brightness Night"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Base Fog Density"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Foggy Density Contribution"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloudy Density Contribution"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Scale Total Fog Density"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Density where Start Distance Reaches Zero"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Foggy Height Fog Falloff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Shadows"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sky Light Color Multiplier (Day)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Sky Light Color Multiplier (Dawn/Dusk)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Sky Light Color Multiplier (Night)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Close Fade Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Tracing Max Distance (Outside Cloud Layer)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Color Intensity Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Glow Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Distort High Frequency Noise"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Wisps Color Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Max Moon Source Angle Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Max Sun Source Angle Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Exposure Compensation Curve"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Exposure Bias Night"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Exposure Min Brightness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Exposure Max Brightness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Exposure Bias Day"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Exposure Bias Cloudy"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Exposure Bias Foggy"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Exposure Bias Dusty"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Apply Interior Adjustments"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Extra Fog Start Distance in Interior"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Density Multiplier in Interior"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Exposure Bias in Interior"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Extra Sun Volumetric Scattering in Interiors"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sky Light Intensity Multiplier in Interiors"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Extra Moon Volumetric Scattering in Interiors"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Twinkle Amount"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Twinkle Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Disable Directional Light Shadows when Fully Shadowed by Clouds"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Moon Light Intensity Multiplier in Interiors"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Light Intensity Multiplier in Interiors"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Density Daytime Mutliplier"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Density Nighttime Multiplier"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Color Mode"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Ambient Light from Sky Atmosphere"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("3D Noise Vertical Movement"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Max Property Cache Period"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Disable Image Based Lens Flares when Enabled"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Base Floor Variation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Overcast Floor Variation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Rayleigh Scattering Color (Dawn/Dusk)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Rayleigh Scattering Color (Night)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Floor Luminance Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("2D Aurora Max Samples"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("2D Aurora Line Exponent"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("2D Aurora Mask Exponent"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Aurora Texture"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("2D Aurora Sample Step Size"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("View Sample Scale (Day)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("View Sample Scale (Night)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Cloud Wisps Opacity (Cloudy)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Increase Wisps Brightness Around Sun"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Increase Wisps Brightness Around Moon"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Adjust for Path Tracer"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Color Mode"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Fog"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dust Amount"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dust Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Dust Shadows"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sun Source Angle Softness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fade Down High Sun Light Intensity Below Horizon"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Moon Source Angle Softness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dust Density Contribution"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Dusty Height Fog Falloff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Time of Day Replication Period"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Formation Change Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Glow Tint"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("High Frequency Disable Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("High Frequency Levels"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Extra Night Brightness when Cloudy"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Sky Atmosphere Overcast Luminance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Scale View Samples when Overcast"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Space Layer Brightness (Night)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Space Layer Brightness (Day)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Space Glow Brightness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Render Moon"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Solar Eclipse"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Solar Eclipse Tint Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Solar Eclipse Intensity Multiplier"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Project Mode"), UDS_PropertyType::NewEnumerator5 }, 
        { FName("Sun - Lighting Channel 0"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Sun - Lighting Channel 1"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Sun - Lighting Channel 2"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Moon - Lighting Channel 0"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Moon - Lighting Channel 1"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Moon - Lighting Channel 2"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Render Water Caustics"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Water Level"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Caustics Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Caustics Falloff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Deep Water Falloff"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Caustics Texture Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Lights Update Degree Threshold"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Blur Caustics with Depth"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Blur Caustics in Cloud Shadow"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Blur Caustics with Camera Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Masks Texture"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Low Moon Light Color Tint"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Editor Camera Normalized Height in Layer"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Disable Height Fog Above Volumetric Cloud Layer"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Cloud Profile LUT"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Volumetric Cloud Ambient Light Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Volumetric Cloud Ambient Light (Day)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Volumetric Cloud Ambient Light (Dawn/Dusk)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Volumetric Cloud Ambient Light (Night)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Volumetric Cloud Ambient Light Saturation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Close Fade Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Twilight Color (Absorption)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Twilight Color Intensity (Absorption Scale)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Disable Sky/Fog Cloudiness Above Cloud Layer"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Cloud Wisps Tint (Day)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Cloud Wisps Tint (Night)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Cloud Wisps Tint (Dawn/Dusk)"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Cloud Coverage Target Resolution"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Cloud Coverage Target Size"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Editor Cloud Coverage Target Location"), UDS_PropertyType::NewEnumerator6 }, 
        { FName("Painted Cloud Coverage Opacity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Epic Quality Volume Texture"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("High Quality Volume Texture"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Low Quality Volume Texture"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Enable Volumetric Cloud Light Rays"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Light Ray Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Light Ray Tint Color"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Light Rays Point Spacing"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Light Ray Length"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Scale Light Ray Width"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Light Rays Max Distance (Km)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Light Rays Depth Fade Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Light Rays 3D Noise Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Painted Coverage Affects Global Values"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Individual Clouds Light Rays"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Scale View Samples when Camera is In Cloud Layer"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Layer 2 Painted Cloud Coverage Opacity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Aurora Texture Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Aurora Shape Change Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Volumetric Fog Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Volumetric Fog Extinction"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Render Global Volumetric Material"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Fog Noise Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Noise Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Noise Max Samples"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Noise Sample Distance"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Mask Fog with Weather Masks"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Render Ground Fog (Fog Above Distance Fields)"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Ground Fog Extinction (Foggy)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Ground Fog Extinction (Dusty)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Ground Fog Height"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Ground Fog Height Noise"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Ground Fog Angle Threshold"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Ground Fog Hardness"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Apply Water Fog Values"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Water Extinction"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Water Albedo"), UDS_PropertyType::NewEnumerator2 }, 
        { FName("Sun Source Angle Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Moon Source Angle Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Random Starting Time"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Lens Flare Brightness Threshold"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Fog Noise Speed Scale"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Static Clouds Texture"), UDS_PropertyType::NewEnumerator13 }, 
        { FName("Static Clouds Rotation"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Static Clouds Rotation Speed"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("2D Clouds Shading Offset"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Static Clouds Color Intensity"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Minimum Active Update Speed"), UDS_PropertyType::NewEnumerator1 }, 
        { FName("Calendar"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Volumetric Aurora Fade Distance (km)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Occlusion Settings"), UDS_PropertyType::NewEnumerator3 }, 
        { FName("Ground Fog Extinction (Rainy)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Ground Fog Extinction (Snowy)"), UDS_PropertyType::NewEnumerator0 }, 
        { FName("Movable Sky Light Casts Shadows (Enable DFAO)"), UDS_PropertyType::NewEnumerator4 }, 
        { FName("Static/Stationary Sky Light Casts Shadows"), UDS_PropertyType::NewEnumerator4 }
    };
    double Last Frame Time of Day = -5;
    double Night Sky Glow = 0.6;
    struct FLinearColor Night Sky Glow Color = FLinearColor(0,093045, 0,141694, 0,255208, 1);
    struct FLinearColor Light Pollution Color = FLinearColor(0,630208, 0,505004, 0,410265, 1);
    double Dimming Range Lower Bound = 1.399999976158142;
    double Dimming Range Upper Bound = 2;
    double Dimming Range Exponent = 2;
     Midnight = ;
    struct FLinearColor Sunset/Sunrise Color (Absorption) = FLinearColor(0,199782, 0,094529, 1, 1);
    double Sunset/Sunrise Color Intensity (Absorption Scale) = 0.02;
    double Simulated Sunrise Time = 500;
    double Simulated Sunset Time = 2100;
    double Base Cloud Height = 0.7;
    double Lens Flare Strength = 0.30000001192092896;
    struct FLinearColor Lens Flare Tint = FLinearColor(1, 0,710467, 0,440498, 1);
    double Lens Flare Brightness Threshold = 0.95;
    double Scale Flare Elements = 1;
    double Target Sky Light Multiplier = 1;
    double Dynamic Sky Light Multiplier = 1;
    double Scale View Samples when Camera is In Cloud Layer = 1;
    double Low Material Quality Sample Count Scale = 0.800000011920929;
    double Medium Material Quality Sample Count Scale = 0.8999999761581421;
    double Epic Material Quality Sample Count Scale = 1.149999976158142;
    FSoftObjectPath Epic Quality Volume Texture = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/3D_Clouds/3DCells_128.3DCells_128");
    FSoftObjectPath High Quality Volume Texture = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/3D_Clouds/3D_Cells_64.3D_Cells_64");
    FSoftObjectPath Low Quality Volume Texture = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/3D_Clouds/3D_Cells_32.3D_Cells_32");
    FSoftObjectPath Inside Cloud Fog Parent Material = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Inside_Clouds_Fog_Particle.Inside_Clouds_Fog_Particle");
    FSoftObjectPath Inside Cloud Fog System = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Particles/Inside_Cloud_Fog.Inside_Cloud_Fog");
    FSoftObjectPath Post Process Cloud Fog Parent Material = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Cloud_Fog_PostProcess.Cloud_Fog_PostProcess");
    TArray<class UObject*> Volumetric Cloud MIDs = {
        nullptr,
        nullptr
    };
    struct FLinearColor Twilight Color (Absorption) = FLinearColor(0,030354, 0,181178, 1, 1);
    double Twilight Color Intensity (Absorption Scale) = 0.004;
    bool Keep Planet Top at Camera XY Location = true;
    struct FLinearColor Base Sky Color (Day) = FLinearColor(0,050313, 0,100844, 0,21875, 1);
    struct FLinearColor Base Sky Color (Dawn/Dusk) = FLinearColor(0,094145, 0,167055, 0,260417, 1);
    struct FLinearColor Base Sky Color (Night) = FLinearColor(0,065593, 0,102341, 0,161458, 1);
    struct FLinearColor Cloud Light Color (Day) = FLinearColor(0,708631, 0,785507, 0,901042, 1);
    struct FLinearColor Cloud Light Color (Dawn/Dusk) = FLinearColor(1, 0,477468, 0,054318, 1);
    struct FLinearColor Cloud Light Color (Night) = FLinearColor(1,177604, 1,321682, 1,7, 1);
    struct FLinearColor Cloud Dark Color (Day) = FLinearColor(0,034505, 0,119041, 0,276042, 1);
    struct FLinearColor Cloud Dark Color (Dawn/Dusk) = FLinearColor(0,04305, 0,06991, 0,119792, 1);
    struct FLinearColor Cloud Dark Color (Night) = FLinearColor(0,070258, 0,10947, 0,182292, 1);
    struct FLinearColor Sun Glow Color = FLinearColor(0,515625, 0,645128, 1, 1);
    struct FLinearColor Moon Glow Tint = FLinearColor(1, 1, 1, 1);
    class UCurveFloat* Directional Intensity Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/Directional_Light_Intensity.Directional_Light_Intensity'";
    class UCurveLinearColor* Directional Light Scattering Curve = "CurveLinearColor'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Color_Curves/Sun_Light_Color.Sun_Light_Color'";
    class UTexture2D* Atmospheric Scattering LUT Texture = "Texture2D'Test_C/Content/ThirdParty/UltraDynamicSky/Textures/Sky/AtmosphericScattering_LUT.AtmosphericScattering_LUT'";
    enum UDS_FogColorMode Fog Color Mode = UDS_FogColorMode::NewEnumerator0;
    double Fog Color Intensity Scale = 1;
    class UCurveLinearColor* Fog Scattering Color Curve = "CurveLinearColor'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Color_Curves/Fog_Scattering_Color.Fog_Scattering_Color'";
    struct FLinearColor Fog Inscattering Sun = FLinearColor(0,08362, 0,156441, 0,302083, 1);
    struct FLinearColor Fog Inscattering Moon = FLinearColor(0,047472, 0,07505, 0,130208, 1);
    class UCurveLinearColor* Fog Directional Scattering Color Curve = "CurveLinearColor'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Color_Curves/Fog_Directional_Scattering_Color.Fog_Directional_Scattering_Color'";
    struct FLinearColor Fog Directional Inscattering = FLinearColor(0,146484, 0,147386, 0,15625, 1);
    double Foggy Desaturation = 0.2;
    double Overcast Desaturation = 0.3;
    double Overcast Brightness Day = 0.8;
    double Overcast Brightness Night = 0.4;
    struct FLinearColor All Fog Colors Multiplier = FLinearColor(1, 1, 1, 1);
    class UCurveFloat* Sky Atmosphere Fog Influence Curve = "CurveFloat'Test_C/Content/ThirdParty/UltraDynamicSky/Materials/Float_Curves/SkyAtmo_Fog_Influence.SkyAtmo_Fog_Influence'";
    struct FLinearColor Dust Color = FLinearColor(0,260417, 0,21676, 0,184462, 1);
    bool Use Volumetric Fog = true;
    double Volumetric Fog Extinction (Foggy) = 1;
    double Sun Volumetric Scattering Intensity = 1;
    bool Disable Height Fog Above Volumetric Cloud Layer = true;
    float Height Fog Density = 0.007576667;
    struct FVector Current Camera Location = FVector(0, 0, -10000000);
    struct FLinearColor Volumetric Fog Color = FLinearColor(0,0063, 0,020065, 0,056467, 1,47);
    struct FLinearColor Ambient Fog Color = FLinearColor(0,006299773, 0,02006521, 0,056467228, 1,47);
    struct FLinearColor Directional Base Fog Color = FLinearColor(0,14651613, 0,14740008, 0,1560868, 0,98);
    struct FLinearColor Scaled Directional Base Fog Color = FLinearColor(0,15754423, 0,15849471, 0,16783528, 0,98);
    FSoftObjectPath Volumetric Aurora Parent Material = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Volumetric_Aurora.Volumetric_Aurora");
    FSoftObjectPath Moon Masks Texture = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/Sky/Moon_Masks.Moon_Masks");
    FSoftObjectPath Overcast Turbulence Parent Material = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Overcast_Turbulence.Overcast_Turbulence");
     Hourly = ;
    float Cloud Wisps Color Intensity = 1;
    double Max Sun Source Angle Scale = 2;
    double Sun Source Angle Softness = 1;
    double Max Moon Source Angle Scale = 20;
    enum EEasingFunc Transition Easing Function = EEasingFunc::EaseInOut;
    double Transition Easing Exponent = 2;
    struct FTimerHandle Transition Timer = {
        "Handle": 0
    };
    double Moon Source Angle Softness = 1;
    float Exposure Min Brightness = -10;
    float Exposure Max Brightness = 20;
    bool Apply Interior Adjustments = true;
    double Extra Fog Start Distance in Interior = 700;
    double Fog Density Multiplier in Interior = 0.7;
    double Sky Light Intensity Multiplier in Interiors = 0.7;
    double Sun Light Intensity Multiplier in Interiors = 1.1;
    double Moon Light Intensity Multiplier in Interiors = 1;
    double Extra Sun Volumetric Scattering in Interiors = 2;
    double Extra Moon Volumetric Scattering in Interiors = 0.5;
    class UUDS_OcclusionSettings_C* Occlusion Settings = "UDS_OcclusionSettings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Occlusion/Occlusion_Settings/IRR_Occlusion_Settings.IRR_Occlusion_Settings'";
    double Cloud Shadow Disable Threshold = 2;
    double Cloud Bottom World Height = 60050;
    TArray<double> Cached Floats Old = {
        0,
        0.10000000149011612,
        0.4559999942779541,
        0,
        0.03333333276567005,
        0.016629333050773257,
        0,
        0.6000000238418579,
        0.2866277728337283,
        0,
        -0.6211510654490107,
        0,
        0,
        0,
        0,
        0,
        1,
        0,
        24.50008036388019,
        0,
        0,
        0.37499999474935103,
        0.8000000098835747,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0.08666666666666667,
        0,
        -5.093036918272921E-09,
        0,
        0,
        0,
        5,
        1,
        0.999,
        1,
        0,
        1.0019,
        0,
        0,
        0,
        0.00757666677236557,
        0,
        0,
        0.0555,
        10455.919355536711,
        0,
        0,
        0,
        0,
        0,
        0.8151999757051467,
        0,
        1,
        0,
        0,
        0.75,
        0.0083976,
        0,
        0,
        0,
        0,
        0,
        20,
        0,
        0,
        0.5,
        0.23,
        0,
        1.310999983549118,
        0,
        0.08000000000000002,
        0.8,
        0.35,
        0.22016780674171577,
        2,
        5,
        0,
        0,
        0,
        0.850000001400173,
        0,
        0.2,
        1.1399999856948853,
        0,
        0,
        0.8,
        0.5599999999999999,
        0,
        0,
        0,
        0,
        0,
        0
    };
    TArray<double> Cached Floats New = {
        0,
        0.10000000149011612,
        0.4559999942779541,
        0,
        0.03333333276567005,
        0.016629333050773257,
        0,
        0.6000000238418579,
        0.2866277728337283,
        0,
        -0.6211510654490107,
        0,
        0,
        0,
        0,
        0,
        1,
        0,
        24.50008036388019,
        0,
        0,
        0.37499999474935103,
        0.8000000098835747,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0.08666666666666667,
        0,
        -5.093036918272921E-09,
        0,
        0,
        0,
        5,
        1,
        0.999,
        1,
        0,
        1.0019,
        0,
        0,
        0,
        0.00757666677236557,
        0,
        0,
        0.0555,
        10455.919355536711,
        0,
        0,
        0,
        0,
        0,
        0.8151999757051467,
        0,
        1,
        0,
        0,
        0.75,
        0.0083976,
        0,
        0,
        0,
        0,
        0,
        20,
        0,
        0,
        0.5,
        0.23,
        0,
        1.310999983549118,
        0,
        0.08000000000000002,
        0.8,
        0.35,
        0.22016780674171577,
        2,
        5,
        0,
        0,
        0,
        0.850000001400173,
        0,
        0.2,
        1.1399999856948853,
        0,
        0,
        0.8,
        0.5599999999999999,
        0,
        0,
        0,
        0,
        0,
        0
    };
    double Cache Alpha = 1;
    bool Filling Starting Cache = true;
    TArray<struct FLinearColor> Cached Colors Old = {
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(-0,8773115, -0,47992134, 0, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(1,2167964E-08, 1, -0, -0,19161113),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,201709, -0,77590626, -0,59773153, 1,8045369),
        FLinearColor(0,201709, -0,77590626, 0,59773153, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(-0,051214725, 0,98975426, 0,13327993, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(-9,1961725E-12, -1,4004431E-11, -2,5223672E-11, -9,8835745E-11),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(105,28674, 72,56532, 28,01542, 208,49268),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(-3,0836749E-09, -4,068458E-09, -6,3662964E-09, -6,3662964E-09),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(1, 1, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,006299773, 0,02006521, 0,056467228, 1,47),
        FLinearColor(0,12453871, 0,12529007, 0,13267379, 0,83300006),
        FLinearColor(0,14966638, 0,15485917, 0,17499158, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,006299773, 0,02006521, 0,056467228, 1,47),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,023400359, 0,06867294, 0,17971492, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(1, 1, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,0016405681, 0,004613092, 0,011411688, 1),
        FLinearColor(1, 1, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,168627, 0,407843, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,22500001, 0,22500001, 0,22500001, 0,75),
        FLinearColor(0,0036867703, 0,0060252547, 0,013558145, 1,3499999),
        FLinearColor(0,002457847, 0,0040168366, 0,009038763, 1,3499999),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,201709, -0,77590626, -0,59773153, 5),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(1, 1, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,89474696, 1, 0,09452903, 0,002),
        FLinearColor(0,012725626, 0,026831731, 0,047665678, 1,5),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0,5),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0)
    };
    TArray<struct FLinearColor> Cached Colors New = {
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(-0,8773115, -0,47992134, 0, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(1,2167964E-08, 1, -0, -0,19161113),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,201709, -0,77590626, -0,59773153, 1,8045369),
        FLinearColor(0,201709, -0,77590626, 0,59773153, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(-0,051214725, 0,98975426, 0,13327993, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(-9,1961725E-12, -1,4004431E-11, -2,5223672E-11, -9,8835745E-11),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(105,28674, 72,56532, 28,01542, 208,49268),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(-3,0836749E-09, -4,068458E-09, -6,3662964E-09, -6,3662964E-09),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(1, 1, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,006299773, 0,02006521, 0,056467228, 1,47),
        FLinearColor(0,12453871, 0,12529007, 0,13267379, 0,83300006),
        FLinearColor(0,14966638, 0,15485917, 0,17499158, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,006299773, 0,02006521, 0,056467228, 1,47),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,023400359, 0,06867294, 0,17971492, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(1, 1, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,0016405681, 0,004613092, 0,011411688, 1),
        FLinearColor(1, 1, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,168627, 0,407843, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,22500001, 0,22500001, 0,22500001, 0,75),
        FLinearColor(0,0036867703, 0,0060252547, 0,013558145, 1,3499999),
        FLinearColor(0,002457847, 0,0040168366, 0,009038763, 1,3499999),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,201709, -0,77590626, -0,59773153, 5),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(1, 1, 1, 1),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0,89474696, 1, 0,09452903, 0,002),
        FLinearColor(0,012725626, 0,026831731, 0,047665678, 1,5),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0,5),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0),
        FLinearColor(0, 0, 0, 0)
    };
    TArray<struct FVector> Cached Vectors Old = {
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0,201709, -0,77590626, -0,59773153),
        FVector(-0,63452685, -0,13530482, 0,76096535),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
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
    TArray<struct FVector> Cached Vectors New = {
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0,201709, -0,77590626, -0,59773153),
        FVector(-0,63452685, -0,13530482, 0,76096535),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
        FVector(0, 0, 0),
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
    struct FVector Cached Sun Vector = FVector(0,201709, -0,77590626, -0,59773153);
    struct FVector Cached Moon Vector = FVector(-0,63452685, -0,13530482, 0,76096535);
    double Last Frame Fog = -1;
    double Last Frame Dust = -1;
    TArray<bool> Cached Value Changing = {
        true,
        true,
        true,
        false,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        false,
        true,
        true,
        true,
        true,
        true,
        false,
        false,
        false,
        false,
        false,
        true,
        true,
        true,
        true,
        false,
        false,
        false,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        false,
        false,
        true,
        true,
        true,
        true,
        false,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        false,
        true,
        true,
        false,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        true,
        false,
        false,
        false
    };
    double Max Property Cache Period = 1.5;
    TMap<enum UDS_CityPresets, struct FVector> Preset Location Coordinates = {
        { UDS_CityPresets::NewEnumerator1, FVector(5,55, -0,2, 0) }, 
        { UDS_CityPresets::NewEnumerator2, FVector(9,03, 38,74, 3) }, 
        { UDS_CityPresets::NewEnumerator3, FVector(-34,92, 138,6, 9,5) }, 
        { UDS_CityPresets::NewEnumerator4, FVector(36,75, 3,05, 1) }, 
        { UDS_CityPresets::NewEnumerator5, FVector(43,27, 76,89, 6) }, 
        { UDS_CityPresets::NewEnumerator6, FVector(31,94, 35,93, 2) }, 
        { UDS_CityPresets::NewEnumerator7, FVector(52,36, 4,9, 1) }, 
        { UDS_CityPresets::NewEnumerator8, FVector(64,73, 177,51, 12) }, 
        { UDS_CityPresets::NewEnumerator9, FVector(61,21, -149,89, -9) }, 
        { UDS_CityPresets::NewEnumerator10, FVector(39,93, 32,85, 3) }, 
        { UDS_CityPresets::NewEnumerator11, FVector(-18,93, 47,51, 3) }, 
        { UDS_CityPresets::NewEnumerator12, FVector(-25,3, -57,63, -4) }, 
        { UDS_CityPresets::NewEnumerator13, FVector(37,98, 23,72, 2) }, 
        { UDS_CityPresets::NewEnumerator14, FVector(33,74, -84,39, -5) }, 
        { UDS_CityPresets::NewEnumerator15, FVector(-36,84, 174,74, 12) }, 
        { UDS_CityPresets::NewEnumerator16, FVector(33,33, 44,38, 3) }, 
        { UDS_CityPresets::NewEnumerator17, FVector(13,75, 100,49, 7) }, 
        { UDS_CityPresets::NewEnumerator18, FVector(41,38, 2,18, 1) }, 
        { UDS_CityPresets::NewEnumerator19, FVector(39,9, 116,39, 8) }, 
        { UDS_CityPresets::NewEnumerator20, FVector(33,88, 35,51, 2) }, 
        { UDS_CityPresets::NewEnumerator21, FVector(44,81, 20,45, 1) }, 
        { UDS_CityPresets::NewEnumerator22, FVector(12,97, 77,59, 5,5) }, 
        { UDS_CityPresets::NewEnumerator23, FVector(52,52, 13,4, 1) }, 
        { UDS_CityPresets::NewEnumerator24, FVector(4,71, -74,07, -5) }, 
        { UDS_CityPresets::NewEnumerator25, FVector(42,36, -71,05, -5) }, 
        { UDS_CityPresets::NewEnumerator26, FVector(-15,79, -47,88, -3) }, 
        { UDS_CityPresets::NewEnumerator27, FVector(-27,46, 153,02, 10) }, 
        { UDS_CityPresets::NewEnumerator28, FVector(50,84, 4,35, 1) }, 
        { UDS_CityPresets::NewEnumerator29, FVector(44,43, 26,1, 2) }, 
        { UDS_CityPresets::NewEnumerator30, FVector(47,49, 19,05, 1) }, 
        { UDS_CityPresets::NewEnumerator31, FVector(-34,6, -58,38, -3) }, 
        { UDS_CityPresets::NewEnumerator32, FVector(30,04, 31,23, 2) }, 
        { UDS_CityPresets::NewEnumerator33, FVector(51,04, -114,05, -7) }, 
        { UDS_CityPresets::NewEnumerator34, FVector(-35,29, 149,12, 10) }, 
        { UDS_CityPresets::NewEnumerator35, FVector(-33,92, 18,42, 2) }, 
        { UDS_CityPresets::NewEnumerator36, FVector(10,48, -66,9, -4) }, 
        { UDS_CityPresets::NewEnumerator37, FVector(33,53, -7,58, 1) }, 
        { UDS_CityPresets::NewEnumerator38, FVector(41,88, -87,62, -6) }, 
        { UDS_CityPresets::NewEnumerator39, FVector(55,67, 12,56, 1) }, 
        { UDS_CityPresets::NewEnumerator40, FVector(32,77, -96,8, -6) }, 
        { UDS_CityPresets::NewEnumerator41, FVector(-6,8, 39,28, 3) }, 
        { UDS_CityPresets::NewEnumerator42, FVector(-12,43, 130,84, 9,5) }, 
        { UDS_CityPresets::NewEnumerator43, FVector(39,73, -104,98, -7) }, 
        { UDS_CityPresets::NewEnumerator44, FVector(42,33, -83,04, -5) }, 
        { UDS_CityPresets::NewEnumerator45, FVector(23,76, 90,38, 6) }, 
        { UDS_CityPresets::NewEnumerator46, FVector(25,38, 51,53, 3) }, 
        { UDS_CityPresets::NewEnumerator47, FVector(25,26, 55,39, 4) }, 
        { UDS_CityPresets::NewEnumerator48, FVector(53,35, -6,26, 0) }, 
        { UDS_CityPresets::NewEnumerator49, FVector(53,53, -113,49, -7) }, 
        { UDS_CityPresets::NewEnumerator50, FVector(50,11, 8,68, 1) }, 
        { UDS_CityPresets::NewEnumerator51, FVector(14,61, -90,53, -6) }, 
        { UDS_CityPresets::NewEnumerator52, FVector(44,86, -63,71, -4) }, 
        { UDS_CityPresets::NewEnumerator53, FVector(21,02, 105,85, 7) }, 
        { UDS_CityPresets::NewEnumerator54, FVector(-17,82, 31,05, 2) }, 
        { UDS_CityPresets::NewEnumerator55, FVector(23,13, -82,35, -5) }, 
        { UDS_CityPresets::NewEnumerator56, FVector(60,17, 24,93, 2) }, 
        { UDS_CityPresets::NewEnumerator57, FVector(22,3, 114,2, 8) }, 
        { UDS_CityPresets::NewEnumerator58, FVector(21,3, -157,85, -10) }, 
        { UDS_CityPresets::NewEnumerator59, FVector(29,76, -95,38, -6) }, 
        { UDS_CityPresets::NewEnumerator60, FVector(39,76, -86,15, -5) }, 
        { UDS_CityPresets::NewEnumerator61, FVector(33,69, 73,06, 5) }, 
        { UDS_CityPresets::NewEnumerator62, FVector(41,01, 28,95, 3) }, 
        { UDS_CityPresets::NewEnumerator63, FVector(-6,2, 106,81, 7) }, 
        { UDS_CityPresets::NewEnumerator64, FVector(31,78, 35,21, 2) }, 
        { UDS_CityPresets::NewEnumerator65, FVector(-26,2, 28,04, 2) }, 
        { UDS_CityPresets::NewEnumerator66, FVector(34,52, 69,17, 4,5) }, 
        { UDS_CityPresets::NewEnumerator67, FVector(24,86, 67,01, 5) }, 
        { UDS_CityPresets::NewEnumerator68, FVector(27,71, 85,32, 5,75) }, 
        { UDS_CityPresets::NewEnumerator69, FVector(15,5, 32,56, 2) }, 
        { UDS_CityPresets::NewEnumerator70, FVector(17,97, -76,79, -5) }, 
        { UDS_CityPresets::NewEnumerator71, FVector(-4,32, 15,32, 1) }, 
        { UDS_CityPresets::NewEnumerator72, FVector(1,85, -157,4, 14) }, 
        { UDS_CityPresets::NewEnumerator73, FVector(22,56, 88,73, 5,5) }, 
        { UDS_CityPresets::NewEnumerator74, FVector(3,14, 101,69, 8) }, 
        { UDS_CityPresets::NewEnumerator75, FVector(29,36, 47,97, 3) }, 
        { UDS_CityPresets::NewEnumerator76, FVector(50,45, 30,52, 2) }, 
        { UDS_CityPresets::NewEnumerator77, FVector(-16,5, -68,15, -4) }, 
        { UDS_CityPresets::NewEnumerator78, FVector(6,45, 3,38, 1) }, 
        { UDS_CityPresets::NewEnumerator79, FVector(31,54, 74,34, 5) }, 
        { UDS_CityPresets::NewEnumerator80, FVector(36,175, -115,13, -8) }, 
        { UDS_CityPresets::NewEnumerator81, FVector(-12,06, -77,03, -5) }, 
        { UDS_CityPresets::NewEnumerator82, FVector(38,72, -9,15, 0) }, 
        { UDS_CityPresets::NewEnumerator83, FVector(51,5, -0,12, 0) }, 
        { UDS_CityPresets::NewEnumerator84, FVector(34,05, -118,25, -8) }, 
        { UDS_CityPresets::NewEnumerator85, FVector(40,41, -3,7, 1) }, 
        { UDS_CityPresets::NewEnumerator86, FVector(12,13, -86,25, -6) }, 
        { UDS_CityPresets::NewEnumerator87, FVector(14,59, 120,97, 8) }, 
        { UDS_CityPresets::NewEnumerator104, FVector(-77,84, 166,66, 12) }, 
        { UDS_CityPresets::NewEnumerator88, FVector(-37,81, 144,96, 10) }, 
        { UDS_CityPresets::NewEnumerator89, FVector(19,43, -99,13, -6) }, 
        { UDS_CityPresets::NewEnumerator90, FVector(25,77, -80,2, -5) }, 
        { UDS_CityPresets::NewEnumerator91, FVector(44,98, -93,26, -6) }, 
        { UDS_CityPresets::NewEnumerator92, FVector(53,9, 27,56, 3) }, 
        { UDS_CityPresets::NewEnumerator93, FVector(-34,88, -56,18, -3) }, 
        { UDS_CityPresets::NewEnumerator94, FVector(45,5, -73,55, -5) }, 
        { UDS_CityPresets::NewEnumerator95, FVector(55,75, 37,61, 3) }, 
        { UDS_CityPresets::NewEnumerator96, FVector(19,06, 72,8, 5,5) }, 
        { UDS_CityPresets::NewEnumerator97, FVector(-1,28, 36,81, 3) }, 
        { UDS_CityPresets::NewEnumerator98, FVector(25,07, -77,33, -5) }, 
        { UDS_CityPresets::NewEnumerator99, FVector(28,61, 77,2, 5,5) }, 
        { UDS_CityPresets::NewEnumerator100, FVector(29,95, -90,08, -6) }, 
        { UDS_CityPresets::NewEnumerator101, FVector(40,71, -74, -5) }, 
        { UDS_CityPresets::NewEnumerator102, FVector(59,91, 10,73, 1) }, 
        { UDS_CityPresets::NewEnumerator103, FVector(45,42, -75,69, -5) }, 
        { UDS_CityPresets::NewEnumerator105, FVector(48,85, 2,35, 1) }, 
        { UDS_CityPresets::NewEnumerator106, FVector(-31,95, 115,86, 8) }, 
        { UDS_CityPresets::NewEnumerator107, FVector(39,95, -75,16, -5) }, 
        { UDS_CityPresets::NewEnumerator108, FVector(33,44, -112,07, -7) }, 
        { UDS_CityPresets::NewEnumerator109, FVector(50,08, 14,42, 1) }, 
        { UDS_CityPresets::NewEnumerator110, FVector(64,14, -21,94, 0) }, 
        { UDS_CityPresets::NewEnumerator111, FVector(-22,91, -43,2, -3) }, 
        { UDS_CityPresets::NewEnumerator112, FVector(24,63, 46,71, 3) }, 
        { UDS_CityPresets::NewEnumerator113, FVector(41,89, 12,48, 1) }, 
        { UDS_CityPresets::NewEnumerator114, FVector(40,76, -111,89, -7) }, 
        { UDS_CityPresets::NewEnumerator115, FVector(37,77, -122,41, -8) }, 
        { UDS_CityPresets::NewEnumerator116, FVector(18,4, -66,06, -4) }, 
        { UDS_CityPresets::NewEnumerator117, FVector(13,69, -89,19, -6) }, 
        { UDS_CityPresets::NewEnumerator118, FVector(-33,45, -70,66, -4) }, 
        { UDS_CityPresets::NewEnumerator119, FVector(18,46, -69,95, -4) }, 
        { UDS_CityPresets::NewEnumerator120, FVector(-23,55, -46,63, -3) }, 
        { UDS_CityPresets::NewEnumerator121, FVector(47,6, -122,33, -8) }, 
        { UDS_CityPresets::NewEnumerator122, FVector(37,56, 126,99, 9) }, 
        { UDS_CityPresets::NewEnumerator123, FVector(31,22, 121,47, 8) }, 
        { UDS_CityPresets::NewEnumerator124, FVector(1,39, 103,82, 8) }, 
        { UDS_CityPresets::NewEnumerator125, FVector(42,7, 23,33, 2) }, 
        { UDS_CityPresets::NewEnumerator126, FVector(47,48, -52,79, -3,5) }, 
        { UDS_CityPresets::NewEnumerator127, FVector(59,32, 18,06, 1) }, 
        { UDS_CityPresets::NewEnumerator128, FVector(-18,14, 178,44, 12) }, 
        { UDS_CityPresets::NewEnumerator129, FVector(-33,86, 151,21, 10) }, 
        { UDS_CityPresets::NewEnumerator130, FVector(25,06, 121,51, 8) }, 
        { UDS_CityPresets::NewEnumerator131, FVector(59,43, 24,74, 2) }, 
        { UDS_CityPresets::NewEnumerator132, FVector(41,3, 69,26, 5) }, 
        { UDS_CityPresets::NewEnumerator133, FVector(14,1, -87,21, -6) }, 
        { UDS_CityPresets::NewEnumerator134, FVector(35,68, 51,38, 3,5) }, 
        { UDS_CityPresets::NewEnumerator135, FVector(35,68, 139,69, 9) }, 
        { UDS_CityPresets::NewEnumerator136, FVector(43,74, -79,37, -5) }, 
        { UDS_CityPresets::NewEnumerator137, FVector(49,26, -123,11, -8) }, 
        { UDS_CityPresets::NewEnumerator138, FVector(48,2, 16,36, 1) }, 
        { UDS_CityPresets::NewEnumerator139, FVector(52,23, 21,01, 1) }, 
        { UDS_CityPresets::NewEnumerator140, FVector(38,9, -77,01, -5) }, 
        { UDS_CityPresets::NewEnumerator141, FVector(49,88, -97,14, -6) }, 
        { UDS_CityPresets::NewEnumerator142, FVector(16,79, 96,16, 6,5) }, 
        { UDS_CityPresets::NewEnumerator143, FVector(45,81, 15,98, 1) }, 
        { UDS_CityPresets::NewEnumerator144, FVector(47,37, 8,54, 1) }
    };
    bool Disable Image Based Lens Flares when Enabled = true;
    TArray<struct FUDS_Post_Process_Stage> Post Process Components = {
        {
            "Label_24_760DA3B649F655929138B7846A0B840F": "Daytime",
            "PostProcessSettings_25_E746F2674432B2790E7147B9B9D48686": {
                "bOverride_TemperatureType": false,
                "bOverride_WhiteTemp": true,
                "bOverride_WhiteTint": true,
                "bOverride_ColorSaturation": false,
                "bOverride_ColorContrast": false,
                "bOverride_ColorGamma": false,
                "bOverride_ColorGain": false,
                "bOverride_ColorOffset": false,
                "bOverride_ColorSaturationShadows": false,
                "bOverride_ColorContrastShadows": false,
                "bOverride_ColorGammaShadows": false,
                "bOverride_ColorGainShadows": false,
                "bOverride_ColorOffsetShadows": false,
                "bOverride_ColorSaturationMidtones": false,
                "bOverride_ColorContrastMidtones": false,
                "bOverride_ColorGammaMidtones": false,
                "bOverride_ColorGainMidtones": false,
                "bOverride_ColorOffsetMidtones": false,
                "bOverride_ColorSaturationHighlights": false,
                "bOverride_ColorContrastHighlights": false,
                "bOverride_ColorGammaHighlights": false,
                "bOverride_ColorGainHighlights": false,
                "bOverride_ColorOffsetHighlights": false,
                "bOverride_ColorCorrectionShadowsMax": false,
                "bOverride_ColorCorrectionHighlightsMin": false,
                "bOverride_ColorCorrectionHighlightsMax": false,
                "bOverride_BlueCorrection": false,
                "bOverride_ExpandGamut": false,
                "bOverride_ToneCurveAmount": false,
                "bOverride_FilmSlope": true,
                "bOverride_FilmToe": true,
                "bOverride_FilmShoulder": true,
                "bOverride_FilmBlackClip": true,
                "bOverride_FilmWhiteClip": true,
                "bOverride_SceneColorTint": false,
                "bOverride_SceneFringeIntensity": false,
                "bOverride_ChromaticAberrationStartOffset": false,
                "bOverride_bMegaLights": false,
                "bOverride_AmbientCubemapTint": false,
                "bOverride_AmbientCubemapIntensity": false,
                "bOverride_BloomMethod": false,
                "bOverride_BloomIntensity": false,
                "bOverride_BloomThreshold": false,
                "bOverride_Bloom1Tint": false,
                "bOverride_Bloom1Size": true,
                "bOverride_Bloom2Size": false,
                "bOverride_Bloom2Tint": true,
                "bOverride_Bloom3Tint": true,
                "bOverride_Bloom3Size": false,
                "bOverride_Bloom4Tint": false,
                "bOverride_Bloom4Size": false,
                "bOverride_Bloom5Tint": false,
                "bOverride_Bloom5Size": false,
                "bOverride_Bloom6Tint": false,
                "bOverride_Bloom6Size": true,
                "bOverride_BloomSizeScale": true,
                "bOverride_BloomConvolutionTexture": false,
                "bOverride_BloomConvolutionScatterDispersion": false,
                "bOverride_BloomConvolutionSize": false,
                "bOverride_BloomConvolutionCenterUV": false,
                "bOverride_BloomConvolutionPreFilterMin": false,
                "bOverride_BloomConvolutionPreFilterMax": false,
                "bOverride_BloomConvolutionPreFilterMult": false,
                "bOverride_BloomConvolutionBufferScale": false,
                "bOverride_BloomDirtMaskIntensity": false,
                "bOverride_BloomDirtMaskTint": false,
                "bOverride_BloomDirtMask": false,
                "bOverride_CameraShutterSpeed": false,
                "bOverride_CameraISO": false,
                "bOverride_AutoExposureMethod": false,
                "bOverride_AutoExposureLowPercent": false,
                "bOverride_AutoExposureHighPercent": false,
                "bOverride_AutoExposureMinBrightness": false,
                "bOverride_AutoExposureMaxBrightness": false,
                "bOverride_AutoExposureSpeedUp": false,
                "bOverride_AutoExposureSpeedDown": false,
                "bOverride_AutoExposureBias": false,
                "bOverride_AutoExposureBiasCurve": false,
                "bOverride_AutoExposureMeterMask": false,
                "bOverride_AutoExposureApplyPhysicalCameraExposure": false,
                "bOverride_HistogramLogMin": false,
                "bOverride_HistogramLogMax": false,
                "bOverride_LocalExposureMethod": false,
                "bOverride_LocalExposureHighlightContrastScale": true,
                "bOverride_LocalExposureShadowContrastScale": true,
                "bOverride_LocalExposureHighlightContrastCurve": false,
                "bOverride_LocalExposureShadowContrastCurve": false,
                "bOverride_LocalExposureHighlightThreshold": false,
                "bOverride_LocalExposureShadowThreshold": false,
                "bOverride_LocalExposureDetailStrength": true,
                "bOverride_LocalExposureBlurredLuminanceBlend": true,
                "bOverride_LocalExposureBlurredLuminanceKernelSizePercent": true,
                "bOverride_LocalExposureHighlightThresholdStrength": false,
                "bOverride_LocalExposureShadowThresholdStrength": false,
                "bOverride_LocalExposureMiddleGreyBias": true,
                "bOverride_LensFlareIntensity": false,
                "bOverride_LensFlareTint": false,
                "bOverride_LensFlareTints": false,
                "bOverride_LensFlareBokehSize": false,
                "bOverride_LensFlareBokehShape": false,
                "bOverride_LensFlareThreshold": false,
                "bOverride_VignetteIntensity": false,
                "bOverride_Sharpen": true,
                "bOverride_FilmGrainIntensity": false,
                "bOverride_FilmGrainIntensityShadows": false,
                "bOverride_FilmGrainIntensityMidtones": false,
                "bOverride_FilmGrainIntensityHighlights": false,
                "bOverride_FilmGrainShadowsMax": false,
                "bOverride_FilmGrainHighlightsMin": false,
                "bOverride_FilmGrainHighlightsMax": false,
                "bOverride_FilmGrainTexelSize": false,
                "bOverride_FilmGrainTexture": false,
                "bOverride_AmbientOcclusionIntensity": true,
                "bOverride_AmbientOcclusionStaticFraction": true,
                "bOverride_AmbientOcclusionRadius": true,
                "bOverride_AmbientOcclusionFadeDistance": true,
                "bOverride_AmbientOcclusionFadeRadius": true,
                "bOverride_AmbientOcclusionRadiusInWS": true,
                "bOverride_AmbientOcclusionPower": true,
                "bOverride_AmbientOcclusionBias": true,
                "bOverride_AmbientOcclusionQuality": true,
                "bOverride_AmbientOcclusionMipBlend": true,
                "bOverride_AmbientOcclusionMipScale": true,
                "bOverride_AmbientOcclusionMipThreshold": true,
                "bOverride_AmbientOcclusionTemporalBlendWeight": false,
                "bOverride_RayTracingAO": false,
                "bOverride_RayTracingAOSamplesPerPixel": false,
                "bOverride_RayTracingAOIntensity": false,
                "bOverride_RayTracingAORadius": false,
                "bOverride_IndirectLightingColor": false,
                "bOverride_IndirectLightingIntensity": false,
                "bOverride_ColorGradingIntensity": false,
                "bOverride_ColorGradingLUT": false,
                "bOverride_DepthOfFieldFocalDistance": false,
                "bOverride_DepthOfFieldFstop": false,
                "bOverride_DepthOfFieldMinFstop": false,
                "bOverride_DepthOfFieldBladeCount": false,
                "bOverride_DepthOfFieldSensorWidth": false,
                "bOverride_DepthOfFieldSqueezeFactor": false,
                "bOverride_DepthOfFieldDepthBlurRadius": false,
                "bOverride_DepthOfFieldUseHairDepth": false,
                "bOverride_DepthOfFieldPetzvalBokeh": false,
                "bOverride_DepthOfFieldPetzvalBokehFalloff": false,
                "bOverride_DepthOfFieldPetzvalExclusionBoxExtents": false,
                "bOverride_DepthOfFieldPetzvalExclusionBoxRadius": false,
                "bOverride_DepthOfFieldAspectRatioScalar": false,
                "bOverride_DepthOfFieldMatteBoxFlags": false,
                "bOverride_DepthOfFieldBarrelRadius": false,
                "bOverride_DepthOfFieldBarrelLength": false,
                "bOverride_DepthOfFieldDepthBlurAmount": false,
                "bOverride_DepthOfFieldFocalRegion": false,
                "bOverride_DepthOfFieldNearTransitionRegion": false,
                "bOverride_DepthOfFieldFarTransitionRegion": false,
                "bOverride_DepthOfFieldScale": false,
                "bOverride_DepthOfFieldNearBlurSize": false,
                "bOverride_DepthOfFieldFarBlurSize": false,
                "bOverride_MobileHQGaussian": false,
                "bOverride_DepthOfFieldOcclusion": false,
                "bOverride_DepthOfFieldSkyFocusDistance": false,
                "bOverride_DepthOfFieldVignetteSize": false,
                "bOverride_MotionBlurAmount": false,
                "bOverride_MotionBlurMax": true,
                "bOverride_MotionBlurTargetFPS": false,
                "bOverride_MotionBlurPerObjectSize": true,
                "bOverride_ReflectionMethod": true,
                "bOverride_LumenReflectionQuality": true,
                "bOverride_ScreenSpaceReflectionIntensity": true,
                "bOverride_ScreenSpaceReflectionQuality": true,
                "bOverride_ScreenSpaceReflectionMaxRoughness": true,
                "bOverride_ScreenSpaceReflectionRoughnessScale": false,
                "bOverride_UserFlags": false,
                "bOverride_RayTracingReflectionsMaxRoughness": false,
                "bOverride_RayTracingReflectionsMaxBounces": false,
                "bOverride_RayTracingReflectionsSamplesPerPixel": false,
                "bOverride_RayTracingReflectionsShadows": false,
                "bOverride_RayTracingReflectionsTranslucency": false,
                "bOverride_TranslucencyType": false,
                "bOverride_RayTracingTranslucencyMaxRoughness": false,
                "bOverride_RayTracingTranslucencyRefractionRays": false,
                "bOverride_RayTracingTranslucencySamplesPerPixel": false,
                "bOverride_RayTracingTranslucencyShadows": false,
                "bOverride_RayTracingTranslucencyRefraction": false,
                "bOverride_RayTracingTranslucencyMaxPrimaryHitEvents": false,
                "bOverride_RayTracingTranslucencyMaxSecondaryHitEvents": false,
                "bOverride_RayTracingTranslucencyUseRayTracedRefraction": false,
                "bOverride_DynamicGlobalIlluminationMethod": true,
                "bOverride_LumenSceneLightingQuality": true,
                "bOverride_LumenSceneDetail": true,
                "bOverride_LumenSceneViewDistance": true,
                "bOverride_LumenSceneLightingUpdateSpeed": true,
                "bOverride_LumenFinalGatherQuality": true,
                "bOverride_LumenFinalGatherLightingUpdateSpeed": true,
                "bOverride_LumenFinalGatherScreenTraces": true,
                "bOverride_LumenMaxTraceDistance": true,
                "bOverride_LumenDiffuseColorBoost": true,
                "bOverride_LumenSkylightLeaking": true,
                "bOverride_LumenSkylightLeakingTint": false,
                "bOverride_LumenFullSkylightLeakingDistance": true,
                "bOverride_LumenRayLightingMode": true,
                "bOverride_LumenReflectionsScreenTraces": true,
                "bOverride_LumenFrontLayerTranslucencyReflections": true,
                "bOverride_LumenMaxRoughnessToTraceReflections": true,
                "bOverride_LumenMaxReflectionBounces": true,
                "bOverride_LumenMaxRefractionBounces": true,
                "bOverride_LumenSurfaceCacheResolution": true,
                "bOverride_RayTracingGI": false,
                "bOverride_RayTracingGIMaxBounces": false,
                "bOverride_RayTracingGISamplesPerPixel": false,
                "bOverride_PathTracingMaxBounces": false,
                "bOverride_PathTracingSamplesPerPixel": false,
                "bOverride_PathTracingMaxPathIntensity": false,
                "bOverride_PathTracingEnableEmissiveMaterials": false,
                "bOverride_PathTracingEnableReferenceDOF": false,
                "bOverride_PathTracingEnableReferenceAtmosphere": false,
                "bOverride_PathTracingEnableDenoiser": false,
                "bOverride_PathTracingIncludeEmissive": false,
                "bOverride_PathTracingIncludeDiffuse": false,
                "bOverride_PathTracingIncludeIndirectDiffuse": false,
                "bOverride_PathTracingIncludeSpecular": false,
                "bOverride_PathTracingIncludeIndirectSpecular": false,
                "bOverride_PathTracingIncludeVolume": false,
                "bOverride_PathTracingIncludeIndirectVolume": false,
                "bMobileHQGaussian": false,
                "BloomMethod": EBloomMethod::BM_SOG,
                "AutoExposureMethod": EAutoExposureMethod::AEM_Histogram,
                "TemperatureType": ETemperatureMethod::TEMP_WhiteBalance,
                "WhiteTemp": 7000,
                "WhiteTint": -0.06,
                "ColorSaturation": FVector4(1,2, 1,035543, 1,160441, 1),
                "ColorContrast": FVector4(0,8, 0,8, 0,8, 1),
                "ColorGamma": FVector4(1, 1, 1, 1),
                "ColorGain": FVector4(1, 1, 1, 1),
                "ColorOffset": FVector4(0,005, 0,002, 0,003, 0),
                "ColorSaturationShadows": FVector4(0,9, 0,818841, 0,819743, 1),
                "ColorContrastShadows": FVector4(0,780638, 0,85, 0,83787, 1),
                "ColorGammaShadows": FVector4(1,27, 1,27, 1,27, 1),
                "ColorGainShadows": FVector4(1,69, 1,69, 1,69, 1),
                "ColorOffsetShadows": FVector4(0,005, 0,017, 0,004, 0),
                "ColorSaturationMidtones": FVector4(1,2, 1,035543, 1,160441, 1),
                "ColorContrastMidtones": FVector4(1,25, 1,25, 1,25, 1),
                "ColorGammaMidtones": FVector4(0,9, 0,899866, 0,899888, 1),
                "ColorGainMidtones": FVector4(1, 1, 1, 1),
                "ColorOffsetMidtones": FVector4(-0,014, -0,014, -0,014, -0,009),
                "ColorSaturationHighlights": FVector4(1, 1, 1, 1),
                "ColorContrastHighlights": FVector4(1, 1, 1, 1),
                "ColorGammaHighlights": FVector4(1, 1, 1, 1),
                "ColorGainHighlights": FVector4(1, 1, 1, 1),
                "ColorOffsetHighlights": FVector4(0, 0, 0, 0),
                "ColorCorrectionHighlightsMin": 0.5,
                "ColorCorrectionHighlightsMax": 3.822397,
                "ColorCorrectionShadowsMax": 0.035,
                "BlueCorrection": 0.6,
                "ExpandGamut": 1,
                "ToneCurveAmount": 1,
                "FilmSlope": 0.9,
                "FilmToe": 0.6,
                "FilmShoulder": 0.26,
                "FilmBlackClip": -0.0045,
                "FilmWhiteClip": 0.04,
                "SceneColorTint": FLinearColor(1, 1, 1, 1),
                "SceneFringeIntensity": 0,
                "ChromaticAberrationStartOffset": 0,
                "BloomIntensity": 1,
                "BloomThreshold": -1,
                "BloomSizeScale": 4,
                "Bloom1Size": 0.1,
                "Bloom2Size": 1,
                "Bloom3Size": 2,
                "Bloom4Size": 10,
                "Bloom5Size": 30,
                "Bloom6Size": 48,
                "Bloom1Tint": FLinearColor(0,3465, 0,3465, 0,3465, 1),
                "Bloom2Tint": FLinearColor(0,791667, 0,590776, 0,278722, 1),
                "Bloom3Tint": FLinearColor(0,598958, 0,338345, 0,255805, 1),
                "Bloom4Tint": FLinearColor(0,066, 0,066, 0,066, 1),
                "Bloom5Tint": FLinearColor(0,066, 0,066, 0,066, 1),
                "Bloom6Tint": FLinearColor(0,061, 0,061, 0,061, 1),
                "BloomConvolutionScatterDispersion": 1,
                "BloomConvolutionSize": 1,
                "BloomConvolutionTexture": nullptr,
                "BloomConvolutionCenterUV": FVector2D(0,5, 0,5),
                "BloomConvolutionPreFilterMin": 7,
                "BloomConvolutionPreFilterMax": 15000,
                "BloomConvolutionPreFilterMult": 15,
                "BloomConvolutionBufferScale": 0.133,
                "BloomDirtMask": nullptr,
                "BloomDirtMaskIntensity": 0,
                "BloomDirtMaskTint": FLinearColor(0,5, 0,5, 0,5, 1),
                "DynamicGlobalIlluminationMethod": EDynamicGlobalIlluminationMethod::Lumen,
                "IndirectLightingColor": FLinearColor(1, 1, 1, 1),
                "IndirectLightingIntensity": 1,
                "LumenRayLightingMode": ELumenRayLightingModeOverride::Default,
                "LumenSceneLightingQuality": 0.25,
                "LumenSceneDetail": 0.5,
                "LumenSceneViewDistance": 2500,
                "LumenSceneLightingUpdateSpeed": 0.5,
                "LumenFinalGatherQuality": 0.65,
                "LumenFinalGatherLightingUpdateSpeed": 0.5,
                "LumenFinalGatherScreenTraces": true,
                "LumenMaxTraceDistance": 2500,
                "LumenDiffuseColorBoost": 1,
                "LumenSkylightLeaking": 0.015,
                "LumenSkylightLeakingTint": FLinearColor(1, 1, 1, 1),
                "LumenFullSkylightLeakingDistance": 2000,
                "LumenSurfaceCacheResolution": 0.5,
                "ReflectionMethod": EReflectionMethod::Lumen,
                "LumenReflectionQuality": 0.25,
                "LumenReflectionsScreenTraces": true,
                "LumenFrontLayerTranslucencyReflections": false,
                "LumenMaxRoughnessToTraceReflections": 0.3,
                "LumenMaxReflectionBounces": 4,
                "LumenMaxRefractionBounces": 0,
                "ScreenSpaceReflectionIntensity": 90,
                "ScreenSpaceReflectionQuality": 40,
                "ScreenSpaceReflectionMaxRoughness": 0.55,
                "bMegaLights": true,
                "AmbientCubemapTint": FLinearColor(1, 1, 1, 1),
                "AmbientCubemapIntensity": 1,
                "AmbientCubemap": "TextureCube'Test_C/Content/Environment/Misc/Textures/abandoned_slipway_4k.abandoned_slipway_4k'",
                "CameraShutterSpeed": 60,
                "CameraISO": 100,
                "DepthOfFieldFstop": 4,
                "DepthOfFieldMinFstop": 1.2,
                "DepthOfFieldBladeCount": 5,
                "AutoExposureBias": 1,
                "AutoExposureBiasBackup": 0,
                "bOverride_AutoExposureBiasBackup": false,
                "AutoExposureApplyPhysicalCameraExposure": true,
                "AutoExposureBiasCurve": nullptr,
                "AutoExposureMeterMask": nullptr,
                "AutoExposureLowPercent": 10,
                "AutoExposureHighPercent": 90,
                "AutoExposureMinBrightness": -10,
                "AutoExposureMaxBrightness": 20,
                "AutoExposureSpeedUp": 3,
                "AutoExposureSpeedDown": 1,
                "HistogramLogMin": -10,
                "HistogramLogMax": 20,
                "LocalExposureMethod": ELocalExposureMethod::Bilateral,
                "LocalExposureHighlightContrastScale": 1,
                "LocalExposureShadowContrastScale": 1,
                "LocalExposureHighlightContrastCurve": nullptr,
                "LocalExposureShadowContrastCurve": nullptr,
                "LocalExposureHighlightThreshold": 0,
                "LocalExposureShadowThreshold": 0,
                "LocalExposureDetailStrength": 1,
                "LocalExposureBlurredLuminanceBlend": 0.6,
                "LocalExposureBlurredLuminanceKernelSizePercent": 0,
                "LocalExposureHighlightThresholdStrength": 1,
                "LocalExposureShadowThresholdStrength": 1,
                "LocalExposureMiddleGreyBias": 0,
                "LensFlareIntensity": 1,
                "LensFlareTint": FLinearColor(1, 1, 1, 1),
                "LensFlareBokehSize": 3,
                "LensFlareThreshold": 8,
                "LensFlareBokehShape": nullptr,
                "LensFlareTints": FLinearColor(1, 0,8, 0,4, 0,6),
                "LensFlareTints": FLinearColor(1, 1, 0,6, 0,53),
                "LensFlareTints": FLinearColor(0,8, 0,8, 1, 0,46),
                "LensFlareTints": FLinearColor(0,5, 1, 0,4, 0,39),
                "LensFlareTints": FLinearColor(0,5, 0,8, 1, 0,31),
                "LensFlareTints": FLinearColor(0,9, 1, 0,8, 0,27),
                "LensFlareTints": FLinearColor(1, 0,8, 0,4, 0,22),
                "LensFlareTints": FLinearColor(0,9, 0,7, 0,7, 0,15),
                "VignetteIntensity": 0.4,
                "Sharpen": 0.8,
                "FilmGrainIntensity": 0,
                "FilmGrainIntensityShadows": 1,
                "FilmGrainIntensityMidtones": 1,
                "FilmGrainIntensityHighlights": 1,
                "FilmGrainShadowsMax": 0.09,
                "FilmGrainHighlightsMin": 0.5,
                "FilmGrainHighlightsMax": 1,
                "FilmGrainTexelSize": 1,
                "FilmGrainTexture": nullptr,
                "AmbientOcclusionIntensity": 0.95,
                "AmbientOcclusionStaticFraction": 0,
                "AmbientOcclusionRadius": 265,
                "AmbientOcclusionRadiusInWS": false,
                "AmbientOcclusionFadeDistance": 8000,
                "AmbientOcclusionFadeRadius": 5000,
                "AmbientOcclusionPower": 2,
                "AmbientOcclusionBias": 3,
                "AmbientOcclusionQuality": 70,
                "AmbientOcclusionMipBlend": 0.4,
                "AmbientOcclusionMipScale": 2.5,
                "AmbientOcclusionMipThreshold": 0.02,
                "AmbientOcclusionTemporalBlendWeight": 0.1,
                "RayTracingAO": false,
                "RayTracingAOSamplesPerPixel": 1,
                "RayTracingAOIntensity": 1,
                "RayTracingAORadius": 200,
                "ColorGradingIntensity": 1,
                "ColorGradingLUT": nullptr,
                "DepthOfFieldSensorWidth": 24.576,
                "DepthOfFieldSqueezeFactor": 1,
                "DepthOfFieldFocalDistance": 0,
                "DepthOfFieldDepthBlurAmount": 1,
                "DepthOfFieldDepthBlurRadius": 0,
                "DepthOfFieldUseHairDepth": false,
                "DepthOfFieldPetzvalBokeh": 0,
                "DepthOfFieldPetzvalBokehFalloff": 1,
                "DepthOfFieldPetzvalExclusionBoxExtents": TIntVector2<float>(0, 0),
                "DepthOfFieldPetzvalExclusionBoxRadius": 0,
                "DepthOfFieldAspectRatioScalar": 1,
                "DepthOfFieldBarrelRadius": 5,
                "DepthOfFieldBarrelLength": 0,
                "DepthOfFieldMatteBoxFlags": {
                    "Pitch": 0,
                    "Roll": 0,
                    "Length": 0
                },
                "DepthOfFieldMatteBoxFlags": {
                    "Pitch": 0,
                    "Roll": 0,
                    "Length": 0
                },
                "DepthOfFieldMatteBoxFlags": {
                    "Pitch": 0,
                    "Roll": 0,
                    "Length": 0
                },
                "DepthOfFieldFocalRegion": 0,
                "DepthOfFieldNearTransitionRegion": 300,
                "DepthOfFieldFarTransitionRegion": 500,
                "DepthOfFieldScale": 0,
                "DepthOfFieldNearBlurSize": 15,
                "DepthOfFieldFarBlurSize": 15,
                "DepthOfFieldOcclusion": 0.4,
                "DepthOfFieldSkyFocusDistance": 0,
                "DepthOfFieldVignetteSize": 200,
                "MotionBlurAmount": 0.5,
                "MotionBlurMax": 0,
                "MotionBlurTargetFPS": 30,
                "MotionBlurPerObjectSize": 0,
                "TranslucencyType": ETranslucencyType::Raster,
                "RayTracingTranslucencyMaxRoughness": 0.6,
                "RayTracingTranslucencyRefractionRays": 3,
                "RayTracingTranslucencySamplesPerPixel": 1,
                "RayTracingTranslucencyMaxPrimaryHitEvents": 4,
                "RayTracingTranslucencyMaxSecondaryHitEvents": 2,
                "RayTracingTranslucencyShadows": EReflectedAndRefractedRayTracedShadows::Hard_shadows,
                "RayTracingTranslucencyRefraction": true,
                "RayTracingTranslucencyUseRayTracedRefraction": false,
                "PathTracingMaxBounces": 32,
                "PathTracingSamplesPerPixel": 16384,
                "PathTracingMaxPathIntensity": 24,
                "PathTracingEnableEmissiveMaterials": true,
                "PathTracingEnableReferenceDOF": false,
                "PathTracingEnableReferenceAtmosphere": false,
                "PathTracingEnableDenoiser": true,
                "PathTracingIncludeEmissive": true,
                "PathTracingIncludeDiffuse": true,
                "PathTracingIncludeIndirectDiffuse": true,
                "PathTracingIncludeSpecular": true,
                "PathTracingIncludeIndirectSpecular": true,
                "PathTracingIncludeVolume": true,
                "PathTracingIncludeIndirectVolume": true,
                "UserFlags": 0,
                "WeightedBlendables": {
                    "Array": {}
                }
            },
            "DisableDuringDay_60_6A0C0A844D25727B201270B8E6794534": false,
            "DisableatDawnDusk_61_D0DA84F840D05C7DA0D7B49A2E6743C4": false,
            "DisableatNight_62_1D5FD8DD4142C2B92FFCEFBE2A0E581F": true,
            "DisableifOvercast_52_989272994F5025F12C728292C335B969": false,
            "DisableifNotOvercast_53_D95A77BB4DB1672F50FDC6B817C28515": false,
            "DisableifFoggy_54_539D2C7E4D2FD2EB58A526993DBB4A10": false,
            "DisableifNotFoggy_55_34F8C6474E89F3CB3996E78C6CEF2907": false,
            "DisableifDusty_56_0044404B424580AF8096A6B8CD97F80F": false,
            "DisableifNotDusty_57_B002D3174D9C870BA261FCA71ADF2E02": false,
            "DisableifInsideInterior_58_8D9B008146005C1946D6B4B9F02F9C83": false,
            "DisableifOutsideInterior_59_BF184CAA469ECC2CC17795A644DA512E": false,
            "Priority_47_5B0BDA844B69DB2E7768168865CD16E0": 1
        },
        {
            "Label_24_760DA3B649F655929138B7846A0B840F": "Nighttime",
            "PostProcessSettings_25_E746F2674432B2790E7147B9B9D48686": {
                "bOverride_TemperatureType": false,
                "bOverride_WhiteTemp": true,
                "bOverride_WhiteTint": true,
                "bOverride_ColorSaturation": false,
                "bOverride_ColorContrast": false,
                "bOverride_ColorGamma": false,
                "bOverride_ColorGain": false,
                "bOverride_ColorOffset": false,
                "bOverride_ColorSaturationShadows": false,
                "bOverride_ColorContrastShadows": false,
                "bOverride_ColorGammaShadows": false,
                "bOverride_ColorGainShadows": false,
                "bOverride_ColorOffsetShadows": true,
                "bOverride_ColorSaturationMidtones": false,
                "bOverride_ColorContrastMidtones": false,
                "bOverride_ColorGammaMidtones": false,
                "bOverride_ColorGainMidtones": false,
                "bOverride_ColorOffsetMidtones": false,
                "bOverride_ColorSaturationHighlights": false,
                "bOverride_ColorContrastHighlights": false,
                "bOverride_ColorGammaHighlights": false,
                "bOverride_ColorGainHighlights": false,
                "bOverride_ColorOffsetHighlights": false,
                "bOverride_ColorCorrectionShadowsMax": false,
                "bOverride_ColorCorrectionHighlightsMin": false,
                "bOverride_ColorCorrectionHighlightsMax": false,
                "bOverride_BlueCorrection": false,
                "bOverride_ExpandGamut": false,
                "bOverride_ToneCurveAmount": false,
                "bOverride_FilmSlope": true,
                "bOverride_FilmToe": true,
                "bOverride_FilmShoulder": true,
                "bOverride_FilmBlackClip": true,
                "bOverride_FilmWhiteClip": true,
                "bOverride_SceneColorTint": false,
                "bOverride_SceneFringeIntensity": false,
                "bOverride_ChromaticAberrationStartOffset": false,
                "bOverride_bMegaLights": false,
                "bOverride_AmbientCubemapTint": false,
                "bOverride_AmbientCubemapIntensity": false,
                "bOverride_BloomMethod": false,
                "bOverride_BloomIntensity": true,
                "bOverride_BloomThreshold": false,
                "bOverride_Bloom1Tint": false,
                "bOverride_Bloom1Size": true,
                "bOverride_Bloom2Size": false,
                "bOverride_Bloom2Tint": true,
                "bOverride_Bloom3Tint": true,
                "bOverride_Bloom3Size": false,
                "bOverride_Bloom4Tint": false,
                "bOverride_Bloom4Size": false,
                "bOverride_Bloom5Tint": false,
                "bOverride_Bloom5Size": false,
                "bOverride_Bloom6Tint": false,
                "bOverride_Bloom6Size": true,
                "bOverride_BloomSizeScale": true,
                "bOverride_BloomConvolutionTexture": false,
                "bOverride_BloomConvolutionScatterDispersion": false,
                "bOverride_BloomConvolutionSize": false,
                "bOverride_BloomConvolutionCenterUV": false,
                "bOverride_BloomConvolutionPreFilterMin": false,
                "bOverride_BloomConvolutionPreFilterMax": false,
                "bOverride_BloomConvolutionPreFilterMult": false,
                "bOverride_BloomConvolutionBufferScale": false,
                "bOverride_BloomDirtMaskIntensity": false,
                "bOverride_BloomDirtMaskTint": false,
                "bOverride_BloomDirtMask": false,
                "bOverride_CameraShutterSpeed": false,
                "bOverride_CameraISO": false,
                "bOverride_AutoExposureMethod": false,
                "bOverride_AutoExposureLowPercent": false,
                "bOverride_AutoExposureHighPercent": false,
                "bOverride_AutoExposureMinBrightness": false,
                "bOverride_AutoExposureMaxBrightness": false,
                "bOverride_AutoExposureSpeedUp": false,
                "bOverride_AutoExposureSpeedDown": false,
                "bOverride_AutoExposureBias": false,
                "bOverride_AutoExposureBiasCurve": false,
                "bOverride_AutoExposureMeterMask": false,
                "bOverride_AutoExposureApplyPhysicalCameraExposure": false,
                "bOverride_HistogramLogMin": false,
                "bOverride_HistogramLogMax": false,
                "bOverride_LocalExposureMethod": false,
                "bOverride_LocalExposureHighlightContrastScale": true,
                "bOverride_LocalExposureShadowContrastScale": true,
                "bOverride_LocalExposureHighlightContrastCurve": false,
                "bOverride_LocalExposureShadowContrastCurve": false,
                "bOverride_LocalExposureHighlightThreshold": true,
                "bOverride_LocalExposureShadowThreshold": false,
                "bOverride_LocalExposureDetailStrength": true,
                "bOverride_LocalExposureBlurredLuminanceBlend": true,
                "bOverride_LocalExposureBlurredLuminanceKernelSizePercent": true,
                "bOverride_LocalExposureHighlightThresholdStrength": false,
                "bOverride_LocalExposureShadowThresholdStrength": false,
                "bOverride_LocalExposureMiddleGreyBias": true,
                "bOverride_LensFlareIntensity": false,
                "bOverride_LensFlareTint": false,
                "bOverride_LensFlareTints": false,
                "bOverride_LensFlareBokehSize": false,
                "bOverride_LensFlareBokehShape": false,
                "bOverride_LensFlareThreshold": false,
                "bOverride_VignetteIntensity": false,
                "bOverride_Sharpen": true,
                "bOverride_FilmGrainIntensity": false,
                "bOverride_FilmGrainIntensityShadows": false,
                "bOverride_FilmGrainIntensityMidtones": false,
                "bOverride_FilmGrainIntensityHighlights": false,
                "bOverride_FilmGrainShadowsMax": false,
                "bOverride_FilmGrainHighlightsMin": false,
                "bOverride_FilmGrainHighlightsMax": false,
                "bOverride_FilmGrainTexelSize": false,
                "bOverride_FilmGrainTexture": false,
                "bOverride_AmbientOcclusionIntensity": true,
                "bOverride_AmbientOcclusionStaticFraction": true,
                "bOverride_AmbientOcclusionRadius": true,
                "bOverride_AmbientOcclusionFadeDistance": true,
                "bOverride_AmbientOcclusionFadeRadius": true,
                "bOverride_AmbientOcclusionRadiusInWS": true,
                "bOverride_AmbientOcclusionPower": true,
                "bOverride_AmbientOcclusionBias": true,
                "bOverride_AmbientOcclusionQuality": true,
                "bOverride_AmbientOcclusionMipBlend": true,
                "bOverride_AmbientOcclusionMipScale": true,
                "bOverride_AmbientOcclusionMipThreshold": true,
                "bOverride_AmbientOcclusionTemporalBlendWeight": false,
                "bOverride_RayTracingAO": false,
                "bOverride_RayTracingAOSamplesPerPixel": false,
                "bOverride_RayTracingAOIntensity": false,
                "bOverride_RayTracingAORadius": false,
                "bOverride_IndirectLightingColor": false,
                "bOverride_IndirectLightingIntensity": false,
                "bOverride_ColorGradingIntensity": false,
                "bOverride_ColorGradingLUT": true,
                "bOverride_DepthOfFieldFocalDistance": false,
                "bOverride_DepthOfFieldFstop": false,
                "bOverride_DepthOfFieldMinFstop": false,
                "bOverride_DepthOfFieldBladeCount": false,
                "bOverride_DepthOfFieldSensorWidth": false,
                "bOverride_DepthOfFieldSqueezeFactor": false,
                "bOverride_DepthOfFieldDepthBlurRadius": false,
                "bOverride_DepthOfFieldUseHairDepth": false,
                "bOverride_DepthOfFieldPetzvalBokeh": false,
                "bOverride_DepthOfFieldPetzvalBokehFalloff": false,
                "bOverride_DepthOfFieldPetzvalExclusionBoxExtents": false,
                "bOverride_DepthOfFieldPetzvalExclusionBoxRadius": false,
                "bOverride_DepthOfFieldAspectRatioScalar": false,
                "bOverride_DepthOfFieldMatteBoxFlags": false,
                "bOverride_DepthOfFieldBarrelRadius": false,
                "bOverride_DepthOfFieldBarrelLength": false,
                "bOverride_DepthOfFieldDepthBlurAmount": false,
                "bOverride_DepthOfFieldFocalRegion": false,
                "bOverride_DepthOfFieldNearTransitionRegion": false,
                "bOverride_DepthOfFieldFarTransitionRegion": false,
                "bOverride_DepthOfFieldScale": false,
                "bOverride_DepthOfFieldNearBlurSize": false,
                "bOverride_DepthOfFieldFarBlurSize": false,
                "bOverride_MobileHQGaussian": false,
                "bOverride_DepthOfFieldOcclusion": false,
                "bOverride_DepthOfFieldSkyFocusDistance": false,
                "bOverride_DepthOfFieldVignetteSize": false,
                "bOverride_MotionBlurAmount": false,
                "bOverride_MotionBlurMax": true,
                "bOverride_MotionBlurTargetFPS": false,
                "bOverride_MotionBlurPerObjectSize": true,
                "bOverride_ReflectionMethod": true,
                "bOverride_LumenReflectionQuality": true,
                "bOverride_ScreenSpaceReflectionIntensity": true,
                "bOverride_ScreenSpaceReflectionQuality": true,
                "bOverride_ScreenSpaceReflectionMaxRoughness": true,
                "bOverride_ScreenSpaceReflectionRoughnessScale": false,
                "bOverride_UserFlags": false,
                "bOverride_RayTracingReflectionsMaxRoughness": false,
                "bOverride_RayTracingReflectionsMaxBounces": false,
                "bOverride_RayTracingReflectionsSamplesPerPixel": false,
                "bOverride_RayTracingReflectionsShadows": false,
                "bOverride_RayTracingReflectionsTranslucency": false,
                "bOverride_TranslucencyType": false,
                "bOverride_RayTracingTranslucencyMaxRoughness": false,
                "bOverride_RayTracingTranslucencyRefractionRays": false,
                "bOverride_RayTracingTranslucencySamplesPerPixel": false,
                "bOverride_RayTracingTranslucencyShadows": false,
                "bOverride_RayTracingTranslucencyRefraction": false,
                "bOverride_RayTracingTranslucencyMaxPrimaryHitEvents": false,
                "bOverride_RayTracingTranslucencyMaxSecondaryHitEvents": false,
                "bOverride_RayTracingTranslucencyUseRayTracedRefraction": false,
                "bOverride_DynamicGlobalIlluminationMethod": true,
                "bOverride_LumenSceneLightingQuality": true,
                "bOverride_LumenSceneDetail": true,
                "bOverride_LumenSceneViewDistance": true,
                "bOverride_LumenSceneLightingUpdateSpeed": true,
                "bOverride_LumenFinalGatherQuality": true,
                "bOverride_LumenFinalGatherLightingUpdateSpeed": true,
                "bOverride_LumenFinalGatherScreenTraces": true,
                "bOverride_LumenMaxTraceDistance": true,
                "bOverride_LumenDiffuseColorBoost": true,
                "bOverride_LumenSkylightLeaking": true,
                "bOverride_LumenSkylightLeakingTint": false,
                "bOverride_LumenFullSkylightLeakingDistance": true,
                "bOverride_LumenRayLightingMode": true,
                "bOverride_LumenReflectionsScreenTraces": true,
                "bOverride_LumenFrontLayerTranslucencyReflections": true,
                "bOverride_LumenMaxRoughnessToTraceReflections": true,
                "bOverride_LumenMaxReflectionBounces": true,
                "bOverride_LumenMaxRefractionBounces": true,
                "bOverride_LumenSurfaceCacheResolution": true,
                "bOverride_RayTracingGI": false,
                "bOverride_RayTracingGIMaxBounces": false,
                "bOverride_RayTracingGISamplesPerPixel": false,
                "bOverride_PathTracingMaxBounces": false,
                "bOverride_PathTracingSamplesPerPixel": false,
                "bOverride_PathTracingMaxPathIntensity": false,
                "bOverride_PathTracingEnableEmissiveMaterials": false,
                "bOverride_PathTracingEnableReferenceDOF": false,
                "bOverride_PathTracingEnableReferenceAtmosphere": false,
                "bOverride_PathTracingEnableDenoiser": false,
                "bOverride_PathTracingIncludeEmissive": false,
                "bOverride_PathTracingIncludeDiffuse": false,
                "bOverride_PathTracingIncludeIndirectDiffuse": false,
                "bOverride_PathTracingIncludeSpecular": false,
                "bOverride_PathTracingIncludeIndirectSpecular": false,
                "bOverride_PathTracingIncludeVolume": false,
                "bOverride_PathTracingIncludeIndirectVolume": false,
                "bMobileHQGaussian": false,
                "BloomMethod": EBloomMethod::BM_SOG,
                "AutoExposureMethod": EAutoExposureMethod::AEM_Histogram,
                "TemperatureType": ETemperatureMethod::TEMP_WhiteBalance,
                "WhiteTemp": 7000,
                "WhiteTint": -0.06,
                "ColorSaturation": FVector4(1,2, 1,035543, 1,160441, 1),
                "ColorContrast": FVector4(0,8, 0,8, 0,8, 1),
                "ColorGamma": FVector4(1, 1, 1, 1),
                "ColorGain": FVector4(1, 1, 1, 1),
                "ColorOffset": FVector4(0,003, 0,003, 0,001, 0),
                "ColorSaturationShadows": FVector4(0,65, 0,65, 0,65, 1),
                "ColorContrastShadows": FVector4(0,780638, 0,85, 0,83787, 1),
                "ColorGammaShadows": FVector4(0,44234, 0,646625, 1, 0,95),
                "ColorGainShadows": FVector4(1,69, 1,69, 1,69, 1),
                "ColorOffsetShadows": FVector4(0,004, 0,004, 0,008, 0),
                "ColorSaturationMidtones": FVector4(1,2, 1,035543, 1,160441, 1),
                "ColorContrastMidtones": FVector4(1,063, 1,063, 1,063, 1),
                "ColorGammaMidtones": FVector4(0,9, 0,899866, 0,899888, 1),
                "ColorGainMidtones": FVector4(1, 1, 1, 1),
                "ColorOffsetMidtones": FVector4(0, 0, 0, -0,009),
                "ColorSaturationHighlights": FVector4(1, 1, 1, 1),
                "ColorContrastHighlights": FVector4(1, 1, 1, 1),
                "ColorGammaHighlights": FVector4(1, 1, 1, 1),
                "ColorGainHighlights": FVector4(1, 1, 1, 1),
                "ColorOffsetHighlights": FVector4(0, 0, 0, 0),
                "ColorCorrectionHighlightsMin": 0.5,
                "ColorCorrectionHighlightsMax": 3.822397,
                "ColorCorrectionShadowsMax": 0.035,
                "BlueCorrection": 0.6,
                "ExpandGamut": 1,
                "ToneCurveAmount": 1,
                "FilmSlope": 0.65,
                "FilmToe": 0.55,
                "FilmShoulder": 0.4,
                "FilmBlackClip": 0,
                "FilmWhiteClip": 0.04,
                "SceneColorTint": FLinearColor(1, 1, 1, 1),
                "SceneFringeIntensity": 0,
                "ChromaticAberrationStartOffset": 0,
                "BloomIntensity": 0.5,
                "BloomThreshold": -1,
                "BloomSizeScale": 4,
                "Bloom1Size": 0.1,
                "Bloom2Size": 1,
                "Bloom3Size": 2,
                "Bloom4Size": 10,
                "Bloom5Size": 30,
                "Bloom6Size": 48,
                "Bloom1Tint": FLinearColor(0,3465, 0,3465, 0,3465, 1),
                "Bloom2Tint": FLinearColor(0,791667, 0,590776, 0,278722, 1),
                "Bloom3Tint": FLinearColor(0,598958, 0,338345, 0,255805, 1),
                "Bloom4Tint": FLinearColor(0,066, 0,066, 0,066, 1),
                "Bloom5Tint": FLinearColor(0,066, 0,066, 0,066, 1),
                "Bloom6Tint": FLinearColor(0,061, 0,061, 0,061, 1),
                "BloomConvolutionScatterDispersion": 1,
                "BloomConvolutionSize": 1,
                "BloomConvolutionTexture": nullptr,
                "BloomConvolutionCenterUV": FVector2D(0,5, 0,5),
                "BloomConvolutionPreFilterMin": 7,
                "BloomConvolutionPreFilterMax": 15000,
                "BloomConvolutionPreFilterMult": 15,
                "BloomConvolutionBufferScale": 0.133,
                "BloomDirtMask": nullptr,
                "BloomDirtMaskIntensity": 0,
                "BloomDirtMaskTint": FLinearColor(0,5, 0,5, 0,5, 1),
                "DynamicGlobalIlluminationMethod": EDynamicGlobalIlluminationMethod::Lumen,
                "IndirectLightingColor": FLinearColor(1, 1, 1, 1),
                "IndirectLightingIntensity": 1,
                "LumenRayLightingMode": ELumenRayLightingModeOverride::Default,
                "LumenSceneLightingQuality": 0.25,
                "LumenSceneDetail": 0.5,
                "LumenSceneViewDistance": 2500,
                "LumenSceneLightingUpdateSpeed": 0.5,
                "LumenFinalGatherQuality": 0.65,
                "LumenFinalGatherLightingUpdateSpeed": 0.5,
                "LumenFinalGatherScreenTraces": true,
                "LumenMaxTraceDistance": 2500,
                "LumenDiffuseColorBoost": 1,
                "LumenSkylightLeaking": 0.015,
                "LumenSkylightLeakingTint": FLinearColor(1, 1, 1, 1),
                "LumenFullSkylightLeakingDistance": 2000,
                "LumenSurfaceCacheResolution": 0.5,
                "ReflectionMethod": EReflectionMethod::Lumen,
                "LumenReflectionQuality": 0.25,
                "LumenReflectionsScreenTraces": true,
                "LumenFrontLayerTranslucencyReflections": false,
                "LumenMaxRoughnessToTraceReflections": 0.3,
                "LumenMaxReflectionBounces": 4,
                "LumenMaxRefractionBounces": 0,
                "ScreenSpaceReflectionIntensity": 90,
                "ScreenSpaceReflectionQuality": 40,
                "ScreenSpaceReflectionMaxRoughness": 0.55,
                "bMegaLights": true,
                "AmbientCubemapTint": FLinearColor(1, 1, 1, 1),
                "AmbientCubemapIntensity": 1,
                "AmbientCubemap": "TextureCube'Test_C/Content/Environment/Misc/Textures/abandoned_slipway_4k.abandoned_slipway_4k'",
                "CameraShutterSpeed": 60,
                "CameraISO": 100,
                "DepthOfFieldFstop": 4,
                "DepthOfFieldMinFstop": 1.2,
                "DepthOfFieldBladeCount": 5,
                "AutoExposureBias": 1,
                "AutoExposureBiasBackup": 0,
                "bOverride_AutoExposureBiasBackup": false,
                "AutoExposureApplyPhysicalCameraExposure": true,
                "AutoExposureBiasCurve": nullptr,
                "AutoExposureMeterMask": nullptr,
                "AutoExposureLowPercent": 10,
                "AutoExposureHighPercent": 90,
                "AutoExposureMinBrightness": -10,
                "AutoExposureMaxBrightness": 20,
                "AutoExposureSpeedUp": 3,
                "AutoExposureSpeedDown": 1,
                "HistogramLogMin": -10,
                "HistogramLogMax": 20,
                "LocalExposureMethod": ELocalExposureMethod::Bilateral,
                "LocalExposureHighlightContrastScale": 1,
                "LocalExposureShadowContrastScale": 1,
                "LocalExposureHighlightContrastCurve": nullptr,
                "LocalExposureShadowContrastCurve": nullptr,
                "LocalExposureHighlightThreshold": -0.4,
                "LocalExposureShadowThreshold": 0,
                "LocalExposureDetailStrength": 1,
                "LocalExposureBlurredLuminanceBlend": 0.4,
                "LocalExposureBlurredLuminanceKernelSizePercent": 50,
                "LocalExposureHighlightThresholdStrength": 1,
                "LocalExposureShadowThresholdStrength": 1,
                "LocalExposureMiddleGreyBias": 0,
                "LensFlareIntensity": 1,
                "LensFlareTint": FLinearColor(1, 1, 1, 1),
                "LensFlareBokehSize": 3,
                "LensFlareThreshold": 8,
                "LensFlareBokehShape": nullptr,
                "LensFlareTints": FLinearColor(1, 0,8, 0,4, 0,6),
                "LensFlareTints": FLinearColor(1, 1, 0,6, 0,53),
                "LensFlareTints": FLinearColor(0,8, 0,8, 1, 0,46),
                "LensFlareTints": FLinearColor(0,5, 1, 0,4, 0,39),
                "LensFlareTints": FLinearColor(0,5, 0,8, 1, 0,31),
                "LensFlareTints": FLinearColor(0,9, 1, 0,8, 0,27),
                "LensFlareTints": FLinearColor(1, 0,8, 0,4, 0,22),
                "LensFlareTints": FLinearColor(0,9, 0,7, 0,7, 0,15),
                "VignetteIntensity": 0.4,
                "Sharpen": 0.8,
                "FilmGrainIntensity": 0,
                "FilmGrainIntensityShadows": 1,
                "FilmGrainIntensityMidtones": 1,
                "FilmGrainIntensityHighlights": 1,
                "FilmGrainShadowsMax": 0.09,
                "FilmGrainHighlightsMin": 0.5,
                "FilmGrainHighlightsMax": 1,
                "FilmGrainTexelSize": 1,
                "FilmGrainTexture": nullptr,
                "AmbientOcclusionIntensity": 0.95,
                "AmbientOcclusionStaticFraction": 0,
                "AmbientOcclusionRadius": 265,
                "AmbientOcclusionRadiusInWS": false,
                "AmbientOcclusionFadeDistance": 8000,
                "AmbientOcclusionFadeRadius": 5000,
                "AmbientOcclusionPower": 2,
                "AmbientOcclusionBias": 3,
                "AmbientOcclusionQuality": 70,
                "AmbientOcclusionMipBlend": 0.4,
                "AmbientOcclusionMipScale": 2.5,
                "AmbientOcclusionMipThreshold": 0.02,
                "AmbientOcclusionTemporalBlendWeight": 0.1,
                "RayTracingAO": false,
                "RayTracingAOSamplesPerPixel": 1,
                "RayTracingAOIntensity": 1,
                "RayTracingAORadius": 200,
                "ColorGradingIntensity": 1,
                "ColorGradingLUT": nullptr,
                "DepthOfFieldSensorWidth": 24.576,
                "DepthOfFieldSqueezeFactor": 1,
                "DepthOfFieldFocalDistance": 0,
                "DepthOfFieldDepthBlurAmount": 1,
                "DepthOfFieldDepthBlurRadius": 0,
                "DepthOfFieldUseHairDepth": false,
                "DepthOfFieldPetzvalBokeh": 0,
                "DepthOfFieldPetzvalBokehFalloff": 1,
                "DepthOfFieldPetzvalExclusionBoxExtents": TIntVector2<float>(0, 0),
                "DepthOfFieldPetzvalExclusionBoxRadius": 0,
                "DepthOfFieldAspectRatioScalar": 1,
                "DepthOfFieldBarrelRadius": 5,
                "DepthOfFieldBarrelLength": 0,
                "DepthOfFieldMatteBoxFlags": {
                    "Pitch": 0,
                    "Roll": 0,
                    "Length": 0
                },
                "DepthOfFieldMatteBoxFlags": {
                    "Pitch": 0,
                    "Roll": 0,
                    "Length": 0
                },
                "DepthOfFieldMatteBoxFlags": {
                    "Pitch": 0,
                    "Roll": 0,
                    "Length": 0
                },
                "DepthOfFieldFocalRegion": 0,
                "DepthOfFieldNearTransitionRegion": 300,
                "DepthOfFieldFarTransitionRegion": 500,
                "DepthOfFieldScale": 0,
                "DepthOfFieldNearBlurSize": 15,
                "DepthOfFieldFarBlurSize": 15,
                "DepthOfFieldOcclusion": 0.4,
                "DepthOfFieldSkyFocusDistance": 0,
                "DepthOfFieldVignetteSize": 200,
                "MotionBlurAmount": 0.5,
                "MotionBlurMax": 0,
                "MotionBlurTargetFPS": 30,
                "MotionBlurPerObjectSize": 0,
                "TranslucencyType": ETranslucencyType::Raster,
                "RayTracingTranslucencyMaxRoughness": 0.6,
                "RayTracingTranslucencyRefractionRays": 3,
                "RayTracingTranslucencySamplesPerPixel": 1,
                "RayTracingTranslucencyMaxPrimaryHitEvents": 4,
                "RayTracingTranslucencyMaxSecondaryHitEvents": 2,
                "RayTracingTranslucencyShadows": EReflectedAndRefractedRayTracedShadows::Hard_shadows,
                "RayTracingTranslucencyRefraction": true,
                "RayTracingTranslucencyUseRayTracedRefraction": false,
                "PathTracingMaxBounces": 32,
                "PathTracingSamplesPerPixel": 16384,
                "PathTracingMaxPathIntensity": 24,
                "PathTracingEnableEmissiveMaterials": true,
                "PathTracingEnableReferenceDOF": false,
                "PathTracingEnableReferenceAtmosphere": false,
                "PathTracingEnableDenoiser": true,
                "PathTracingIncludeEmissive": true,
                "PathTracingIncludeDiffuse": true,
                "PathTracingIncludeIndirectDiffuse": true,
                "PathTracingIncludeSpecular": true,
                "PathTracingIncludeIndirectSpecular": true,
                "PathTracingIncludeVolume": true,
                "PathTracingIncludeIndirectVolume": true,
                "UserFlags": 0,
                "WeightedBlendables": {
                    "Array": {}
                }
            },
            "DisableDuringDay_60_6A0C0A844D25727B201270B8E6794534": true,
            "DisableatDawnDusk_61_D0DA84F840D05C7DA0D7B49A2E6743C4": true,
            "DisableatNight_62_1D5FD8DD4142C2B92FFCEFBE2A0E581F": false,
            "DisableifOvercast_52_989272994F5025F12C728292C335B969": false,
            "DisableifNotOvercast_53_D95A77BB4DB1672F50FDC6B817C28515": false,
            "DisableifFoggy_54_539D2C7E4D2FD2EB58A526993DBB4A10": false,
            "DisableifNotFoggy_55_34F8C6474E89F3CB3996E78C6CEF2907": false,
            "DisableifDusty_56_0044404B424580AF8096A6B8CD97F80F": false,
            "DisableifNotDusty_57_B002D3174D9C870BA261FCA71ADF2E02": false,
            "DisableifInsideInterior_58_8D9B008146005C1946D6B4B9F02F9C83": false,
            "DisableifOutsideInterior_59_BF184CAA469ECC2CC17795A644DA512E": false,
            "Priority_47_5B0BDA844B69DB2E7768168865CD16E0": 1
        }
    };
    struct FLinearColor Cloud Wisps Tint (Day) = FLinearColor(0,403922, 0,423529, 0,478431, 1);
    struct FLinearColor Cloud Wisps Tint (Dawn/Dusk) = FLinearColor(1, 0,587119, 0,395833, 1);
    struct FLinearColor Cloud Wisps Tint (Night) = FLinearColor(0,367187, 0,428386, 0,489583, 1);
    double Increase Wisps Brightness Around Sun = 5;
    double Increase Wisps Brightness Around Moon = 3;
    bool Solar Eclipse = true;
    struct FLinearColor Solar Eclipse Tint Color = FLinearColor(0,994792, 0,754438, 0,784207, 1);
    bool Fade Down High Sun Light Intensity Below Horizon = true;
    FString UDS Version = "7.9B";
    class UUDS_VersionInfo_C* UDS Version Info = "UDS_VersionInfo_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/System/Editor_UI/UDS_CurrentVersion.UDS_CurrentVersion'";
    double Sky Atmosphere Overcast Luminance = 1;
    struct FVector Old Moon Target = FVector(0, 0, 0);
    struct FVector Old Sun Target = FVector(0, 0, 0);
    double Cache Current Timer = 1;
    struct FVector Last Updated Camera Location = FVector(0, 0, -10000000);
    double Space Layer Brightness (Night) = 1;
    double Space Layer Brightness (Day) = 5;
    double Space Glow Brightness = 0.08;
    struct FLinearColor Cached Solar Eclipse Tint = FLinearColor(1, 1, 1, 1);
    double Cached Sun Radius = 0.08666666666666667;
    double Cached Eclipse Percent = 1;
    double Cached Moon Cutout = 0.016629333050773257;
    double Cached Moon Scale = 0.03333333276567005;
    double Last Construction Script Time = 133.84562171250582;
    bool Create New MIDs = true;
    bool Sun - Lighting Channel 0 = true;
    struct FLinearColor Low Moon Light Color Tint = FLinearColor(0,092014, 0,190702, 0,276042, 1);
    bool Moon - Lighting Channel 0 = true;
    double Caustics Intensity = 0.8;
    double Caustics Falloff = 100;
    double Deep Water Falloff = 20000;
    double Caustics Texture Scale = 500;
    double Moons Cloud Mask = 1;
    double Blur Caustics with Depth = 5;
    double Blur Caustics in Cloud Shadow = 7;
    double Blur Caustics with Camera Distance = 1;
    int32 Sunset Event State = 1;
    bool Disable Sky/Fog Cloudiness Above Cloud Layer = true;
    double Camera Sky Atmosphere Normalized Density = 1;
    struct FLinearColor Moon Fog Base Color = FLinearColor(0, 0, 0, 1);
    struct FLinearColor Sun Fog Base Color = FLinearColor(0,07200915, 0,12827691, 0,18939394, 0,5);
    struct FLinearColor Cached Sky Atmosphere Absorption Color = FLinearColor(0,89474696, 1, 0,09452903, 0,002);
    int32 Cloud Coverage Target Resolution = 256;
    int32 Cloud Coverage Target Size = 20000000;
    double Painted Cloud Coverage Opacity = 1;
    double Painted Coverage Affects Global Values = 0.6;
    struct FVector2D Editor Cloud Coverage Target Location = FVector2D(0, 0);
    int32 Local Painted Cell Size = 10;
    struct FVector2D Cloud Coverage Target Location = FVector2D(0, 0);
    struct FLinearColor Current Cloud Coverage Render Target Mapping = FLinearColor(0, 0, 0, 0);
    double Cloud Coverage After Painting = 1.1399999856948853;
    bool Enable Volumetric Cloud Light Rays = true;
    double Light Ray Intensity = 1;
    struct FLinearColor Light Ray Tint Color = FLinearColor(1, 1, 1, 1);
    double Light Rays Point Spacing = 50000;
    double Light Ray Length = 1;
    double Scale Light Ray Width = 1;
    double Light Rays Max Distance (Km) = 12;
    double Light Rays Depth Fade Distance = 100000;
    double Light Rays 3D Noise Scale = 700000;
    FSoftObjectPath Volumetric Cloud Light Rays Niagara System = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Particles/VolumetricCloud_LightRays.VolumetricCloud_LightRays");
    double Max Light Ray Length = 158930;
    double Cloud Top World Height = 130049.99999999999;
    struct FVector Cached Light Ray Vector = FVector(0,201709, -0,77590626, -0,59773153);
    bool Light Rays Using Sun = true;
    double Volumetric Fog Extinction (Clear) = 2;
    double Fog Noise Scale = 2000;
    double Fog Noise Max Samples = 4;
    double Fog Noise Sample Distance = 5000;
    double Fog Noise Speed Scale = 1;
    double Mask Fog with Weather Masks = 1;
    double Ground Fog Extinction (Foggy) = 0.2;
    double Ground Fog Extinction (Dusty) = 0.4;
    double Ground Fog Height = 70;
    double Ground Fog Height Noise = 2;
    double Ground Fog Angle Threshold = 0.2;
    double Ground Fog Hardness = 4;
    double Water Extinction = 0.1;
    struct FLinearColor Water Albedo = FLinearColor(0,225152, 0,311797, 0,432292, 1);
    FSoftObjectPath Global Volumetric Fog Parent Material = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Global_Volumetric_Fog.Global_Volumetric_Fog");
    FSoftObjectPath Global Volumetric Fog (Ground Fog ) Parent Material = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Materials/Material_Instances/Global_Volumetric_Fog_w_Ground_Fog.Global_Volumetric_Fog_w_Ground_Fog");
    struct FVector Fog Position = FVector(0, 0, 0);
    double Sun Source Angle Scale = 1;
    struct FVector Sun Target = FVector(-16,13672, 62,072502, 47,81852);
    double Moon Source Angle Scale = 1;
    struct FVector Moon Target = FVector(50,762146, 10,824386, -60,87723);
    FSoftObjectPath Global Volumetric Fog Niagara System = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Particles/Global_Volumetric_Fog.Global_Volumetric_Fog");
    FSoftObjectPath Static Clouds Texture = FSoftObjectPath("/Game/ThirdParty/UltraDynamicSky/Textures/StaticClouds/StaticClouds_A.StaticClouds_A");
    float Static Clouds Color Intensity = 1;
    double Moon Phase Timer Length = 1.3;
    double Event Dispatcher Timer Length = 0.45;
    double Cloud Movement Timer Length = 0.55;
    struct FTimerHandle Cloud Movement Cache Timer = {
        "Handle": 0
    };
    struct FLinearColor Clouds Position Color A = FLinearColor(0, 0, 0, 0);
    struct FLinearColor Clouds Position Color B = FLinearColor(0, 0, 0, 0);
    struct FLinearColor Clouds Phase Color A = FLinearColor(0, 0, 0, 0);
    struct FLinearColor Clouds Phase Color B = FLinearColor(0, 0, 0, 0);
    struct FLinearColor Fog Position Color A = FLinearColor(0, 0, 0, 0);
    struct FLinearColor Fog Position Color B = FLinearColor(0, 0, 0, 0);
     Caching Properties = ;
    TArray<bool> Cache Group Booleans = {
        true,
        true,
        true,
        false,
        true,
        true,
        true,
        true,
        true,
        false
    };
    double Current Cache Timer Speed = 10;
    int32 Low Priority Update Step = -1;
    int32 High Priority Update Step = -1;
    TArray<enum UDS_CachedProperties> Cache Group Moon = {
        UDS_CachedProperties::NewEnumerator65,
        UDS_CachedProperties::NewEnumerator64,
        UDS_CachedProperties::NewEnumerator63,
        UDS_CachedProperties::NewEnumerator62,
        UDS_CachedProperties::NewEnumerator10,
        UDS_CachedProperties::NewEnumerator9,
        UDS_CachedProperties::NewEnumerator8,
        UDS_CachedProperties::NewEnumerator7,
        UDS_CachedProperties::NewEnumerator6,
        UDS_CachedProperties::NewEnumerator5,
        UDS_CachedProperties::NewEnumerator61
    };
    TArray<enum UDS_CachedProperties> Cache Group Fog = {
        UDS_CachedProperties::NewEnumerator111,
        UDS_CachedProperties::NewEnumerator56,
        UDS_CachedProperties::NewEnumerator55,
        UDS_CachedProperties::NewEnumerator52,
        UDS_CachedProperties::NewEnumerator0,
        UDS_CachedProperties::NewEnumerator51,
        UDS_CachedProperties::NewEnumerator50,
        UDS_CachedProperties::NewEnumerator120,
        UDS_CachedProperties::NewEnumerator58,
        UDS_CachedProperties::NewEnumerator53
    };
    TArray<enum UDS_CachedProperties> Cache Group Cloud Shadows = {
        UDS_CachedProperties::NewEnumerator0,
        UDS_CachedProperties::NewEnumerator1,
        UDS_CachedProperties::NewEnumerator17
    };
    TArray<enum UDS_CachedProperties> Cache Group Sky Material = {
        UDS_CachedProperties::NewEnumerator113,
        UDS_CachedProperties::NewEnumerator37,
        UDS_CachedProperties::NewEnumerator36,
        UDS_CachedProperties::NewEnumerator26,
        UDS_CachedProperties::NewEnumerator25,
        UDS_CachedProperties::NewEnumerator24,
        UDS_CachedProperties::NewEnumerator23,
        UDS_CachedProperties::NewEnumerator3
    };
    TArray<enum UDS_CachedProperties> Cache Group Sky Atmosphere = {
        UDS_CachedProperties::NewEnumerator119,
        UDS_CachedProperties::NewEnumerator72,
        UDS_CachedProperties::NewEnumerator71,
        UDS_CachedProperties::NewEnumerator70,
        UDS_CachedProperties::NewEnumerator69,
        UDS_CachedProperties::NewEnumerator54
    };
    TArray<enum UDS_CachedProperties> Cache Group Simplified Color = {
        UDS_CachedProperties::NewEnumerator116,
        UDS_CachedProperties::NewEnumerator33,
        UDS_CachedProperties::NewEnumerator32,
        UDS_CachedProperties::NewEnumerator31,
        UDS_CachedProperties::NewEnumerator30,
        UDS_CachedProperties::NewEnumerator29
    };
    TArray<enum UDS_CachedProperties> Cache Group Sky Light = {
        UDS_CachedProperties::NewEnumerator68,
        UDS_CachedProperties::NewEnumerator66
    };
    TArray<enum UDS_CachedProperties> Cache Group Sun = {
        UDS_CachedProperties::NewEnumerator34,
        UDS_CachedProperties::NewEnumerator46,
        UDS_CachedProperties::NewEnumerator45,
        UDS_CachedProperties::NewEnumerator43,
        UDS_CachedProperties::NewEnumerator44,
        UDS_CachedProperties::NewEnumerator35,
        UDS_CachedProperties::NewEnumerator42
    };
    TArray<enum UDS_CachedProperties> Cache Group Volumetric Clouds = {
        UDS_CachedProperties::NewEnumerator74,
        UDS_CachedProperties::NewEnumerator128,
        UDS_CachedProperties::NewEnumerator121,
        UDS_CachedProperties::NewEnumerator117,
        UDS_CachedProperties::NewEnumerator115,
        UDS_CachedProperties::NewEnumerator109,
        UDS_CachedProperties::NewEnumerator108,
        UDS_CachedProperties::NewEnumerator105,
        UDS_CachedProperties::NewEnumerator123,
        UDS_CachedProperties::NewEnumerator103,
        UDS_CachedProperties::NewEnumerator91,
        UDS_CachedProperties::NewEnumerator90,
        UDS_CachedProperties::NewEnumerator89,
        UDS_CachedProperties::NewEnumerator97,
        UDS_CachedProperties::NewEnumerator79,
        UDS_CachedProperties::NewEnumerator76,
        UDS_CachedProperties::NewEnumerator77,
        UDS_CachedProperties::NewEnumerator75
    };
    TArray<enum UDS_CachedProperties> Cache Group 2D Clouds = {
        UDS_CachedProperties::NewEnumerator22,
        UDS_CachedProperties::NewEnumerator39,
        UDS_CachedProperties::NewEnumerator38,
        UDS_CachedProperties::NewEnumerator40
    };
    int32 Number of Days in Year = 365;
    TArray<int32> Day Count at Start of Each Month = {
        0,
        31,
        59,
        90,
        120,
        151,
        181,
        212,
        243,
        273,
        304,
        334
    };
    double Wind Speed Multiplier = 0.07614615754863513;
    TArray<int32> Month Lengths (Leap Year) = {
        31,
        29,
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30,
        31
    };
    TArray<int32> Day Count at Start of Each Month (Leap Year) = {
        0,
        31,
        60,
        91,
        121,
        152,
        182,
        213,
        244,
        274,
        305,
        335
    };
    double Volumetric Aurora Fade Distance (km) = 18;
    double Contact Shadow Length = 0.09;
    double Contact Shadow Casting Intensity = 1;
    double Sky Light DFAO Min = 0.2;
    TMap<int32, bool> Sky Light DFAO Scalability Map = {
        { 4, true }, 
        { 3, true }, 
        { 2, true }, 
        { 1, true }, 
        { 0, false }
    };
    bool Night Post Process = true;
    float FogMaxOpacity = 1;
    double Underground Fog Density = 8;
    double Underground Fog Max Opacity = 8;
    struct FLinearColor Underground Volumetric Fog Albedo = FLinearColor(0, 0, 0, 1);
    struct FLinearColor Underground Exponential Fog Inscattering Color = FLinearColor(0, 0, 0, 1);
    struct FLinearColor Underground Rayleigh Scattering Color = FLinearColor(0, 0, 0, 1);
    double Standard Post Processing Cubemap Intensity = 0.2;
    struct FLinearColor Volumetric Fog Albedo (Day) = FLinearColor(1, 1, 1, 1);
    struct FLinearColor Volumetric Fog Albedo (Dawn/Dusk) = FLinearColor(1, 1, 1, 1);
    struct FLinearColor Volumetric Fog Albedo (Night) = FLinearColor(1, 1, 1, 1);
    double Underground Exposure Bias = 2;
    struct FLinearColor VolumetricFogEmissiveMultiplier = FLinearColor(1, 1, 1, 0);
    double Volumetric Fog Extinction (Night) = 2;
    double Ambient Occlusion Intensity_Lumen = 0.5;
    struct FActorTickFunction PrimaryActorTick = {
        "TickGroup": ETickingGroup::TG_DuringPhysics
    };
    bool bAlwaysRelevant = true;
    bool bCanBeDamaged = false;
    bool bReplicates = true;
    float NetUpdateFrequency = 10;
    float NetPriority = 100;
    class UPostProcessComponent* Exposure_Settings;
    class UNiagaraComponent* Global_Volumetric_Fog;
    class UNiagaraComponent* VolumetricCloud_LightRays;
    class UStaticMeshComponent* Compass;
    class UUDS_PlayerOcclusion_C* Player_Occlusion;
    class UPostProcessComponent* Cloud_Fog_Post Process;
    class UArrowComponent* Moon Icon Arrow;
    class UArrowComponent* Sun Icon Arrow;
    class UBillboardComponent* Sun Icon;
    class UBillboardComponent* Moon Icon;
    class UStaticMeshComponent* Overcast_Turbulence;
    class UPostProcessComponent* Lens Flare;
    class USkyLightComponent* Captured Scene Sky Light;
    class UNiagaraComponent* Inside_Cloud_Fog;
    class UBillboardComponent* Root;
    class UVolumetricCloudComponent* VolumetricCloud;
    class UExponentialHeightFogComponent* HeightFog;
    class UDirectionalLightComponent* Moon;
    class UDirectionalLightComponent* Sun;
    class USkyAtmosphereComponent* SkyAtmosphere;
    class UArrowComponent* Moon_Root;
    class UArrowComponent* Sun_Root;
    class UStaticMeshComponent* Ultra_Dynamic_Sky_Sphere;
    UDS_FeatureToggle Sun Light;
    class ADirectionalLight* Custom Sun Light Actor;
    class UMaterialInstanceDynamic* Sky_MID;
    double Cloud Wisps Opacity (Clear);
    bool Refresh Settings;
    UDS_SkyMode Sky Mode;
    UDS_ColorMode Color Mode;
    UDS_Project_Mode Project Mode;
    double Cloud Direction;
    double Cloud Phase;
    bool Manually Position Moon Target;
    double Moon Orbit Offset;
    bool Moon Phase Changes Over Time;
    bool Manually Position Sun Target;
    float Sun Temperature;
    bool Animate Time of Day;
    double Sun Vertical Offset;
    double Soften Cloud Layer 1;
    double Soften Cloud Layer 2;
    double Sharpen Outer Edge;
    class UMaterialInstanceDynamic* Cloud Shadows MID;
    double Cloud Shadows Intensity When Sunny;
    UDS_FeatureToggle Moon Light;
    class ADirectionalLight* Custom Moon Light Actor;
    class UMaterialInstanceDynamic* Moon Cloud Shadows MID;
    double Moon Texture Rotation;
    class UTexture2D* Custom Moon Texture;
    UDS_FeatureToggle Sky Light;
    class ASkyLight* Custom Sky Light Actor;
    UDS_FeatureToggle Height Fog;
    class AExponentialHeightFog* Custom Height Fog Actor;
    UDS_SkyLightMode Sky Light Mode;
    bool Use Auroras;
    bool One Cloud Layer;
    class UDirectionalLightComponent* Sun_LightComponent;
    class UDirectionalLightComponent* Moon_LightComponent;
    class USkyLightComponent* SkyLightComponent;
    class UExponentialHeightFogComponent* Height Fog Component;
    bool Apply Exposure Settings;
    double Extend Dawn and Dusk;
    double Stars Daytime Intensity;
    double Stars Phase;
    double Sky Light Temperature;
    bool Recapture Sky light Periodically;
    bool Random Starting Time;
    double Lights Update Period;
    double Sunrise Event Offset;
    double Sunset Event Offset;
    class UTexture2D* Custom Noise Texture;
    bool Adjust for Path Tracer;
    bool Dim Directional Lights with Cloud Coverage;
    double Extra Night Brightness when Cloudy;
    class UMaterialInstanceDynamic* Volumetric_Clouds_MID_Complex;
    UDS_VolRT_Mode Volumetric Cloud Rendering Mode;
    class UTexture2D* Volumetric Custom Noise Texture;
    double Minimum Erosion;
    class UMaterialInstanceDynamic* Volumetric_Clouds_MID_Simplified;
    class AActor* Ultra Dynamic Weather;
    class UMaterialInstanceDynamic* Volumetric_Aurora_MID;
    bool Use Sky Mode Scalability Map;
    class UMaterialInstanceDynamic* Inside_Clouds_Fog_MID;
    bool Enable Fog Inside Clouds;
    bool Two Layers;
    double Distance Between Layers;
    bool Enable Sun Light Shaft Bloom;
    bool Enable Moon Light Shaft Bloom;
    bool Mobile;
    UDS_CityPresets Location Preset;
    double North Yaw;
    bool Use System Time;
    double Stellar Calibration;
    bool Runtime;
    bool DST Skip Happening;
    int Total Days Elapsed;
    bool Clouds Move with Time of Day;
    bool Disable Directional Light Shadows when Fully Shadowed by Clouds;
    class UMaterialInterface* Custom Light Function Material;
    bool Fog Colors from Sky Atmosphere;
    double Ambient Light from Sky Atmosphere;
    int Current Volumetric Clouds MID;
    double Rayleigh Scatering Scale;
    double Rayleigh Exponential Distribution;
    double Cloud Coverage Change Speed;
    double Time of Day Change Speed;
    double Dust Change Speed;
    double Current Time of Day Offset;
    double Cloud Coverage Change This Frame;
    double Light Pollution Intensity;
    class UMaterialInstanceDynamic* Cloud Fog Post Process MID;
    class UMaterialInterface* Custom Sky Sphere Material;
    double Fog Snow Contribution;
    bool Enable Sun Lens Flare;
    UDS_LensFlareType Lens Flare Type;
    class UMaterialInstanceDynamic* Lens Flare MID;
    class UMaterialInterface* Custom Lens Flare Parent Instance;
    double Dynamic Sky Light Transition Time;
    bool Override with New Changes;
    class UMaterialInstanceDynamic* Overcast Turbulence MID;
    double Moon Light Current Intensity Value;
    double Dust Amount;
    double Volumetric Fog Start Distance (Clear);
    double Volumetric Fog Start Distance (Foggy);
    double Moon Volumetric Scattering Intensity;
    bool Using Cloud Fog Post Process;
    bool Forward Shading;
    int Event Hour;
    double Transition Time A;
    double Transition Time B;
    bool Transitioning Time;
    double Transition Duration;
    int Transition Days Counted;
    bool Transition Can Go Backwards;
    float Exposure Bias Day;
    float Exposure Bias Night;
    float Exposure Bias Cloudy;
    float Exposure Bias Foggy;
    float Exposure Bias Dusty;
    double Exposure Bias in Interior;
    double Fog Change This Frame;
    double Dust Change This Frame;
    double Starting Sky Atmosphere Height;
    TArray<class UPostProcessComponent*>* User Post Process Components;
    bool Using Post Process Components;
    double Solar Eclipse Intensity Multiplier;
    double Clouds B Time;
    double Targets Change Speed;
    bool Initialized;
    class UUDS_Planet_Preset_C* Add Planet/Moon Preset;
    TArray<struct FUDS_Space_Planet> Planets/Moons;
    TArray<class UMaterialInstanceDynamic*> Space Planet MIDs;
    TArray<class USceneComponent*>* Space Scene Components;
    TMap<class UMaterialInstanceDynamic*, class UMaterialInstanceDynamic*> Space Glow MIDs;
    TArray<class UStaticMeshComponent*>* Space Planet Components;
    bool Space Layer Active;
    bool Sun - Lighting Channel 1;
    bool Sun - Lighting Channel 2;
    bool Moon - Lighting Channel 1;
    bool Moon - Lighting Channel 2;
    TArray<class USceneComponent*>* Space Roots;
    bool Render Water Caustics;
    double Water Level;
    double Editor Camera Normalized Height in Layer;
    double Camera Cloud Layer Normalized Height;
    double Old Cloud Layer Camera Level;
    double Cloud Camera Relative Change Speed;
    class UTextureRenderTarget2D* Cloud Coverage Render Target;
    double Layer 2 Painted Cloud Coverage Opacity;
    TMap<struct FIntPoint, class UUDS_Cloud_Paint_Cell_C*> Local Painting Cell Data;
    bool Cloud Painting Active;
    bool Cloud Coverage Target in Use;
    TArray<TSoftObjectPtr<UObject>> Async Loading Queue;
    TArray<class UObject*> Async Loaded Objects;
    bool Async Loading Active;
    bool Cloud Paint Can Add Coverage;
    bool Cloud Paint Can Subtract Coverage;
    double Individual Clouds Light Rays;
    double Cached Light Ray Strength;
    class UMaterialInstanceDynamic* Cloud Paint Draw MID;
    bool Render Global Volumetric Material;
    double Fog Noise Intensity;
    bool Render Ground Fog (Fog Above Distance Fields);
    double Ground Fog Extinction (Rainy);
    double Ground Fog Extinction (Snowy);
    bool Apply Water Fog Values;
    class UMaterialInstanceDynamic* Global Volumetric Fog MID;
    double Static Clouds Rotation;
    double Static Clouds Rotation Speed;
    double Last Static Clouds Update Time;
    double Clouds B Time Old;
    double Clouds Time Elapsed Last Update;
    int Next Cache Step;
    int Active Update Speed;
    bool Monitoring Active Changes;
    int Minimum Active Update Speed;
    double Fog Vertical Velocity;
    bool Contact Shadow Length In World Space;
    byte Global Illumination;
    byte Global Reflection;
    bool SimulateOccluded;
    bool SimulateUnderground;
    bool Use Global Illumination?;
    double Underground Post Processing Cubemap Intensity;
    double Underground Sun Volumetric Multiplier;

};