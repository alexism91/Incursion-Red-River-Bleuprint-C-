#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IRRAISearchArea.h"
#include "IRRAISearchGrid.generated.h"

class UBillboardComponent;
class UIRRAITarget;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRAISearchGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISearchArea SearchArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRAITarget*> SearchTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwningFaction;
    
    AIRRAISearchGrid(const FObjectInitializer& ObjectInitializer);

};

