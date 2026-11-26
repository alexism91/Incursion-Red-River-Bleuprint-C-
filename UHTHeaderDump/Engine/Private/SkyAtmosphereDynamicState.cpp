#include "SkyAtmosphereDynamicState.h"

FSkyAtmosphereDynamicState::FSkyAtmosphereDynamicState() {
    this->TransformMode = ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin;
    this->BottomRadius = 0.00f;
    this->AtmosphereHeight = 0.00f;
    this->MultiScatteringFactor = 0.00f;
    this->TraceSampleCountScale = 0.00f;
    this->RayleighScatteringScale = 0.00f;
    this->RayleighExponentialDistribution = 0.00f;
    this->MieScatteringScale = 0.00f;
    this->MieAbsorptionScale = 0.00f;
    this->MieAnisotropy = 0.00f;
    this->MieExponentialDistribution = 0.00f;
    this->OtherAbsorptionScale = 0.00f;
    this->OtherTentDistributionTipAltitude = 0.00f;
    this->OtherTentDistributionTipValue = 0.00f;
    this->OtherTentDistributionWidth = 0.00f;
    this->AerialPespectiveViewDistanceScale = 0.00f;
    this->HeightFogContribution = 0.00f;
    this->TransmittanceMinLightElevationAngle = 0.00f;
    this->AerialPerspectiveStartDepth = 0.00f;
    this->bHoldout = false;
    this->bRenderInMainPass = false;
    this->bBuilt = false;
}

