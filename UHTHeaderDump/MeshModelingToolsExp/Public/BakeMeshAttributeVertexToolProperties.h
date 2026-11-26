#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeVertexChannel.h"
#include "EBakeVertexOutput.h"
#include "EBakeVertexTopology.h"
#include "BakeMeshAttributeVertexToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBakeVertexOutput OutputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputTypeR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputTypeG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputTypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputTypeA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBakeVertexChannel PreviewMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBakeVertexTopology TopologyMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitAtNormalSeams;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitAtUVSeams;
    
    UBakeMeshAttributeVertexToolProperties();

};

