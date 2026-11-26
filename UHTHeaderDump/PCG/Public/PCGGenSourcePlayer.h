#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGGenSourceBase.h"
#include "PCGGenSourcePlayer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGenSourcePlayer : public UObject, public IPCGGenSourceBase {
    GENERATED_BODY()
public:
    UPCGGenSourcePlayer();


    // Fix for true pure virtual functions not being implemented
};

