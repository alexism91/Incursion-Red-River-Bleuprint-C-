#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponentInstanceData -FallbackName=ActorComponentInstanceData
#include "PCGComponentInstanceData.generated.h"

class UPCGComponent;

USTRUCT(BlueprintType)
struct FPCGComponentInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGComponent* SourceComponent;
    
public:
    PCG_API FPCGComponentInstanceData();
};

