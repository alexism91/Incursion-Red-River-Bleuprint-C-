#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EOdinSocketKind.h"
#include "OdinNativeSocketCreateErrorDelegate.h"
#include "OdinNativeSocketCreateResponsePinDelegate.h"
#include "OdinNativeSocketCreateSuccessDelegate.h"
#include "OdinNativeSocketCreate.generated.h"

class UObject;
class UOdinNativeSocketCreate;
class UOdinRoom;
class UOdinSocket;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeSocketCreate : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeSocketCreateResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOdinRoom> room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOdinSocketKind SocketKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetPeerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinSocket* socket;
    
    UOdinNativeSocketCreate();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeSocketCreate* SocketCreate(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, EOdinSocketKind NewSocketKind, int32 RemotePeerId, int32 NewLabel, int32 NewPriority, const FOdinNativeSocketCreateError& onError, const FOdinNativeSocketCreateSuccess& OnSuccess);
    
};

