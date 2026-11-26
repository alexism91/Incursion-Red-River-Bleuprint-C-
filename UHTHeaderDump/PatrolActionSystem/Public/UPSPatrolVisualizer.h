#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UPSPatrolComponentPathData.h"
#include "UPSPatrolPointPathData.h"
#include "VisitedPoint.h"
#include "UPSPatrolVisualizer.generated.h"

class UUPSPatrolVisualizer;

UCLASS(Blueprintable)
class PATROLACTIONSYSTEM_API UUPSPatrolVisualizer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUPSPatrolPointPathData> PatrolPointsPathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUPSPatrolComponentPathData> PatrolComponentsPathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVisitedPoint> VisitedPoints;
    
public:
    UUPSPatrolVisualizer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUPSPatrolVisualizer* Get();
    
    UFUNCTION(BlueprintCallable)
    void EnablePointActionVisualization(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnablePathVisualizationInGame(bool bEnable);
    
};

