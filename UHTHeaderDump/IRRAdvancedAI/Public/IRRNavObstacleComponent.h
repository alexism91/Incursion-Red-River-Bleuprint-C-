#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent
#include "IRRNavObstacleComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRADVANCEDAI_API UIRRNavObstacleComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNavCarve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartCarving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Padding;
    
    UIRRNavObstacleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetObstacleComponent(UPrimitiveComponent* InObstacleComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetObstacleActor(AActor* InObstacleActor);
    
    UFUNCTION(BlueprintCallable)
    void SetCarving(bool bCarve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetObstacleActor() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceRefresh();
    
};

