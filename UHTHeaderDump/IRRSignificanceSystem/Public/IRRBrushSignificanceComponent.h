#pragma once
#include "CoreMinimal.h"
#include "IRRSignificanceComponent.h"
#include "IRRBrushSignificanceComponent.generated.h"

class UBrushComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRSIGNIFICANCESYSTEM_API UIRRBrushSignificanceComponent : public UIRRSignificanceComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrushComponent* BrushComponent;
    
public:
    UIRRBrushSignificanceComponent(const FObjectInitializer& ObjectInitializer);

};

