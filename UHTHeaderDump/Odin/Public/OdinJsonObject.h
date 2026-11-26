#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OdinJsonObject.generated.h"

class UOdinJsonObject;
class UOdinJsonValue;

UCLASS(Blueprintable)
class ODIN_API UOdinJsonObject : public UObject {
    GENERATED_BODY()
public:
    UOdinJsonObject();

    UFUNCTION(BlueprintCallable)
    void SetStringField(const FString& FieldName, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectField(const FString& FieldName, UOdinJsonObject* JsonObject);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectArrayField(const FString& FieldName, const TArray<UOdinJsonObject*>& ObjectArray);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberField(const FString& FieldName, float Number);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldNull(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable)
    void SetField(const FString& FieldName, UOdinJsonValue* JsonValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolField(const FString& FieldName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray);
    
    UFUNCTION(BlueprintCallable)
    void SetArrayField(const FString& FieldName, const TArray<UOdinJsonValue*>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RemoveField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable)
    void MergeJsonObject(UOdinJsonObject* InJsonObject, bool Overwrite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStringArrayField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOdinJsonObject* GetObjectField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOdinJsonObject*> GetObjectArrayField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNumberField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetNumberArrayField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetFieldNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOdinJsonValue* GetField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoolField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> GetBoolArrayField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOdinJsonValue*> GetArrayField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> EncodeJsonBytes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString EncodeJson() const;
    
    UFUNCTION(BlueprintCallable)
    bool DecodeJson(const FString& JsonString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinJsonObject* ConstructJsonObjectFromString(UObject* WorldContextObject, const FString& Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinJsonObject* ConstructJsonObjectFromBytes(UObject* WorldContextObject, const TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinJsonObject* ConstructJsonObject(UObject* WorldContextObject);
    
};

