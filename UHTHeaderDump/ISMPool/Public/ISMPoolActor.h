#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ISMPoolActor.generated.h"

class UISMPoolComponent;
class UISMPoolDebugDrawComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AISMPoolActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UISMPoolComponent* ISMPoolComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UISMPoolDebugDrawComponent* ISMPoolDebugDrawComp;
    
public:
    AISMPoolActor(const FObjectInitializer& ObjectInitializer);

};

