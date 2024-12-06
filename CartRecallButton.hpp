#ifndef UE4SS_SDK_CartRecallButton_HPP
#define UE4SS_SDK_CartRecallButton_HPP

class ACartRecallButton_C : public AVehicleRecallStation_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UBillboardComponent* LootLocation;                                          // 0x02F0 (size: 0x8)

    void TryRecallCart(class AMoveableCart_ParentBP_C* cart);
    void TryVehicleRecall(bool Activated);
    void ExecuteUbergraph_CartRecallButton(int32 EntryPoint);
}; // Size: 0x2F8

#endif
