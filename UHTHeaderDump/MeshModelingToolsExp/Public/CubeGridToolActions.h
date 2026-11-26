#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "CubeGridToolActions.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCubeGridToolActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GridSourceActor;
    
    UCubeGridToolActions();

    UFUNCTION(BlueprintCallable)
    void SlideForward();
    
    UFUNCTION(BlueprintCallable)
    void SlideBack();
    
    UFUNCTION(BlueprintCallable)
    void ResetGridFromActor();
    
    UFUNCTION(BlueprintCallable)
    void Push();
    
    UFUNCTION(BlueprintCallable)
    void Pull();
    
    UFUNCTION(BlueprintCallable)
    void Flip();
    
    UFUNCTION(BlueprintCallable)
    void CornerMode();
    
    UFUNCTION(BlueprintCallable)
    void AcceptAndStartNew();
    
};

