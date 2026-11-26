#pragma once
#include "CoreMinimal.h"
#include "ERuntimeDataTableBackupResultCode.generated.h"

UENUM(BlueprintType)
enum class ERuntimeDataTableBackupResultCode : uint8 {
    DownloadFailedWithoutBackup,
    DownloadFailedAndBackupExistsBuCouldNotBeLoaded,
    DownloadSucceededButCsvCouldNotBeParsed,
    DownloadFailedAndBackupLoaded,
    DownloadSucceededAndBackupSaved,
    DownloadSucceededAndBackupCouldNotBeSaved,
};

