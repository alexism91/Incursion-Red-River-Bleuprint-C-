#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieGraphContainerType.h"
#include "EMovieGraphValueType.h"
#include "MovieGraphValueContainer.generated.h"

class UEnum;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphValueContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Value;
    
public:
    UMovieGraphValueContainer();

    UFUNCTION(BlueprintCallable)
    void SetValueTypeObject(const UObject* ValueTypeObject);
    
    UFUNCTION(BlueprintCallable)
    void SetValueType(EMovieGraphValueType ValueType, UObject* InValueTypeObject);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueText(const FText& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueString(const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueSerializedString(const FString& NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueObject(UObject* InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueName(const FName InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueInt64(const int64 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueInt32(const int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueFloat(const float InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueEnum(const uint8 InValue, const UEnum* Enum);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueDouble(const double InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueContainerType(EMovieGraphContainerType ContainerType);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueClass(UClass* InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueByte(const uint8 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetValueBool(const bool bInValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetValueTypeObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieGraphValueType GetValueType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueText(FText& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueString(FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetValueSerializedString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueObject(UObject* OutValue, const UClass* RequestedClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueName(FName& OutValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetValueInt64(int64& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueInt32(int32& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueFloat(float& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueEnum(uint8& OutValue, const UEnum* RequestedEnum) const;
    
    UFUNCTION(BlueprintPure)
    bool GetValueDouble(double& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieGraphContainerType GetValueContainerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueClass(UClass*& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueByte(uint8& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueBool(bool& bOutValue) const;
    
};

