#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphMetadataAttribute.h"
#include "MovieGraphTraversableObject.h"
#include "MovieGraphMetadataAttributeCollection.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphMetadataAttributeCollection : public UObject, public IMovieGraphTraversableObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieGraphMetadataAttribute> MetadataAttributes;
    
    UMovieGraphMetadataAttributeCollection();


    // Fix for true pure virtual functions not being implemented
};

