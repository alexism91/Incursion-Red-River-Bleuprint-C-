#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzer -FallbackName=AudioAnalyzer
#include "OnConstantQResultsDelegate.h"
#include "OnLatestConstantQResultsDelegate.h"
#include "ConstantQAnalyzer.generated.h"

class UConstantQSettings;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UConstantQAnalyzer : public UAudioAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstantQSettings* Settings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConstantQResults OnConstantQResults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLatestConstantQResults OnLatestConstantQResults;
    
    UConstantQAnalyzer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCenterFrequencies() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCenterFrequencies(TArray<float>& OutCenterFrequencies);
    
};

