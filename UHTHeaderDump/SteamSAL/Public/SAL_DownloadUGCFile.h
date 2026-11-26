#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SAL_OnDownloadUGCFileFailureDelegate.h"
#include "SAL_OnDownloadUGCFileSuccessDelegate.h"
#include "SAL_UGCHandle.h"
#include "SAL_DownloadUGCFile.generated.h"

class UObject;
class USAL_DownloadUGCFile;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_DownloadUGCFile : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnDownloadUGCFileSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnDownloadUGCFileFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USAL_DownloadUGCFile();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_DownloadUGCFile* DownloadUGCFile(UObject* NewWorldContextObject, FSAL_UGCHandle UGCHandle, int32 MaxBytes);
    
};

