#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ChaosClothAssetInteractor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UChaosClothAssetInteractor : public UObject {
    GENERATED_BODY()
public:
    UChaosClothAssetInteractor();

    UFUNCTION(BlueprintCallable)
    void SetWeightedFloatValue(const FString& PropertyName, int32 LODIndex, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorValue(const FString& PropertyName, int32 LODIndex, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStringValue(const FString& PropertyName, int32 LODIndex, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLowFloatValue(const FString& PropertyName, int32 LODIndex, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIntValue(const FString& PropertyName, int32 LODIndex, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighFloatValue(const FString& PropertyName, int32 LODIndex, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatValue(const FString& PropertyName, int32 LODIndex, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetWeightedFloatValue(const FString& PropertyName, int32 LODIndex, FVector2D DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVectorValue(const FString& PropertyName, int32 LODIndex, FVector DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringValue(const FString& PropertyName, int32 LODIndex, const FString& DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLowFloatValue(const FString& PropertyName, int32 LODIndex, float DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntValue(const FString& PropertyName, int32 LODIndex, int32 DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHighFloatValue(const FString& PropertyName, int32 LODIndex, float DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatValue(const FString& PropertyName, int32 LODIndex, float DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllProperties(int32 LODIndex) const;
    
};

