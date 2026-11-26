#pragma once
#include "CoreMinimal.h"
#include "PCGManagedResource.h"
#include "PCGManagedDebugStringMessageKey.generated.h"

UCLASS(Blueprintable)
class UPCGManagedDebugStringMessageKey : public UPCGManagedResource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 HashKey;
    
    UPCGManagedDebugStringMessageKey();

};

