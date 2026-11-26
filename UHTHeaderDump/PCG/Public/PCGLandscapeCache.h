#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPCGLandscapeCacheSerializationContents.h"
#include "EPCGLandscapeCacheSerializationMode.h"
#include "PCGLandscapeCache.generated.h"

UCLASS(Blueprintable)
class UPCGLandscapeCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGLandscapeCacheSerializationMode SerializationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGLandscapeCacheSerializationContents CookedSerializedContents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> CachedLayerNames;
    
public:
    UPCGLandscapeCache();

    UFUNCTION(BlueprintCallable)
    void PrimeCache();
    
    UFUNCTION(BlueprintCallable)
    void ClearCache();
    
};

