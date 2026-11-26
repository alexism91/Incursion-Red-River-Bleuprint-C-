#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterPalette.h"
#include "MetaHumanCollectionBuiltData.h"
#include "MetaHumanCollection.generated.h"

class UMetaHumanCharacterInstance;
class UMetaHumanCollectionPipeline;

UCLASS(Blueprintable)
class METAHUMANCHARACTERPALETTE_API UMetaHumanCollection : public UMetaHumanCharacterPalette {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMetaHumanCollectionPipeline* pipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanCharacterInstance* DefaultInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCollectionBuiltData ProductionBuiltData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnpacked;
    
public:
    UMetaHumanCollection();

};

