#include "VisualLoggerKismetLibrary.h"

UVisualLoggerKismetLibrary::UVisualLoggerKismetLibrary() {
}

void UVisualLoggerKismetLibrary::RedirectVislog(UObject* SourceOwner, UObject* DestinationOwner) {
}

void UVisualLoggerKismetLibrary::LogText(UObject* WorldContextObject, const FString& Text, FName LogCategory, bool bAddToMessageLog) {
}

void UVisualLoggerKismetLibrary::LogSphere(UObject* WorldContextObject, FVector Center, float Radius, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog, bool bWireframe) {
}

void UVisualLoggerKismetLibrary::LogSegment(UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog) {
}

void UVisualLoggerKismetLibrary::LogOrientedBox(UObject* WorldContextObject, FBox BoxShape, FTransform Transform, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog, bool bWireframe) {
}

void UVisualLoggerKismetLibrary::LogLocation(UObject* WorldContextObject, FVector Location, const FString& Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog) {
}

void UVisualLoggerKismetLibrary::LogCylinder(UObject* WorldContextObject, FVector Start, FVector End, float Radius, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog, bool bWireframe) {
}

void UVisualLoggerKismetLibrary::LogCone(UObject* WorldContextObject, FVector Origin, FVector Direction, float Length, float Angle, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog, bool bWireframe) {
}

void UVisualLoggerKismetLibrary::LogCircle(UObject* WorldContextObject, FVector Center, FVector UpAxis, float Radius, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog, bool bWireframe) {
}

void UVisualLoggerKismetLibrary::LogCapsule(UObject* WorldContextObject, FVector base, float HalfHeight, float Radius, FQuat Rotation, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog, bool bWireframe) {
}

void UVisualLoggerKismetLibrary::LogBox(UObject* WorldContextObject, FBox BoxShape, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog, bool bWireframe) {
}

void UVisualLoggerKismetLibrary::LogArrow(UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, const FString& Text, FLinearColor ObjectColor, FName CategoryName, bool bAddToMessageLog, float ArrowHeadSize) {
}

void UVisualLoggerKismetLibrary::EnableRecording(bool bEnabled) {
}


