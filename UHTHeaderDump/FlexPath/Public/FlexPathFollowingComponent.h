#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdFollowingComponent -FallbackName=CrowdFollowingComponent
#include "FlexPathRotationState.h"
#include "PathFollowingSettings.h"
#include "PathSmoothingSettings.h"
#include "FlexPathFollowingComponent.generated.h"

class AAIController;
class APawn;
class UNavMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FLEXPATH_API UFlexPathFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomPathSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathSmoothingSettings SmoothingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathFollowingSettings FollowingSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* CachedAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* CachedControllerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavMovementComponent* CachedNavMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlexPathRotationState RotationState;
    
public:
    UFlexPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFlexPathSettings(const FPathSmoothingSettings& InSmoothing, const FPathFollowingSettings& InFollowing);
    
    UFUNCTION(BlueprintCallable)
    void SetFlexPathEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingCustomPathSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlexPathEnabled() const;
    
};

