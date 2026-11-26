class UIM_MouseSensitivity_C : public UIRRInputModifier_LookSensitivity
{
public:
    double AttachmentMenuSensitivity = 1000;
    struct FRuntimeFloatCurve SpeedSensitivityCurve = {
        "EditorCurveData": {
            "KeyHandlesToIndices": {}
        }
    };
};