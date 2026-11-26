#pragma once
#include "CoreMinimal.h"
#include "MovieGraphCollectionModifier.h"
#include "MovieGraphMaterialModifier.generated.h"

class UMaterialInterface;
class UWorld;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphMaterialModifier : public UMovieGraphCollectionModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Material: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UMovieGraphMaterialModifier();

    UFUNCTION(BlueprintCallable)
    void UndoModifier();
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(TSoftObjectPtr<UMaterialInterface> InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void ApplyModifier(const UWorld* World);
    
};

