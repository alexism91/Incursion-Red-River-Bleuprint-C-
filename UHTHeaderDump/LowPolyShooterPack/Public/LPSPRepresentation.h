#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LPSPRepresentation.generated.h"

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPRepresentation : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenInGame;
    
public:
    ALPSPRepresentation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TrySetEnabled(const bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
};

