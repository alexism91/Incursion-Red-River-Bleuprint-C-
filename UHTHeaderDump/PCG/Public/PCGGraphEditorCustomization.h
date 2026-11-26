#pragma once
#include "CoreMinimal.h"
#include "EPCGGraphEditorFiltering.h"
#include "PCGGraphEditorCustomization.generated.h"

class UPCGGraph;

USTRUCT(BlueprintType)
struct FPCGGraphEditorCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPCGGraph* Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterNodesByCategory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGGraphEditorFiltering NodeFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> FilteredCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterSubgraphs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGGraphEditorFiltering SubgraphFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UPCGGraph>> FilteredSubgraphTypes;
    
    PCG_API FPCGGraphEditorCustomization();
};

