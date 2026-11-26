#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "EIRRStance.h"
#include "IRRVisibilitySubsystem.generated.h"

class UIRRVisibilityAtlas;
class UIRRVisibilityData;

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRVisibilitySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRVisibilityData* VisibilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRVisibilityAtlas* Atlas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRVisibilityData*> LoadedChunkAssets;
    
public:
    UIRRVisibilitySubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateStreaming(const TArray<FVector>& FocusWorldPoints, float LoadRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MightBeVisible(FVector ThreatPos, EIRRStance ThreatStance, FVector CandidatePos) const;
    
    UFUNCTION(BlueprintCallable)
    void LoadVisibilityData(UIRRVisibilityData* Data);
    
    UFUNCTION(BlueprintCallable)
    void LoadVisibilityAtlas(UIRRVisibilityAtlas* NewAtlas);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProbablyCover(FVector ThreatPos, EIRRStance ThreatStance, FVector CandidatePos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDepthTowardTarget(FVector SamplePos, EIRRStance Stance, FVector TargetPos) const;
    
};

