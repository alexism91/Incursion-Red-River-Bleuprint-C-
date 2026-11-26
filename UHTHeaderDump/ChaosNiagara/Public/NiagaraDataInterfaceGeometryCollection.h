#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraUserParameterBinding -FallbackName=NiagaraUserParameterBinding
#include "ENDIGeometryCollection_SourceMode.h"
#include "NiagaraDataInterfaceGeometryCollection.generated.h"

class AGeometryCollectionActor;
class UGeometryCollection;
class UGeometryCollectionComponent;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENDIGeometryCollection_SourceMode SourceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCollection* DefaultGeometryCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGeometryCollectionActor> GeometryCollectionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGeometryCollectionComponent* SourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding GeometryCollectionUserParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeIntermediateBones;
    
    UNiagaraDataInterfaceGeometryCollection();

};

