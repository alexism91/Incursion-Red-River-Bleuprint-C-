#pragma once
#include "CoreMinimal.h"
#include "DataStream.h"
#include "ChunkedDataStream.generated.h"

class UIrisObjectReferencePackageMap;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UChunkedDataStream : public UDataStream {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIrisObjectReferencePackageMap* PackageMap;
    
public:
    UChunkedDataStream();

};

