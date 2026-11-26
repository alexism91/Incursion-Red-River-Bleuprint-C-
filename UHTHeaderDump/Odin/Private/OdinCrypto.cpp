#include "OdinCrypto.h"

UOdinCrypto::UOdinCrypto() {
    this->Handle = NULL;
}

void UOdinCrypto::SetSecret(const TArray<uint8>& NewSecret) {
}

TArray<uint8> UOdinCrypto::GetSecret() const {
    return TArray<uint8>();
}

EOdinCryptoPeerStatus UOdinCrypto::GetPeerStatus(int64 PeerId) {
    return EOdinCryptoPeerStatus::ODIN_CRYPTO_PEER_STATUS_PASSWORD_MISSMATCH;
}

UOdinCrypto* UOdinCrypto::ConstructCrypto(UObject* WorldContextObject, const TArray<uint8>& NewSecret) {
    return NULL;
}


