#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AdvancedSBBTV_SplineVolume.generated.h"

UCLASS(Blueprintable, NoExport)
class TEST_C_API AAdvancedSBBTV_SplineVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleStepCm;
    
    AAdvancedSBBTV_SplineVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RebuildCachedPolygon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInsideVolume(const FVector& Point) const;
    
};

