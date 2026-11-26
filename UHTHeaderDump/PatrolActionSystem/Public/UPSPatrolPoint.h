#pragma once
#include "CoreMinimal.h"
#include "PatrolPointLink.h"
#include "PatrolPointSettings.h"
#include "UPSBasePatrolObject.h"
#include "UPSPatrolPoint.generated.h"

class ACharacter;
class AUPSPatrolPoint;
class UArrowComponent;
class UBillboardComponent;

UCLASS(Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSPatrolPoint : public AUPSBasePatrolObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatrolPointSettings PatrolPointSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatrolPointLink> PatrolPointLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatrolPointLink> BackwardPatrolPointLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatrolPointLink> CachedPatrolPointLinks;
    
public:
    AUPSPatrolPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePatrolPointSettings(UPARAM(Ref) FPatrolPointSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPatrolPointSettings GetPatrolPointSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPatrolPointLink> GetNextPatrolPointLinks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AUPSPatrolPoint* GetNextPatrolPoint(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPatrolPointLink> GetBackwardPatrolPointLinks();
    
    UFUNCTION(BlueprintCallable)
    void AddNextLink(FPatrolPointLink Link);
    
};

