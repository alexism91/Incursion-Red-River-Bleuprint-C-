#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ObjectTickInterface.h"
#include "IRRAISubManagerBase.generated.h"

class UWorldSubsystem;

UCLASS(Abstract, Blueprintable)
class IRRADVANCEDAI_API UIRRAISubManagerBase : public UObject, public IObjectTickInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldSubsystem* OwnerHub;
    
    UIRRAISubManagerBase();


    // Fix for true pure virtual functions not being implemented
};

