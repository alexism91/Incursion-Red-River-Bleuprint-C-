#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MassEntityObserverClassesMap.h"
#include "MassObserverRegistry.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMassObserverRegistry : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassEntityObserverClassesMap FragmentObservers[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassEntityObserverClassesMap TagObservers[2];
    
public:
    UMassObserverRegistry();

};

