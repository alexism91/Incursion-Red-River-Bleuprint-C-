#include "BlueprintCameraContextDataTableFunctionLibrary.h"

UBlueprintCameraContextDataTableFunctionLibrary::UBlueprintCameraContextDataTableFunctionLibrary() {
}

bool UBlueprintCameraContextDataTableFunctionLibrary::SetStructData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const FInstancedStruct& Data) {
    return false;
}

bool UBlueprintCameraContextDataTableFunctionLibrary::SetStringData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const FString& Data) {
    return false;
}

bool UBlueprintCameraContextDataTableFunctionLibrary::SetObjectData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, UObject* Data) {
    return false;
}

bool UBlueprintCameraContextDataTableFunctionLibrary::SetNameData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const FName& Data) {
    return false;
}

bool UBlueprintCameraContextDataTableFunctionLibrary::SetEnumData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const UEnum* EnumType, uint8 Data) {
    return false;
}

bool UBlueprintCameraContextDataTableFunctionLibrary::SetClassData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, UClass* Data) {
    return false;
}

FInstancedStruct UBlueprintCameraContextDataTableFunctionLibrary::GetStructData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const UScriptStruct* DataStructType) {
    return FInstancedStruct{};
}

FString UBlueprintCameraContextDataTableFunctionLibrary::GetStringData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID) {
    return TEXT("");
}

UObject* UBlueprintCameraContextDataTableFunctionLibrary::GetObjectData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID) {
    return NULL;
}

FName UBlueprintCameraContextDataTableFunctionLibrary::GetNameData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID) {
    return NAME_None;
}

uint8 UBlueprintCameraContextDataTableFunctionLibrary::GetEnumData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const UEnum* EnumType) {
    return 0;
}

UClass* UBlueprintCameraContextDataTableFunctionLibrary::GetClassData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID) {
    return NULL;
}


