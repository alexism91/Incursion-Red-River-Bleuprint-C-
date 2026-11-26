#include "OdinTokenGenerator.h"

UOdinTokenGenerator::UOdinTokenGenerator() {
    this->handle_ = NULL;
}

void UOdinTokenGenerator::GenerateRoomToken(const FString& RoomId, const FString& UserId, UOdinJsonObject*& JsonAuth, FString& token) {
}

UOdinTokenGenerator* UOdinTokenGenerator::ConstructTokenGenerator(UObject* WorldContextObject, const FString& accessKey) {
    return NULL;
}


