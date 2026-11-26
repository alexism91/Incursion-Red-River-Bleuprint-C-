#pragma once
#include "CoreMinimal.h"
#include "BakeMeshAttributeMapsToolBase.h"
#include "BakeMeshAttributeMapsTool.generated.h"

class UBakeInputMeshProperties;
class UBakeMeshAttributeMapsResultToolProperties;
class UBakeMeshAttributeMapsToolProperties;
class UBakeUVShellMapToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeInputMeshProperties* InputMeshSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeMeshAttributeMapsToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeMeshAttributeMapsResultToolProperties* ResultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeUVShellMapToolProperties* UVShellSettings;
    
public:
    UBakeMeshAttributeMapsTool();

};

