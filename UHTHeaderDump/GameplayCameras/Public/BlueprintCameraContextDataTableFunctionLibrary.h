#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BlueprintCameraEvaluationDataRef.h"
#include "CameraContextDataID.h"
#include "BlueprintCameraContextDataTableFunctionLibrary.generated.h"

class UEnum;
class UObject;
class UScriptStruct;

UCLASS(Blueprintable)
class UBlueprintCameraContextDataTableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintCameraContextDataTableFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetStructData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const FInstancedStruct& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool SetStringData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool SetObjectData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, UObject* Data);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNameData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const FName& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool SetEnumData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const UEnum* EnumType, uint8 Data);
    
    UFUNCTION(BlueprintCallable)
    static bool SetClassData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, UClass* Data);
    
    UFUNCTION(BlueprintCallable)
    static FInstancedStruct GetStructData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const UScriptStruct* DataStructType);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetObjectData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID);
    
    UFUNCTION(BlueprintCallable)
    static FName GetNameData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetEnumData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID, const UEnum* EnumType);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetClassData(const FBlueprintCameraEvaluationDataRef& CameraData, FCameraContextDataID DataID);
    
};

