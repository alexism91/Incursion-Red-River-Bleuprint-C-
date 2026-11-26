#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=BaseGeneratedNavLinksProxy -FallbackName=BaseGeneratedNavLinksProxy
#include "LinkReachedSignatureDelegate.h"
#include "GeneratedNavLinksProxy.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UGeneratedNavLinksProxy : public UBaseGeneratedNavLinksProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinkReachedSignature OnSmartLinkReached;
    
public:
    UGeneratedNavLinksProxy();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSmartLinkReached(AActor* Agent, const FVector Destination);
    
};

