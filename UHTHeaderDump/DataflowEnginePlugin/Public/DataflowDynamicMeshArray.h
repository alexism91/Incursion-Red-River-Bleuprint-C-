#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowAnyType -FallbackName=DataflowAnyType
#include "DataflowDynamicMeshArray.generated.h"

class UDynamicMesh;

USTRUCT(BlueprintType)
struct FDataflowDynamicMeshArray : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicMesh*> Value;
    
    DATAFLOWENGINEPLUGIN_API FDataflowDynamicMeshArray();
};

