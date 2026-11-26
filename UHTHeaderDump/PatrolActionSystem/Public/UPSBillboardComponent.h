#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
#include "UPSBillboardComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PATROLACTIONSYSTEM_API UUPSBillboardComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
    UUPSBillboardComponent(const FObjectInitializer& ObjectInitializer);

};

