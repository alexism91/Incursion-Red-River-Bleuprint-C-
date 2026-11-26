#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EditPivotToolActionPropertySet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWorldBox;
    
    UEditPivotToolActionPropertySet();

    UFUNCTION(BlueprintCallable)
    void WorldOrigin();
    
    UFUNCTION(BlueprintCallable)
    void Top();
    
    UFUNCTION(BlueprintCallable)
    void Right();
    
    UFUNCTION(BlueprintCallable)
    void Left();
    
    UFUNCTION(BlueprintCallable)
    void Front();
    
    UFUNCTION(BlueprintCallable)
    void Center();
    
    UFUNCTION(BlueprintCallable)
    void Bottom();
    
    UFUNCTION(BlueprintCallable)
    void Back();
    
};

