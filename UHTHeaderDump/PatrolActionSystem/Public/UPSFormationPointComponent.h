#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
#include "UPSFormationPointComponent.generated.h"

class ACharacter;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PATROLACTIONSYSTEM_API UUPSFormationPointComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CharacterOnPoint;
    
public:
    UUPSFormationPointComponent(const FObjectInitializer& ObjectInitializer);

};

