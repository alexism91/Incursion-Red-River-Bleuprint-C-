#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RemoveOccludedTrianglesOperatorFactory.generated.h"

class URemoveOccludedTrianglesTool;

UCLASS(Blueprintable, MinimalAPI)
class URemoveOccludedTrianglesOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URemoveOccludedTrianglesTool* Tool;
    
    URemoveOccludedTrianglesOperatorFactory();

};

