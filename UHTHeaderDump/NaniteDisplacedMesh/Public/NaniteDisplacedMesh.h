#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AsyncCompilation -FallbackName=Interface_AsyncCompilation
#include "NaniteDisplacedMesh.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNaniteDisplacedMesh : public UObject, public IInterface_AsyncCompilation {
    GENERATED_BODY()
public:
    UNaniteDisplacedMesh();


    // Fix for true pure virtual functions not being implemented
};

