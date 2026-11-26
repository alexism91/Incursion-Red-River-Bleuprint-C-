#include "ValueOrBBKeyBlueprintUtility.h"

UValueOrBBKeyBlueprintUtility::UValueOrBBKeyBlueprintUtility() {
}

FVector UValueOrBBKeyBlueprintUtility::GetVector(const FValueOrBBKey_Vector& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return FVector{};
}

FInstancedStruct UValueOrBBKeyBlueprintUtility::GetStruct(const FValueOrBBKey_Struct& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return FInstancedStruct{};
}

FString UValueOrBBKeyBlueprintUtility::GetString(const FValueOrBBKey_String& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return TEXT("");
}

FRotator UValueOrBBKeyBlueprintUtility::GetRotator(const FValueOrBBKey_Rotator& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return FRotator{};
}

UObject* UValueOrBBKeyBlueprintUtility::GetObject(const FValueOrBBKey_Object& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return NULL;
}

FName UValueOrBBKeyBlueprintUtility::GetName(const FValueOrBBKey_Name& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return NAME_None;
}

int32 UValueOrBBKeyBlueprintUtility::GetInt32(const FValueOrBBKey_Int32& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return 0;
}

float UValueOrBBKeyBlueprintUtility::GetFloat(const FValueOrBBKey_Float& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return 0.0f;
}

uint8 UValueOrBBKeyBlueprintUtility::GetEnum(const FValueOrBBKey_Enum& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return 0;
}

UClass* UValueOrBBKeyBlueprintUtility::GetClass(const FValueOrBBKey_Class& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return NULL;
}

bool UValueOrBBKeyBlueprintUtility::GetBool(const FValueOrBBKey_Bool& Value, const UBehaviorTreeComponent* BehaviorTreeComp) {
    return false;
}


