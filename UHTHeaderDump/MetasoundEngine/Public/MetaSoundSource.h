#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundWaveProcedural -FallbackName=SoundWaveProcedural
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetaSoundDocumentInterface -FallbackName=MetaSoundDocumentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendDocument -FallbackName=MetasoundFrontendDocument
#include "EMetaSoundOutputAudioFormat.h"
#include "MetaSoundSource.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UMetaSoundSource : public USoundWaveProcedural, public IMetaSoundDocumentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendDocument RootMetaSoundDocument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> ReferencedAssetClassKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> ReferencedAssetClassObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FSoftObjectPath> ReferenceAssetClassCache;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaSoundOutputAudioFormat OutputFormat;
    
    UMetaSoundSource();


    // Fix for true pure virtual functions not being implemented
};

