#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "SearchFactionData.h"
#include "IRRSearchSubsystem.generated.h"

class AIRRAISearchGrid;
class UIRRNavAreaMap;

UCLASS(Blueprintable)
class TEST_C_API UIRRSearchSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSearchFactionData> FactionSearchGridMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIRRAISearchGrid*> PooledSearchGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRNavAreaMap* NavAreaMap;
    
public:
    UIRRSearchSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNavMapUpdated(const UIRRNavAreaMap* NavMap);
    
    UFUNCTION(BlueprintCallable)
    void GridPoolingCheck();
    
};

