#include "NetworkPhysicsSettingsNetworkPhysicsComponent.h"

FNetworkPhysicsSettingsNetworkPhysicsComponent::FNetworkPhysicsSettingsNetworkPhysicsComponent() {
    this->bOverrideRedundantInputs = false;
    this->RedundantInputs = 0;
    this->bOverrideRedundantRemoteInputs = false;
    this->RedundantRemoteInputs = 0;
    this->bOverrideRedundantStates = false;
    this->RedundantStates = 0;
    this->bOverrideCompareStateToTriggerRewind = false;
    this->bCompareStateToTriggerRewind = false;
    this->bOverridebCompareStateToTriggerRewindIncludeSimProxies = false;
    this->bCompareStateToTriggerRewindIncludeSimProxies = false;
    this->bOverrideCompareInputToTriggerRewind = false;
    this->bCompareInputToTriggerRewind = false;
    this->bOverrideEnableUnreliableFlow = false;
    this->bEnableUnreliableFlow = false;
    this->bOverrideEnableReliableFlow = false;
    this->bEnableReliableFlow = false;
    this->bOverrideApplyDataInsteadOfMergeData = false;
    this->bApplyDataInsteadOfMergeData = false;
    this->bOverrideAllowInputExtrapolation = false;
    this->bAllowInputExtrapolation = false;
    this->bOverrideValidateDataOnGameThread = false;
    this->bValidateDataOnGameThread = false;
    this->bOverrideApplySimProxyStateAtRuntime = false;
    this->bApplySimProxyStateAtRuntime = false;
    this->bOverrideApplySimProxyInputAtRuntime = false;
    this->bApplySimProxyInputAtRuntime = false;
}

