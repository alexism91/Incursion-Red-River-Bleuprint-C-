#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetaSoundFrontendDocumentBuilder.generated.h"

class IMetaSoundDocumentInterface;
class UMetaSoundDocumentInterface;

USTRUCT(BlueprintType)
struct FMetaSoundFrontendDocumentBuilder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMetaSoundDocumentInterface> DocumentInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid BuildPageID;
    
public:
    METASOUNDFRONTEND_API FMetaSoundFrontendDocumentBuilder();
};

