#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NamingTokenData.h"
#include "NamingTokensEvaluationData.h"
#include "NamingTokens.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UNamingTokens : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamingTokenData> CustomTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNamingTokensEvaluationData CurrentEvaluationData;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
public:
    UNamingTokens();

private:
    UFUNCTION(BlueprintCallable)
    FText ProcessTokenTemplateFunction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreEvaluate(const FNamingTokensEvaluationData& InEvaluationData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostEvaluate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FDateTime GetCurrentDateTime() const;
    
};

