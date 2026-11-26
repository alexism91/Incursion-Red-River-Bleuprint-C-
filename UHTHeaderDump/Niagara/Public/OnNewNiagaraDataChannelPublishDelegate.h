#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataChannelUpdateContext.h"
#include "OnNewNiagaraDataChannelPublishDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnNewNiagaraDataChannelPublish, const FNiagaraDataChannelUpdateContext&, NewDataContext);

