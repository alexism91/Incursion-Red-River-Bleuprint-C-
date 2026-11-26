#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGGenSourceBase.h"
#include "PCGGenSourceWPStreamingSource.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGenSourceWPStreamingSource : public UObject, public IPCGGenSourceBase {
    GENERATED_BODY()
public:
    UPCGGenSourceWPStreamingSource();


    // Fix for true pure virtual functions not being implemented
};

