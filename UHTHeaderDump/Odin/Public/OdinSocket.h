#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOdinSocketKind.h"
#include "OdinSocketInfo.h"
#include "OdinSocket.generated.h"

class UOdinHandle;
class UOdinRoom;
class UOdinSocket;

UCLASS(Blueprintable)
class ODIN_API UOdinSocket : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOdinSocketReceivedDelegate, UOdinRoom*, room, UOdinSocket*, socket, const TArray<uint8>&, Data);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinSocketReceivedDelegate OnSocketMessageReceivedBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinSocketInfo Info;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinHandle* Handle;
    
public:
    UOdinSocket();

    UFUNCTION(BlueprintCallable)
    bool SendString(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    bool Send(TArray<uint8> Message);
    
    UFUNCTION(BlueprintCallable)
    bool ResetSocket();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSocketNamedLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSocketLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOdinSocketInfo GetSocketInfo();
    
    UFUNCTION(BlueprintPure)
    int64 GetRemotePeerId();
    
    UFUNCTION(BlueprintCallable)
    UOdinSocket* Create(UOdinRoom* room, EOdinSocketKind SocketKind, int64 TargetPeerId, int32 Label, int32 Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinSocket* ConstructSocket(UObject* WorldContextObject);
    
};

