#pragma once
#include "CoreMinimal.h"
#include "MovieGraphSettingNode.h"
#include "Templates/SubclassOf.h"
#include "MovieGraphModifierNode.generated.h"

class UMovieGraphCollectionModifier;
class UMovieGraphMergeableModifierContainer;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphModifierNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ModifierName: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModifierName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Collections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ModifiersContainer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_DisabledCollections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Collections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieGraphMergeableModifierContainer* ModifiersContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> DisabledCollections;
    
public:
    UMovieGraphModifierNode();

    UFUNCTION(BlueprintCallable)
    void SetCollectionEnabled(const FName& InCollectionName, const bool bIsCollectionEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveModifier(TSubclassOf<UMovieGraphCollectionModifier> ModifierType);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCollection(const FName& InCollectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollectionEnabled(const FName& InCollectionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphCollectionModifier*> GetModifiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphCollectionModifier* GetModifier(TSubclassOf<UMovieGraphCollectionModifier> ModifierType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetCollections() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphCollectionModifier* AddModifier(TSubclassOf<UMovieGraphCollectionModifier> ModifierType);
    
    UFUNCTION(BlueprintCallable)
    void AddCollection(const FName& InCollectionName);
    
};

