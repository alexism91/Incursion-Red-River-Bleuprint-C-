#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "NiagaraDataChannelSearchParameters.h"
#include "NiagaraID.h"
#include "NiagaraSpawnInfo.h"
#include "NiagaraDataChannelReader.generated.h"

class UNiagaraDataChannelHandler;

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraDataChannelReader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataChannelHandler* Owner;
    
    UNiagaraDataChannelReader();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector4 ReadVector4(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D ReadVector2D(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ReadVector(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNiagaraSpawnInfo ReadSpawnInfo(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat ReadQuat(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ReadPosition(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor ReadLinearColor(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ReadInt(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNiagaraID ReadID(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintPure)
    double ReadFloat(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 ReadEnum(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ReadBool(FName VarName, int32 Index, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Num() const;
    
    UFUNCTION(BlueprintCallable)
    bool InitAccess(FNiagaraDataChannelSearchParameters SearchParams, bool bReadPrevFrameData);
    
};

