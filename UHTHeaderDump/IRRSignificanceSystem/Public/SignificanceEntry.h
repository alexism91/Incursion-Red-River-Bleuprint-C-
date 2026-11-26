#pragma once
#include "CoreMinimal.h"
#include "SignificanceEntry.generated.h"

class AActor;
class UIRRSignificanceComponent;
class UObject;

USTRUCT(BlueprintType)
struct FSignificanceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRSignificanceComponent* DistanceProvider;
    
    IRRSIGNIFICANCESYSTEM_API FSignificanceEntry();
};

