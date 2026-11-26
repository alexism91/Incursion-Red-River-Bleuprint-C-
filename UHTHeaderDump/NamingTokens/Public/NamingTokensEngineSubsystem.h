#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "NamingTokenFilterArgs.h"
#include "NamingTokenResultData.h"
#include "NamingTokensEngineSubsystem.generated.h"

class UNamingTokens;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UNamingTokensEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UNamingTokens*> CachedNamingTokens;
    
public:
    UNamingTokensEngineSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterGlobalNamespace(const FString& InNamespace);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGlobalNamespace(const FString& InNamespace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGlobalNamespaceRegistered(const FString& InNamespace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNamingTokens* GetNamingTokensNative(const FString& InNamespace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNamingTokens* GetNamingTokens(const FString& InNamespace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UNamingTokens*> GetMultipleNamingTokens(const TArray<FString>& InNamespaces) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetGlobalNamespaces() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllNamespaces() const;
    
    UFUNCTION(BlueprintCallable)
    FNamingTokenResultData EvaluateTokenText(const FText& InTokenText, const FNamingTokenFilterArgs& InFilter, const TArray<UObject*>& InContexts);
    
    UFUNCTION(BlueprintCallable)
    FNamingTokenResultData EvaluateTokenString(const FString& InTokenString, const FNamingTokenFilterArgs& InFilter, const TArray<UObject*>& InContexts);
    
    UFUNCTION(BlueprintCallable)
    void ClearCachedNamingTokens();
    
};

