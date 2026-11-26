#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRMissionSerializationFunctionLibrary.generated.h"

class UIRRMissionData;
class UObject;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionSerializationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRMissionSerializationFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SerializeMissionToStruct(UIRRMissionData* InMissionDataArray, const FString& OutJson);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SerializeMissionsToStructs(TArray<UIRRMissionData*> InMissionDataArray, TArray<FString>& OutJsonData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DeserializeStructToMission(UObject* WorldContextObject, const FString& InJson, UIRRMissionData*& OutMissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DeserializeStructsToMissions(UObject* WorldContextObject, TArray<FString> InJsonData, TArray<UIRRMissionData*>& OutMissionDataArray);
    
};

