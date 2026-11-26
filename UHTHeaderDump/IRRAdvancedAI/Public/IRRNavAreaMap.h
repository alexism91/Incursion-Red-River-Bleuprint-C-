#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "NavMapData.h"
#include "IRRNavAreaMap.generated.h"

class ANavigationData;

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRNavAreaMap : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavMapData NavMapData;
    
public:
    UIRRNavAreaMap();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNavMeshGenerationFinished(ANavigationData* NavData);
    
};

