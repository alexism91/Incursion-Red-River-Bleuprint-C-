#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "LandscapeSubsystem.generated.h"

class ALandscape;
class ALandscapeProxy;
class ALandscapeStreamingProxy;

UCLASS(Blueprintable, MinimalAPI)
class ULandscapeSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TSet<ALandscapeStreamingProxy*> StreamingProxiesNeedingReregister;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALandscape*> LandscapeActors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALandscapeProxy*> Proxies;
    
public:
    ULandscapeSubsystem();

};

