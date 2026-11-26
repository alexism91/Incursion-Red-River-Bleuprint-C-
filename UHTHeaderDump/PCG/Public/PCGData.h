#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGData.generated.h"

class UPCGMetadata;

UCLASS(Blueprintable, MinimalAPI)
class UPCGData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGMetadata* MetaData;
    
    UPCGData();

    UFUNCTION(BlueprintCallable)
    UPCGMetadata* MutableMetadata();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGMetadata* ConstMetadata() const;
    
};

