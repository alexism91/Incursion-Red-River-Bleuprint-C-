#include "InterchangeSourceNode.h"

UInterchangeSourceNode::UInterchangeSourceNode() {
}

bool UInterchangeSourceNode::SetExtraInformation(const FString& Name, const FString& Value) {
    return false;
}

bool UInterchangeSourceNode::SetCustomUseLegacySkeletalMeshBakeTransform(const bool& AttributeValue) {
    return false;
}

bool UInterchangeSourceNode::SetCustomUseAssetTypeSubPathSuffix(const bool& Suffix) {
    return false;
}

bool UInterchangeSourceNode::SetCustomSubPathPrefix(const FString& Prefix) {
    return false;
}

bool UInterchangeSourceNode::SetCustomSourceTimelineStart(const double& AttributeValue) {
    return false;
}

bool UInterchangeSourceNode::SetCustomSourceTimelineEnd(const double& AttributeValue) {
    return false;
}

bool UInterchangeSourceNode::SetCustomSourceFrameRateNumerator(const int32& AttributeValue) {
    return false;
}

bool UInterchangeSourceNode::SetCustomSourceFrameRateDenominator(const int32& AttributeValue) {
    return false;
}

bool UInterchangeSourceNode::SetCustomReimportStrategyFlags(uint8 StrategyFlag) {
    return false;
}

bool UInterchangeSourceNode::SetCustomImportUnusedMaterial(const bool& AttributeValue) {
    return false;
}

bool UInterchangeSourceNode::SetCustomAxisConversionInverseTransform(const FTransform& AxisConversionInverseTransform) {
    return false;
}

bool UInterchangeSourceNode::SetCustomAnimatedTimeStart(const double& AttributeValue) {
    return false;
}

bool UInterchangeSourceNode::SetCustomAnimatedTimeEnd(const double& AttributeValue) {
    return false;
}

bool UInterchangeSourceNode::RemoveExtraInformation(const FString& Name) {
    return false;
}

void UInterchangeSourceNode::InitializeSourceNode(const FString& UniqueID, const FString& DisplayLabel, UInterchangeBaseNodeContainer* NodeContainer) {
}

UInterchangeSourceNode* UInterchangeSourceNode::GetUniqueInstance(const UInterchangeBaseNodeContainer* NodeContainer) {
    return NULL;
}

void UInterchangeSourceNode::GetExtraInformation(TMap<FString, FString>& OutExtraInformation) const {
}

bool UInterchangeSourceNode::GetCustomUseLegacySkeletalMeshBakeTransform(bool& AttributeValue) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomUseAssetTypeSubPathSuffix(bool& Suffix) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomSubPathPrefix(FString& Prefix) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomSourceTimelineStart(double& AttributeValue) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomSourceTimelineEnd(double& AttributeValue) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomSourceFrameRateNumerator(int32& AttributeValue) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomSourceFrameRateDenominator(int32& AttributeValue) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomReimportStrategyFlags(uint8& StrategyFlag) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomImportUnusedMaterial(bool& AttributeValue) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomAxisConversionInverseTransform(FTransform& AxisConversionInverseTransform) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomAnimatedTimeStart(double& AttributeValue) const {
    return false;
}

bool UInterchangeSourceNode::GetCustomAnimatedTimeEnd(double& AttributeValue) const {
    return false;
}


