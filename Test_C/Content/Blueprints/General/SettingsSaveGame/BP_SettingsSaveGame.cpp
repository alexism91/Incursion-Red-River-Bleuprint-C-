class UBP_SettingsSaveGame_C : public USettingsSaveGame
{
public:
    struct FStruct_SettingsSave NonGameplaySettings = {
        "AudioSettings_2_1C924F75449A49264EE5CE8C889D27BE": {
            "SoundsEnabled_14_6692EBF4485102CB66A9F6ABC7A9CA45": true,
            "MasterVolume_4_A3883DDE4558E8F1B4D0C2855745531D": 100,
            "MusicEnabled_13_2F74861F4C9B13538EB6E69C849948AA": true,
            "MusicVolume_10_36D132D745A5B235457E5288C4579A4A": 100,
            "MusicInRaidVolume_60_B0B432EA43F01F73C4FEDAB58A1F830D": 100,
            "SoundEffectsEnabled_16_E2C74D6343606F6D2877A98F5C53CB44": true,
            "SoundEffectsVolume_17_FD7D152249C782ADCB9AA9912E9D3BED": 100,
            "UISoundsEnabled_19_1D7FC5034373196E13A155896215AF3A": true,
            "UserInterfaceVolume_22_03FA4EEA4023CE43E8DEC291E5B3FCE3": 100,
            "FootstepsVolume_30_A7205D2843C40024FA94D4BB3676439E": 100,
            "GunsVolume_31_F883FBFF459E4308F953AC8601EA20BB": 100,
            "AmbienceVolume_32_C74FF3AE4DAEF1670C1A74885A93CEFE": 100,
            "WeatherEffectsVolume_62_E700D47D4E3EA28290365DA2593296FB": 100,
            "AIBarkVolume_65_0DCDDC594F05D0E75A555CBC16D0F8B5": 100,
            "HandlerVolume_66_0A76B3F043828A5A2B614DBA579699E1": 100,
            "ReverbEffectVolume_35_6E5B9D1D4C4269A2EBF30695270B0AA3": 100,
            "PushToTalk_37_6B8C838B4053EB48A6C8A793D25C00A9": true,
            "MonoMode_42_1D638BC643FC58F7A1494EAF16B0FE7F": false,
            "HeadphoneMode_41_7E9DA70E4FCD3E7704EECD967B9AC82C": true,
            "VoipVolume_45_C215EC4F405B963BCED52DBF96FD6039": 100,
            "VoipDistanceScaling_54_5407B01E4182AE4DC62B65A915801A65": 100,
            "VoipOcclusionImpact_55_C2FCFB9048074788F0C7F18A0A70A44D": 100,
            "VoipRadioEffectScale_56_33FAC953407974C248A01E9155BE0778": 100,
            "VoipRadioEffectDistance_57_A7DC494845E36387D4933F89105D4DA6": 50
        },
        "VideoSettings_5_01B28925483B629AD5DBFEB517F626F0": {
            "MotionBlur_1_53A47823444B5F8C89C0E09232B28731": false,
            "Fullscreen_37_203FFF0E4CF4599D524C9CA892A7F59A": EWindowMode::Fullscreen,
            "Resolution_24_14BBD2C940DB5E2403C6B7876D027365": FName("None"),
            "VisualFideiltyQuality_66_3B7A09014FE06C18AEEB6896C8551340": 0,
            "AntiAliasingMethod_39_FE6AE93F4AB3C0A0EB92B0B4B3A5934F": Enum_AntiAliasingMethod::NewEnumerator1,
            "ScreenPercentage_25_3567E19246AA2DAF15EA37914D7055AA": 0,
            "UpscalingQuality_63_688676CD4760E57C1837F59FA687279C": 0,
            "RayReconstruction_77_4A5595B6483D793BA6028DAB0E5BB387": false,
            "MaxFPS_28_AD87DDEA4788A81104C1F787D03CFFD4": FName("None"),
            "Vsync_29_A5422A974A3090110B28CE82DAF96555": true,
            "FOV_36_1D0A14DD4DD611117F8E65A1C56AD2C9": 0,
            "GlobalIlluminationMethod_45_5E956F8F46424DEE74D27DAA805293B7": FName("False"),
            "FrameGeneration_80_B3D20A0F4D3807851A4C2BBEB76B97BB": FName("False"),
            "NvidiaReflex_82_55DC47584D0EAEB9BCD24396AC1B35E8": FName("None"),
            "LumenScalability_57_7B280D2447D0D397CD4BAA8D60986ECE": FName("False"),
            "ColorVisionDeficiency_93_41F1AFD14EEBA203691F459D4082519A": FName("False"),
            "ColorVisionDeficiencyStrength_96_518ADDAB4BF9DF60C21E78854ED02E2C": 1,
            "Saturation_83_67136840405594AFBFBF90B5AD8BFF50": 1,
            "Gamma_4_C9EAC68848EB5D7D2B051595C3B0332C": 1,
            "Contrast_89_31918EAD4035E0602EADA481FC0A3C54": 1,
            "Sharpness_75_422306454C065875CDF61A8F3E6A36C8": 1
        }
    };
    struct FStruct_MissionSave Mission = {
        "Mission_24_6692EBF4485102CB66A9F6ABC7A9CA45": {
            "MissionIdentifier_23_09FA4C1144BA449D2E25B28894B7EDE6": FName("None"),
            "Email_48_1EF60E214686034DD7C3F3A821AD083A": {
                "Subject_2_04F1A6DC42B39029339FBEAC2CCC3A0D": FText(""),
                "Content_4_C09FE08643CABC95C2BF36A747E9E267": FText(""),
                "Author_11_3F8D40714A7213985D5353AF1740D21C": FText(""),
                "Fraction_14_965DD13F45145B913AD358A1DEE381C1": E_Fraction::NewEnumerator0,
                "EmailIcon_8_94C118354FD0C7B5C83811B8F31C4C91": {
                    "IconAsMaterial_2_4A474DC84D26775F86CEE8BBA44AC442": nullptr,
                    "IconAsTexture_5_4C9E12714B1E3CB2A29F1187CF338840": nullptr,
                    "TextureColor_10_ABB06DCA4C9B4F38D32192B75EA17872": FLinearColor(1, 1, 1, 1)
                }
            },
            "Level_52_F48D61C24AF24162FF6389AF5AC69BE0": {
                "LevelName_56_09FA4C1144BA449D2E25B28894B7EDE6": FName("None"),
                "StreamingLevelNames_54_7DFED4DA469B8E32C902C99D110644CE": {}
            },
            "Sequences_41_8A3D24AA47AB48C88D748ABBD262B9EF": {},
            "FinalMission?_11_FD45802F4E71BB665DE97E83A8F14DE7": false,
            "MissionReward_40_D7D4CDA940E9AC3C17523AA13D265D3A": {},
            "FollowUpMission_42_ECB007D34B408BEB46256FA732E8A33F": {
                "DataTable": nullptr,
                "RowName": FName("None")
            }
        }
    };
    TArray<struct FDataTableRowHandle> Tutorials = {
        {
            "DataTable": nullptr,
            "RowName": FName("None")
        }
    };
    struct FIRRGameplaySettings FirstPersonControllerSettings = {
        "Toggles": {
            { {
                "TagName": FName("Character.Abilities.Active.Aiming")
            }, false }, 
            { {
                "TagName": FName("Character.Abilities.Active.Crouching")
            }, false }, 
            { {
                "TagName": FName("Character.Abilities.Active.Leaning")
            }, false }, 
            { {
                "TagName": FName("Character.Abilities.Active.Running.Wants To Run")
            }, false }, 
            { {
                "TagName": FName("Character.Abilities.Active.Sneaking")
            }, false }
        }
    };
    TArray<struct FStruct_PlayerMappingsSave> PlayerMappings;
};