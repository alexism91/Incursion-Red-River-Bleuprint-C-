#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieGraphContainerType.h"
#include "EMovieGraphValueType.h"
#include "MovieJobVariableAssignmentContainer.generated.h"

class UEnum;
class UMovieGraphConfig;
class UMovieGraphVariable;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieJobVariableAssignmentContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMovieGraphConfig> GraphPreset;
    
public:
    UMovieJobVariableAssignmentContainer();

    UFUNCTION(BlueprintCallable)
    bool SetVariableAssignmentEnableState(const UMovieGraphVariable* InGraphVariable, bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueText(const UMovieGraphVariable* InGraphVariable, const FText& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueString(const UMovieGraphVariable* InGraphVariable, const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueSerializedString(const UMovieGraphVariable* InGraphVariable, const FString& NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueObject(const UMovieGraphVariable* InGraphVariable, UObject* InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueName(const UMovieGraphVariable* InGraphVariable, const FName InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueInt64(const UMovieGraphVariable* InGraphVariable, const int64 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueInt32(const UMovieGraphVariable* InGraphVariable, const int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueFloat(const UMovieGraphVariable* InGraphVariable, const float InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueEnum(const UMovieGraphVariable* InGraphVariable, const uint8 InValue, const UEnum* Enum);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueDouble(const UMovieGraphVariable* InGraphVariable, const double InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueClass(const UMovieGraphVariable* InGraphVariable, UClass* InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueByte(const UMovieGraphVariable* InGraphVariable, const uint8 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueBool(const UMovieGraphVariable* InGraphVariable, const bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphConfig(const TSoftObjectPtr<UMovieGraphConfig>& InGraphConfig);
    
    UFUNCTION(BlueprintCallable)
    bool GetVariableAssignmentEnableState(const UMovieGraphVariable* InGraphVariable, bool& bOutIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetValueTypeObject(const UMovieGraphVariable* InGraphVariable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieGraphValueType GetValueType(const UMovieGraphVariable* InGraphVariable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueText(const UMovieGraphVariable* InGraphVariable, FText& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueString(const UMovieGraphVariable* InGraphVariable, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetValueSerializedString(const UMovieGraphVariable* InGraphVariable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueObject(const UMovieGraphVariable* InGraphVariable, UObject* OutValue, const UClass* RequestedClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueName(const UMovieGraphVariable* InGraphVariable, FName& OutValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetValueInt64(const UMovieGraphVariable* InGraphVariable, int64& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueInt32(const UMovieGraphVariable* InGraphVariable, int32& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueFloat(const UMovieGraphVariable* InGraphVariable, float& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueEnum(const UMovieGraphVariable* InGraphVariable, uint8& OutValue, const UEnum* RequestedEnum) const;
    
    UFUNCTION(BlueprintPure)
    bool GetValueDouble(const UMovieGraphVariable* InGraphVariable, double& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieGraphContainerType GetValueContainerType(const UMovieGraphVariable* InGraphVariable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueClass(const UMovieGraphVariable* InGraphVariable, UClass*& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueByte(const UMovieGraphVariable* InGraphVariable, uint8& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueBool(const UMovieGraphVariable* InGraphVariable, bool& bOutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMovieGraphConfig> GetGraphConfig() const;
    
};

