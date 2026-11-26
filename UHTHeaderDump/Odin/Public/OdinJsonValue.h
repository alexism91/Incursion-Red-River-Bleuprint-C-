#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOJson.h"
#include "OdinJsonValue.generated.h"

class UOdinJsonObject;
class UOdinJsonValue;

UCLASS(Blueprintable)
class ODIN_API UOdinJsonValue : public UObject {
    GENERATED_BODY()
public:
    UOdinJsonValue();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTypeString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EOJson::Type> GetType() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinJsonValue* ConstructJsonValueString(UObject* WorldContextObject, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinJsonValue* ConstructJsonValueObject(UObject* WorldContextObject, UOdinJsonObject* JsonObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinJsonValue* ConstructJsonValueNumber(UObject* WorldContextObject, float Number);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinJsonValue* ConstructJsonValueBool(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinJsonValue* ConstructJsonValueArray(UObject* WorldContextObject, const TArray<UOdinJsonValue*>& inArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString AsString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOdinJsonObject* AsObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float AsNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AsBool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOdinJsonValue*> AsArray() const;
    
};

