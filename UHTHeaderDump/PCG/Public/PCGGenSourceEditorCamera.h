#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGGenSourceBase.h"
#include "PCGGenSourceEditorCamera.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGenSourceEditorCamera : public UObject, public IPCGGenSourceBase {
    GENERATED_BODY()
public:
    UPCGGenSourceEditorCamera();


    // Fix for true pure virtual functions not being implemented
};

