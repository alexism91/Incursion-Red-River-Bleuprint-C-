#include "KismetTextLibrary.h"

UKismetTextLibrary::UKismetTextLibrary() {
}

FText UKismetTextLibrary::TextTrimTrailing(const FText& InText) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::TextTrimPrecedingAndTrailing(const FText& InText) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::TextTrimPreceding(const FText& InText) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::TextToUpper(const FText& InText) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::TextToLower(const FText& InText) {
    return FText::GetEmpty();
}

bool UKismetTextLibrary::TextIsTransient(const FText& InText) {
    return false;
}

bool UKismetTextLibrary::TextIsFromStringTable(const FText& Text) {
    return false;
}

bool UKismetTextLibrary::TextIsEmpty(const FText& InText) {
    return false;
}

bool UKismetTextLibrary::TextIsCultureInvariant(const FText& InText) {
    return false;
}

FText UKismetTextLibrary::TextFromStringTable(const FName TableId, const FString& Key) {
    return FText::GetEmpty();
}

bool UKismetTextLibrary::StringTableIdAndKeyFromText(FText Text, FName& OutTableId, FString& OutKey) {
    return false;
}

FText UKismetTextLibrary::PolyglotDataToText(const FPolyglotTextData& PolyglotData) {
    return FText::GetEmpty();
}

bool UKismetTextLibrary::NotEqual_TextText(const FText& A, const FText& B) {
    return false;
}

bool UKismetTextLibrary::NotEqual_IgnoreCase_TextText(const FText& A, const FText& B) {
    return false;
}

FText UKismetTextLibrary::MakeInvariantText(const FString& InString) {
    return FText::GetEmpty();
}

void UKismetTextLibrary::IsPolyglotDataValid(const FPolyglotTextData& PolyglotData, bool& IsValid, FText& ErrorMessage) {
}

FString UKismetTextLibrary::GetTextSourceString(FText Text) {
    return TEXT("");
}

bool UKismetTextLibrary::GetTextId(FText Text, FString& OutNamespace, FString& OutKey) {
    return false;
}

FText UKismetTextLibrary::GetEmptyText() {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Format(FText InPattern, TArray<FFormatArgumentData> InArgs) {
    return FText::GetEmpty();
}

bool UKismetTextLibrary::FindTextInLocalizationTable(const FString& Namespace, const FString& Key, FText& OutText, const FString& SourceString) {
    return false;
}

bool UKismetTextLibrary::EqualEqual_TextText(const FText& A, const FText& B) {
    return false;
}

bool UKismetTextLibrary::EqualEqual_IgnoreCase_TextText(const FText& A, const FText& B) {
    return false;
}

bool UKismetTextLibrary::EditTextSourceString(UObject* TextOwner, FText& Text, const FString& SourceString, const bool bEmitChangeNotify) {
    return false;
}

bool UKismetTextLibrary::EditTextPropertySourceString(UObject* TextOwner, const FName PropertyName, const FString& SourceString, const bool bEmitChangeNotify) {
    return false;
}

FText UKismetTextLibrary::Conv_VectorToText(FVector InVec) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_Vector2dToText(FVector2D InVec) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_TransformToText(const FTransform& InTrans) {
    return FText::GetEmpty();
}

FString UKismetTextLibrary::Conv_TextToString(const FText& InText) {
    return TEXT("");
}

FText UKismetTextLibrary::Conv_StringToText(const FString& InString) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_RotatorToText(FRotator InRot) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_ObjectToText(UObject* InObj) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_NumericPropertyToText(const int32& Value) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_NameToText(FName InName) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_IntToText(int32 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_DoubleToText(double Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_ColorToText(FLinearColor InColor) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_ByteToText(uint8 Value) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::Conv_BoolToText(bool InBool) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsTimeZoneTime_DateTime(const FDateTime& InDateTime, const FString& InTimeZone, TEnumAsByte<EDateTimeStyle::Type> InTimeStyle) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsTimeZoneDateTime_DateTime(const FDateTime& InDateTime, const FString& InTimeZone, TEnumAsByte<EDateTimeStyle::Type> InDateStyle, TEnumAsByte<EDateTimeStyle::Type> InTimeStyle) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsTimeZoneDate_DateTime(const FDateTime& InDateTime, const FString& InTimeZone, TEnumAsByte<EDateTimeStyle::Type> InDateStyle) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsTimespan_Timespan(const FTimespan& InTimespan) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsTime_DateTime(const FDateTime& In, TEnumAsByte<EDateTimeStyle::Type> InTimeStyle) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsMemory(int64 NumBytes, TEnumAsByte<EMemoryUnitStandard> UnitStandard, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsDateTime_DateTime(const FDateTime& In, TEnumAsByte<EDateTimeStyle::Type> InDateStyle, TEnumAsByte<EDateTimeStyle::Type> InTimeStyle) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsDate_DateTime(const FDateTime& InDateTime, TEnumAsByte<EDateTimeStyle::Type> InDateStyle) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsCurrencyBase(int32 BaseValue, const FString& CurrencyCode) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsCurrency_Integer(int32 Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, const FString& CurrencyCode) {
    return FText::GetEmpty();
}

FText UKismetTextLibrary::AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, const FString& CurrencyCode) {
    return FText::GetEmpty();
}


