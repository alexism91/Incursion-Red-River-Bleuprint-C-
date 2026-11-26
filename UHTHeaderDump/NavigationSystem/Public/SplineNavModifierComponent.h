#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "ESubdivisionLOD.h"
#include "NavModifierComponent.h"
#include "SplineNavModifierComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USplineNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateNavDataOnSplineChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference AttachedSpline;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StrokeWidth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StrokeHeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubdivisionLOD SubdivisionLOD;
    
public:
    USplineNavModifierComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateNavigationWithComponentData();
    
};

