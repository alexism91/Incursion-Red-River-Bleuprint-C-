#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WeldMeshEdgesOperatorFactory.generated.h"

class UWeldMeshEdgesTool;

UCLASS(Blueprintable, MinimalAPI)
class UWeldMeshEdgesOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeldMeshEdgesTool* WeldMeshEdgesTool;
    
    UWeldMeshEdgesOperatorFactory();

};

