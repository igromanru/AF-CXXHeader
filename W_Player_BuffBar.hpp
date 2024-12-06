#ifndef UE4SS_SDK_W_Player_BuffBar_HPP
#define UE4SS_SDK_W_Player_BuffBar_HPP

class UW_Player_BuffBar_C : public UUserWidget
{
    class UUniformGridPanel* BuffSlots;                                               // 0x02E0 (size: 0x8)
    int32 Column;                                                                     // 0x02E8 (size: 0x4)

    void OnCurrentBuffsUpdated(class UCharacterBuffComponent* BuffComponent);
}; // Size: 0x2EC

#endif
