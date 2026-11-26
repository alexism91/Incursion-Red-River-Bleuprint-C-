#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RuntimeDataTableWebToken.generated.h"

UCLASS(Blueprintable)
class RUNTIMEDATATABLE_API URuntimeDataTableWebToken : public UObject {
    GENERATED_BODY()
public:
    URuntimeDataTableWebToken();

    UFUNCTION(BlueprintCallable)
    bool Init(const FString& InTokenText, const int32 SecondsUntilExpiration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTokenExpired() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetTokenText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfSecondsUntilExpiration() const;
    
};

