#include "NamingTokens.h"

UNamingTokens::UNamingTokens() {
}

FText UNamingTokens::ProcessTokenTemplateFunction() {
    return FText::GetEmpty();
}

void UNamingTokens::OnPreEvaluate_Implementation(const FNamingTokensEvaluationData& InEvaluationData) {
}

void UNamingTokens::OnPostEvaluate_Implementation() {
}

FDateTime UNamingTokens::GetCurrentDateTime_Implementation() const {
    return FDateTime{};
}


