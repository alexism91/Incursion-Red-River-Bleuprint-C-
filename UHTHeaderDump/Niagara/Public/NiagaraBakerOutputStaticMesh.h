#pragma once
#include "CoreMinimal.h"
#include "NiagaraBakerOutput.h"
#include "NiagaraRendererReadbackParameters.h"
#include "NiagaraBakerOutputStaticMesh.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraBakerOutputStaticMesh : public UNiagaraBakerOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FramesAssetPathFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraRendererReadbackParameters ExportParameters;
    
    UNiagaraBakerOutputStaticMesh();

};

