#ifndef UE4SS_SDK_PowerSocket_ChildOfActor_HPP
#define UE4SS_SDK_PowerSocket_ChildOfActor_HPP

class APowerSocket_ChildOfActor_C : public APowerSocket_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x03B0 (size: 0x8)
    int32 SocketIndex;                                                                // 0x03B8 (size: 0x4)

    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    bool HasBatteryInParentChain();
    FString GetPowerSocketID();
    void IsPowered(bool& PowerOn);
    void ReceiveBeginPlay();
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ExecuteUbergraph_PowerSocket_ChildOfActor(int32 EntryPoint);
}; // Size: 0x3BC

#endif
