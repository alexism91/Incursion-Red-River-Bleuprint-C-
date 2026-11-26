#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=AudioParameter -FallbackName=AudioParameter
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=EMetasoundFrontendLiteralType -FallbackName=EMetasoundFrontendLiteralType
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendLiteral -FallbackName=MetasoundFrontendLiteral
#include "EMetaSoundBuilderResult.h"
#include "MetasoundFrontendLiteralBlueprintAccess.generated.h"

class UObject;

UCLASS(Blueprintable)
class UMetasoundFrontendLiteralBlueprintAccess : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMetasoundFrontendLiteralBlueprintAccess();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMetasoundFrontendLiteralType GetType(const FMetasoundFrontendLiteral& Literal);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetStringArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetObjectValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> GetObjectArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIntValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetIntArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> GetFloatArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoolValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<bool> GetBoolArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(const TArray<FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(const TArray<UObject*>& Value);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(const FAudioParameter& Param);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(const TArray<float>& Value);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(const TArray<bool>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_MetaSoundLiteralToString(const FMetasoundFrontendLiteral& Literal);
    
};

