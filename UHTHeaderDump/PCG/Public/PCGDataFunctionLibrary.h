#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PCGDataCollection.h"
#include "PCGPinProperties.h"
#include "PCGTaggedData.h"
#include "Templates/SubclassOf.h"
#include "PCGDataFunctionLibrary.generated.h"

class UPCGData;

UCLASS(Blueprintable, MinimalAPI)
class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGDataFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPCGTaggedData MakeTaggedData(UPCGData* Data, const TSet<FString>& Tags, FName pin);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UPCGData*> GetTypedInputsByTag(const FPCGDataCollection& InCollection, const FString& InTag, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<UPCGData> InDataTypeClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UPCGData*> GetTypedInputsByPinLabel(const FPCGDataCollection& InCollection, FName InPinLabel, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<UPCGData> InDataTypeClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UPCGData*> GetTypedInputsByPin(const FPCGDataCollection& InCollection, const FPCGPinProperties& InPin, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<UPCGData> InDataTypeClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UPCGData*> GetTypedInputs(const FPCGDataCollection& InCollection, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<UPCGData> InDataTypeClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPCGTaggedData> GetParamsByTag(const FPCGDataCollection& InCollection, const FString& InTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPCGTaggedData> GetParamsByPinLabel(const FPCGDataCollection& InCollection, const FName InPinLabel);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPCGTaggedData> GetParams(const FPCGDataCollection& InCollection);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPCGTaggedData> GetInputsByTag(const FPCGDataCollection& InCollection, const FString& InTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPCGTaggedData> GetInputsByPinLabel(const FPCGDataCollection& InCollection, const FName InPinLabel);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPCGTaggedData> GetInputs(const FPCGDataCollection& InCollection);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPCGTaggedData> GetAllSettings(const FPCGDataCollection& InCollection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakTaggedData(const FPCGTaggedData& TaggedData, UPCGData*& Data, TSet<FString>& Tags, FName& pin, bool& bIsUsedMultipleTimes);
    
    UFUNCTION(BlueprintCallable)
    static void AddToCollection(UPARAM(Ref) FPCGDataCollection& InCollection, const UPCGData* InData, FName InPinLabel, TArray<FString> InTags);
    
};

