#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MirrorToolActionPropertySet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonsOnlyChangeOrientation;
    
    UMirrorToolActionPropertySet();

    UFUNCTION(BlueprintCallable)
    void Up();
    
    UFUNCTION(BlueprintCallable)
    void ShiftToCenter();
    
    UFUNCTION(BlueprintCallable)
    void Right();
    
    UFUNCTION(BlueprintCallable)
    void Left();
    
    UFUNCTION(BlueprintCallable)
    void Forward();
    
    UFUNCTION(BlueprintCallable)
    void Down();
    
    UFUNCTION(BlueprintCallable)
    void Backward();
    
};

