#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkId -FallbackName=NavLinkId
#include "NavLinkCustomInterface.h"
#include "BaseGeneratedNavLinksProxy.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBaseGeneratedNavLinksProxy : public UObject, public INavLinkCustomInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNavLinkId LinkProxyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
public:
    UBaseGeneratedNavLinksProxy();


    // Fix for true pure virtual functions not being implemented
};

