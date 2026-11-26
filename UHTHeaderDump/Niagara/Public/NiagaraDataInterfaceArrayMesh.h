#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraMeshRendererMeshPropertiesBase.h"
#include "NiagaraRenderableMeshArrayInterface.h"
#include "NiagaraDataInterfaceArrayMesh.generated.h"

class UNiagaraComponent;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceArrayMesh : public UNiagaraDataInterfaceArray, public INiagaraRenderableMeshArrayInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraMeshRendererMeshPropertiesBase> MeshData;
    
    UNiagaraDataInterfaceArrayMesh();

    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayMeshSM(UNiagaraComponent* NiagaraComponent, FName OverrideName, const TArray<UStaticMesh*>& ArrayData);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayMesh(UNiagaraComponent* NiagaraComponent, FName OverrideName, const TArray<FNiagaraMeshRendererMeshPropertiesBase>& ArrayData);
    

    // Fix for true pure virtual functions not being implemented
};

