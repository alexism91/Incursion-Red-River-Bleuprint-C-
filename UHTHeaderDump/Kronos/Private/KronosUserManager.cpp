#include "KronosUserManager.h"

UKronosUserManager::UKronosUserManager() {
    this->AuthWidgetClass = NULL;
    this->AuthWidget = NULL;
    this->bDebugSimulateAuthFailure = false;
}

void UKronosUserManager::OnCustomAuthTasksComplete(bool bWasSuccessful, const FText& ErrorText) {
}

bool UKronosUserManager::LogoutUser() {
    return false;
}






bool UKronosUserManager::IsLogoutInProgress() const {
    return false;
}

bool UKronosUserManager::IsAuthenticatingUser() const {
    return false;
}

bool UKronosUserManager::IsAuthenticated() const {
    return false;
}

void UKronosUserManager::GetLoginCredentials_Implementation(FString& LoginType, FString& LoginId, FString& LoginToken) {
}

EKronosUserAuthState UKronosUserManager::GetCurrentAuthState() const {
    return EKronosUserAuthState::NotAuthenticating;
}

UKronosUserManager* UKronosUserManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UKronosUserManager::BeginCustomAuthTasks_Implementation() {
}

bool UKronosUserManager::AuthenticateUser() {
    return false;
}


