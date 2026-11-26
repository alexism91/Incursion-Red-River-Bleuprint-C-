#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRNavLocation.h"
#include "IRRAINavLocationContainer.generated.h"

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRAINavLocationContainer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRNavLocation NavLocation;
    
public:
    UIRRAINavLocationContainer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNodeRef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRNavLocation GetNavLocation() const;
    
};

