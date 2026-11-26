#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRMissionSearchParams.h"
#include "IRRProgressData.h"
#include "MissionSearchParamsUpdatedDelegate.h"
#include "MissionSearchResultDelegate.h"
#include "IRRJobBoardComponent.generated.h"

class UIRRGraphData;
class UIRRMissionComponent;
class UIRRMissionData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRJobBoardComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> ContractTierByLoyaltyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> ContractTierBySuccessPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMissionComponent* MissionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMissionSearchParams SearchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SearchListTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionSearchParamsUpdated OnMissionSearchParamsUpdated;
    
    UIRRJobBoardComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSearchParams(FIRRMissionSearchParams NewSearchParams);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSearchList(FGameplayTag NewSearchListTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIRRMissionData*> SortSearchResults(FIRRMissionSearchParams InSearchParams, TArray<UIRRMissionData*> InSearchResults);
    
    UFUNCTION(BlueprintCallable)
    void RefreshMissions();
    
    UFUNCTION(BlueprintCallable)
    void RefreshMissionGraphs();
    
    UFUNCTION(BlueprintCallable)
    void OnProgressDataUpdated(FIRRProgressData OutData);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionGraphsUpdated(const TArray<UIRRGraphData*>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionDataUpdated(const TArray<UIRRMissionData*>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void FindMissionSearchResults(FIRRMissionSearchParams InSearchParams, const FMissionSearchResult& OutSearchResults);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIRRMissionData*> FilterSearchResults(FIRRMissionSearchParams InSearchParams, TArray<UIRRMissionData*> InSearchResults);
    
};

