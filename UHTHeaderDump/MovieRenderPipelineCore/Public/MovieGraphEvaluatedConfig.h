#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphEvaluatedBranchConfig.h"
#include "MovieGraphEvaluatedConfig.generated.h"

class UMovieGraphSettingNode;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphEvaluatedConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FMovieGraphEvaluatedBranchConfig> BranchConfigMapping;
    
    UMovieGraphEvaluatedConfig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphSettingNode*> GetSettingsForBranch(UClass* InClass, const FName InBranchName, bool bIncludeCDOs, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphSettingNode* GetSettingForBranch(UClass* InClass, const FName InBranchName, bool bIncludeCDOs, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetBranchNames() const;
    
};

