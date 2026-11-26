#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESlatePostRT -FallbackName=ESlatePostRT
#include "SlatePostBufferUpdateInfo.h"
#include "Widget.h"
#include "PostBufferUpdate.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPostBufferUpdate : public UWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateOnlyPaintArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformDefaultPostBufferUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESlatePostRT> BuffersToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlatePostBufferUpdateInfo> UpdateBufferInfos;
    
public:
    UPostBufferUpdate();

};

