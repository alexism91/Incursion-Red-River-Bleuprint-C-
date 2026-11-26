#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphRenderLayer.generated.h"

class UMovieGraphCollection;
class UMovieGraphCollectionModifier;
class UWorld;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphRenderLayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RenderLayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphCollectionModifier*> Modifiers;
    
public:
    UMovieGraphRenderLayer();

    UFUNCTION(BlueprintCallable)
    void SetRenderLayerName(const FName& NewName);
    
    UFUNCTION(BlueprintCallable)
    void Revert();
    
    UFUNCTION(BlueprintCallable)
    void RemoveModifier(UMovieGraphCollectionModifier* Modifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRenderLayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphCollectionModifier*> GetModifiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphCollection* GetCollectionByName(const FString& Name) const;
    
    UFUNCTION(BlueprintCallable)
    void Apply(const UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void AddModifier(UMovieGraphCollectionModifier* Modifier);
    
};

