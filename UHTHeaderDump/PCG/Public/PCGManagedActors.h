#pragma once
#include "CoreMinimal.h"
#include "PCGManagedResource.h"
#include "PCGManagedActors.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UPCGManagedActors : public UPCGManagedResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<AActor>> GeneratedActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> GeneratedActorsArray;
    
public:
    UPCGManagedActors();

};

