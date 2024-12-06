#ifndef UE4SS_SDK_Button_VehicleRecall_HPP
#define UE4SS_SDK_Button_VehicleRecall_HPP

class AButton_VehicleRecall_C : public AButton_Generic_C
{
    bool CartRecall;                                                                  // 0x042A (size: 0x1)

    void WorldFlagCheck(bool& HasAllFlags);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
}; // Size: 0x42B

#endif
