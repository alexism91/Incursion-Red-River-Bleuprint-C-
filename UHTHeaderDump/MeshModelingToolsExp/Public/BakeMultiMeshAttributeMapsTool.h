#pragma once
#include "CoreMinimal.h"
#include "BakeMeshAttributeMapsToolBase.h"
#include "BakeMultiMeshAttributeMapsTool.generated.h"

class UBakeMeshAttributeMapsResultToolProperties;
class UBakeMultiMeshAttributeMapsToolProperties;
class UBakeMultiMeshInputToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeMultiMeshAttributeMapsToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeMultiMeshInputToolProperties* InputMeshSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeMeshAttributeMapsResultToolProperties* ResultSettings;
    
public:
    UBakeMultiMeshAttributeMapsTool();

};

