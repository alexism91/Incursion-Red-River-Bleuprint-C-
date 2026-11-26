#include "RuntimeDataTableWebToken.h"

URuntimeDataTableWebToken::URuntimeDataTableWebToken() {
}

bool URuntimeDataTableWebToken::Init(const FString& InTokenText, const int32 SecondsUntilExpiration) {
    return false;
}

bool URuntimeDataTableWebToken::HasTokenExpired() const {
    return false;
}

FString URuntimeDataTableWebToken::GetTokenText() const {
    return TEXT("");
}

int32 URuntimeDataTableWebToken::GetNumberOfSecondsUntilExpiration() const {
    return 0;
}


