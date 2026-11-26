#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowBoolArrayTypes -FallbackName=DataflowBoolArrayTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowBoolTypes -FallbackName=DataflowBoolTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNumericArrayTypes -FallbackName=DataflowNumericArrayTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNumericTypes -FallbackName=DataflowNumericTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowStringArrayTypes -FallbackName=DataflowStringArrayTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowStringTypes -FallbackName=DataflowStringTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTransformArrayTypes -FallbackName=DataflowTransformArrayTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTransformTypes -FallbackName=DataflowTransformTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowVectorArrayTypes -FallbackName=DataflowVectorArrayTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowVectorTypes -FallbackName=DataflowVectorTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowSimulation -ObjectName=DataflowSimulationNode -FallbackName=DataflowSimulationNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowSimulation -ObjectName=DataflowSimulationProperty -FallbackName=DataflowSimulationProperty
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowSimulation -ObjectName=DataflowSimulationTime -FallbackName=DataflowSimulationTime
#include "AddSolverDeformerDataflowNode.generated.h"

class UOptimusDeformer;

USTRUCT(BlueprintType)
struct FAddSolverDeformerDataflowNode : public FDataflowSimulationNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataflowSimulationProperty> PhysicsSolvers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FDataflowSimulationTime SimulationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusDeformer* MeshDeformer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowNumericTypes> DeformerNumericInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowVectorTypes> DeformerVectorInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowStringTypes> DeformerStringInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowBoolTypes> DeformerBoolInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowTransformTypes> DeformerTransformInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowNumericArrayTypes> DeformerNumericArrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowVectorArrayTypes> DeformerVectorArrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowStringArrayTypes> DeformerStringArrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowBoolArrayTypes> DeformerBoolArrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowTransformArrayTypes> DeformerTransformArrays;
    
    HAIRSTRANDSSOLVER_API FAddSolverDeformerDataflowNode();
};

