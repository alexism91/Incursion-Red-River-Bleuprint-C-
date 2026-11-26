#include "NamingTokensEngineSubsystem.h"

UNamingTokensEngineSubsystem::UNamingTokensEngineSubsystem() {
}

void UNamingTokensEngineSubsystem::UnregisterGlobalNamespace(const FString& InNamespace) {
}

void UNamingTokensEngineSubsystem::RegisterGlobalNamespace(const FString& InNamespace) {
}

bool UNamingTokensEngineSubsystem::IsGlobalNamespaceRegistered(const FString& InNamespace) const {
    return false;
}

UNamingTokens* UNamingTokensEngineSubsystem::GetNamingTokensNative(const FString& InNamespace) const {
    return NULL;
}

UNamingTokens* UNamingTokensEngineSubsystem::GetNamingTokens(const FString& InNamespace) const {
    return NULL;
}

TArray<UNamingTokens*> UNamingTokensEngineSubsystem::GetMultipleNamingTokens(const TArray<FString>& InNamespaces) const {
    return TArray<UNamingTokens*>();
}

TArray<FString> UNamingTokensEngineSubsystem::GetGlobalNamespaces() const {
    return TArray<FString>();
}

TArray<FString> UNamingTokensEngineSubsystem::GetAllNamespaces() const {
    return TArray<FString>();
}

FNamingTokenResultData UNamingTokensEngineSubsystem::EvaluateTokenText(const FText& InTokenText, const FNamingTokenFilterArgs& InFilter, const TArray<UObject*>& InContexts) {
    return FNamingTokenResultData{};
}

FNamingTokenResultData UNamingTokensEngineSubsystem::EvaluateTokenString(const FString& InTokenString, const FNamingTokenFilterArgs& InFilter, const TArray<UObject*>& InContexts) {
    return FNamingTokenResultData{};
}

void UNamingTokensEngineSubsystem::ClearCachedNamingTokens() {
}


