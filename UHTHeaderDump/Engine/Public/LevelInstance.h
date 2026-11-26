#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Actor.h"
#include "LevelInstanceInterface.h"
#include "LevelInstance.generated.h"

class ULevel;
class ULevelInstanceComponent;
class UWorld;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ALevelInstance : public AActor, public ILevelInstanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelInstanceComponent* LevelInstanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> CookedWorldAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid LevelInstanceSpawnGuid;
    
public:
    ALevelInstance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UnloadLevelInstance() override PURE_VIRTUAL(UnloadLevelInstance,);
    
    UFUNCTION(BlueprintCallable)
    bool SetWorldAsset(TSoftObjectPtr<UWorld> WorldAsset) override PURE_VIRTUAL(SetWorldAsset, return false;);
    
    UFUNCTION(BlueprintCallable)
    void LoadLevelInstance() override PURE_VIRTUAL(LoadLevelInstance,);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoaded() const override PURE_VIRTUAL(IsLoaded, return false;);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UWorld> GetWorldAsset() const override PURE_VIRTUAL(GetWorldAsset, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    ULevel* GetLoadedLevel() const override PURE_VIRTUAL(GetLoadedLevel, return NULL;);
    
};

