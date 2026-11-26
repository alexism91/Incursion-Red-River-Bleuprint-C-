#pragma once
#include "CoreMinimal.h"
#include "MovieGraphSettingNode.h"
#include "MovieGraphSetMetadataAttributesNode.generated.h"

class UMovieGraphMetadataAttributeCollection;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphSetMetadataAttributesNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MetadataAttributeCollection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieGraphMetadataAttributeCollection* MetadataAttributeCollection;
    
    UMovieGraphSetMetadataAttributesNode();

};

