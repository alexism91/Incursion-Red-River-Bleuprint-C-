#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "MoviePipelineConfigBase.generated.h"

class UMoviePipelineConfigBase;
class UMoviePipelineSetting;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineConfigBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMoviePipelineSetting*> Settings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMoviePipelineConfigBase> ConfigOrigin;
    
public:
    UMoviePipelineConfigBase();

    UFUNCTION(BlueprintCallable)
    void SetConfigOrigin(UMoviePipelineConfigBase* InConfig);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSetting(UMoviePipelineSetting* InSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMoviePipelineSetting*> GetUserSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineConfigBase* GetConfigOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMoviePipelineSetting*> FindSettingsByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineSetting* FindSettingByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineSetting* FindOrAddSettingByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings, const bool bExactMatch);
    
    UFUNCTION(BlueprintCallable)
    void CopyFrom(UMoviePipelineConfigBase* InConfig);
    
};

