#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "IRRAIGroupPawn.generated.h"

class AIRRAIGroupController;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRAIGroupPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIRRAIGroupController* GroupController;
    
public:
    AIRRAIGroupPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGroupController(AIRRAIGroupController* NewController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIRRAIGroupController* GetGroupController() const;
    
};

