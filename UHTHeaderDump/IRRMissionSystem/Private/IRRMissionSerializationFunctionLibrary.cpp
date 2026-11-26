#include "IRRMissionSerializationFunctionLibrary.h"

UIRRMissionSerializationFunctionLibrary::UIRRMissionSerializationFunctionLibrary() {
}

bool UIRRMissionSerializationFunctionLibrary::SerializeMissionToStruct(UIRRMissionData* InMissionDataArray, const FString& OutJson) {
    return false;
}

bool UIRRMissionSerializationFunctionLibrary::SerializeMissionsToStructs(TArray<UIRRMissionData*> InMissionDataArray, TArray<FString>& OutJsonData) {
    return false;
}

bool UIRRMissionSerializationFunctionLibrary::DeserializeStructToMission(UObject* WorldContextObject, const FString& InJson, UIRRMissionData*& OutMissionData) {
    return false;
}

bool UIRRMissionSerializationFunctionLibrary::DeserializeStructsToMissions(UObject* WorldContextObject, TArray<FString> InJsonData, TArray<UIRRMissionData*>& OutMissionDataArray) {
    return false;
}


