#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOdinCryptoPeerStatus.h"
#include "OdinCrypto.generated.h"

class UOdinCrypto;
class UOdinHandle;

UCLASS(Blueprintable)
class ODIN_API UOdinCrypto : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Secret;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinHandle* Handle;
    
public:
    UOdinCrypto();

    UFUNCTION(BlueprintCallable)
    void SetSecret(const TArray<uint8>& NewSecret);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetSecret() const;
    
    UFUNCTION(BlueprintPure)
    EOdinCryptoPeerStatus GetPeerStatus(int64 PeerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinCrypto* ConstructCrypto(UObject* WorldContextObject, const TArray<uint8>& NewSecret);
    
};

